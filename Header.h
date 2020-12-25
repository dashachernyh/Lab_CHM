#pragma once
#define _USE_MATH_DEFINES
#include<math.h>
#include <vector>
#include<fstream>

std::ofstream out;

const double ksi = 0.4;
const double C1 = 0.0605572228666504, C2 = -1.06055722286665;
const double C_1 = -0.472024550734437, C_2 = -4.33108482358006;
const double sqrt_ksi_div = sqrt(ksi / (ksi + 1));
const double sqrt_ksi = sqrt(ksi);

double k1(double x) {
	return x + 1;
}

double k2(double x) {
	return x;
}

double q1(double x) {
	return x ;
}
double q2(double x) {
	return x*x;
}

double f1(double x) {
	return x;
}

double f2(double x) {
	return exp(-x);
}
double func_1(double x) {
	return (C1 * exp(sqrt_ksi_div * x) + C2 * exp(-sqrt_ksi_div * x) + 1);
}
double func_2(double x) {
	return (C_1 * exp(sqrt_ksi * x) + C_2 * exp(-sqrt_ksi * x) + exp(-ksi) / (ksi * ksi));
}

double newx(double i, double n) {
	return(i / n);
}
void test_coef(double n, std::vector<double>& ai, std::vector<double>& di, std::vector<double>& fi) {

	ai[0] = 0;
	for (int i = 1; i < n + 1 ; i++) {
		if (newx(i - 1, n) <= 0.4 && newx(i, n) <= 0.4)
			ai[i] = 1.4;
		else if (newx(i - 1, n) >= 0.4 && newx(i, n) >= 0.4)
			ai[i] = 0.4;
		else
			ai[i] = 1 / ((n)*(0.4 - newx(i - 1, n)) / 1.4 + (n)*(newx(i, n) - 0.4) / 0.4); 
	}
	di[0] = 0;
	for (int i = 1; i < n; i++) {
		if (newx(i + 0.5, n) <= 0.4 && newx(i - 0.5, n) <= 0.4)
			di[i] = 0.4;
		else if (newx(i + 0.5, n) >= 0.4 && newx(i - 0.5, n) >= 0.4)
			di[i ] = 0.16;
		else
			di[i] = 0.16*(n)*(newx(i + 0.5, n) - 2.5*newx(i - 0.5, n) + 0.6); //n*(0.4*(0.4-newx(i - 0.5, n)) + 0.16*(newx(i + 0.5, n) -0.4)); // было n

	}
	fi[0] = 0;
	for (int i = 1; i < n; i++) {
		if (newx(i + 0.5, n) <= 0.4 && newx(i - 0.5, n) <= 0.4)
			fi[i] = 0.4;
		else if (newx(i + 0.5, n) >= 0.4 && newx(i - 0.5, n) >= 0.4)
			fi[i] = exp(-0.4);  //pow(M_E, -0.4);
		else
			fi[i] = (n) * (0.4*(0.4 - newx(i - 0.5, n)) + exp(-0.4)*(newx(i + 0.5, n) - 0.4));  
	}
}
void main_coef(double n, std::vector<double>& ai, std::vector<double>& di, std::vector<double>& fi) {
	ai[0] = 0;
	double x = 0;
	//out.open("Graph.txt", std::ofstream::ios_base::app);
	for (int i = 1; i < n + 1; i++) {
		if (newx(i - 1, n) <= 0.4 && newx(i, n) <= 0.4)
			//ai[i] = 1 / ((n)*log((newx(i, n) + 1) / (newx(i - 1, n) + 1)));
			ai[i] = k1(newx(i - 0.5, n));
		else if (newx(i - 1, n) >= 0.4 && newx(i, n) >= 0.4)
			//ai[i] = 1 / ((n)*log(newx(i, n) / newx(i - 1, n)));
			ai[i] = k2(newx(i - 0.5, n));
		else
			//ai[i] = 1 / ((n)*(log(3.5) + log(newx(i, n) / (newx(i - 1, n) + 1))));
			ai[i]= 1/(n * ((0.4 - newx(i-1, n)) / k1(0.5 * (newx(i-1, n) + 0.4)) + (newx(i,n) - 0.4)/ k2(0.5 * (newx(i, n) + 0.4))));
		//out << "a[" << i << "]" << ai[i] << std::endl;
	}
	di[0] = 0;
	for (int i = 1; i < n ; i++) {
		if (newx(i + 0.5, n) <= 0.4 && newx(i - 0.5, n) <= 0.4)
			//di[i] = (newx(i + 0.5, n) + newx(i - 0.5, n)) / 2;
			di[i] = q1(newx(i , n));
		else if (newx(i + 0.4, n) >= 0.4 && newx(i - 0.5, n) >= 0.4)
			//di[i] = (newx(i + 0.5, n)*(newx(i + 0.5, n) + newx(i - 0.5, n)) + newx(i - 0.5, n)*newx(i - 0.5, n)) / 3;
			di[i] = q2(newx(i, n));
		else
			//di[i] = (n)*((0.16 - newx(i - 0.5, n)*newx(i - 0.5, n)) / 2 + (newx(i + 0.5, n)*newx(i + 0.5, n)*newx(i + 0.5, n) - 0.064) / 3);
		di[i]= n * ((0.4 - newx(i-0.5,n)) * q1(0.5 * (newx(i -0.5,n) + 0.4)) + (newx(i + 0.5, n) - 0.4) * q2(0.5 * (newx(i + 0.5, n) + 0.4)));
			//out << "d[" << i << "]" << di[i] << std::endl;
	}
	fi[0] = 0;
	for (int i = 1; i < n ; i++) {
		if (newx(i + 0.5, n) <= 0.4 && newx(i - 0.5, n) <= 0.4)
			//fi[i] = (newx(i + 0.5, n) + newx(i - 0.5, n)) / 2;
			fi[i] = f1(newx(i, n));
		else if (newx(i + 0.5, n) >= 0.4 && newx(i - 0.5, n) >= 0.4)
			//fi[i] = -(n + 1)*(exp(-newx(i + 0.5, n)) + exp(-newx(i - 0.5, n)));
			fi[i] = f2(newx(i, n));
		else
			//fi[i] = (n)*((0.16 - newx(i - 0.5, n)*newx(i - 0.5, n)) / 2 + (-exp(-newx(i + 0.5, n)) + exp(-0.4)));
			fi[i] = n * ((0.4 - newx(i - 0.5, n)) * f1(0.5 * (newx(i - 0.5, n) + 0.4)) + (newx(i + 0.5, n) - 0.4) * f2(0.5 * (newx(i + 0.5, n) + 0.4)));
		//out << "f[" << i << "]" << fi[i] << std::endl;
	}
	//out.close();
}
void test_matrix(double n, std::vector<double>& next, std::vector<double>& cent, std::vector<double>& prev, std::vector<double>& f) {
	std::vector<double> ai(n + 1), di(n + 1), fi(n + 1);
	test_coef(n, ai, di, fi);
	prev = ai;
	prev[1] *= (n*n);
	next= prev;
	cent = di;
	f = fi;
	for (int i = 2; i < n + 1; i++) {
		prev[i] = prev[i] * (n * n);
		next[i - 1] = prev[i];
		cent[i - 1] = cent[i - 1] + prev[i] + prev[i - 1];
	}
	prev[n] = 0;
	cent[0] = 1;
	cent[n] = 1;
	next[n] = 0;
	f[0] = 0;
	f[n] = 1;
}

void main_matrix(double n, std::vector<double>& next, std::vector<double>& cent, std::vector<double>& prev, std::vector<double>& f) {
	std::vector<double> ai(n + 1), di(n + 1), fi(n + 1);
	main_coef(n, ai, di, fi);
	prev = ai;
	prev[1] *= (n*n);
	next = prev;
	cent = di;
	f = fi;
	for (int i = 2; i < n + 1; i++) {
		prev[i] = prev[i] * (n * n);
		next[i - 1] = prev[i];
		cent[i - 1] = cent[i - 1] + prev[i] + prev[i - 1];
	}
	prev[n] = 0;
	cent[0] = 1;
	cent[n] = 1;
	next[n] = 0;
	f[0] = 0;
	f[n] = 1;
}
void slay(double n, std::vector<double>& prev, std::vector<double>& cur, std::vector<double>& next, std::vector<double>& f, std::vector<double>& x)
{   // прогонка
	std::vector<double> alf(n + 1, 0);
	std::vector<double> bet(n + 1, 0);
	alf[1] = next[0];
	bet[1] = f[0];
	double m;
	for (int i = 2; i < n + 1; i++)
	{
		m = cur[i - 1] - alf[i - 1] * prev[i - 1];
		alf[i] = next[i - 1] / m;
		bet[i] = (f[i - 1] + bet[i - 1] * prev[i - 1]) / m;
	}
	x[n] = (f[n] + prev[n] * bet[n]) / (1 - prev[n] * alf[n]); ///
	for (int i = n - 1; i >= 0; i--) {
		x[i] = alf[i + 1] * x[i + 1] + bet[i + 1];
	}
}
