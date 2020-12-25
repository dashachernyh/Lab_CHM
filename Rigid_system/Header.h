#pragma once
#include<vector>
#define _USE_MATH_DEFINES
#include<math.h>
#include<random>
#include<ctime>
#include<iostream>
class Pos {
public:
	double x;
	double u_1;
	double u_2;
	double e_1, e_2;

	Pos() {
		x = 0;
		u_1 = 0;
		u_2 = 0;
		e_1 = 0;
		e_2 = 0;
	}
	Pos(double _x, double _u_1, double _u_2, double _e) {
		x = _x;
		u_1 = _u_1;
		u_2 = _u_2;
		e_1 = _e;
		e_2 = _e;
	}
	Pos(Pos& pos) {
		x = pos.x;
		u_1 = pos.u_1;
		u_2 = pos.u_2;
		e_1 = pos.e_1;
		e_2 = pos.e_2;
	}
};

std::vector<double> solve(std::vector<double> A, double h) {
	std::vector<double> rez(4, 0);
	// (E-hA)
	rez[0] = 1 - h * A[0];
	rez[3] = 1 - h * A[3];
	rez[1] = -h * A[1];
	rez[2] = -h * A[2];
	// определитель
	double det = rez[0] * rez[3] - rez[2] * rez[1];
    // алгебраическое дополнение
	rez[1] *= -1;
	rez[2] *= -1;
	//она симметричная
	// обратная
	for (int i = 0; i < 4; i++) {
		rez[i] *= 1 / det;
	}
	return rez;
}
Pos Method(Pos pos, double h) {
	std::vector<double> A = { -500.005, 499.995, 499.995, -500.005 };
	Pos nextPos;
	nextPos.x = pos.x + h;
	std::vector<double> matrix(4, 0);
	matrix = solve(A, h);
	nextPos.u_1 = matrix[0] * pos.u_1 + matrix[1] * pos.u_2;
	nextPos.u_2 = matrix[2] * pos.u_1 + matrix[3] * pos.u_2;
	return nextPos;
}


Pos start( Pos pos, double &h, int &countDev, double eps) {
	std::vector<double> A = { -500.005, 499.995, 499.995, -500.005 };
	Pos nextPos;
	
	std::vector<double> uslovie{ 0, 0 };
	Pos nextPos_h2 = pos;
	double h2 = h;
	nextPos_h2 = Method(nextPos_h2, h2);
	countDev = -1;
	do {
		nextPos = nextPos_h2;
		nextPos_h2 = pos;
		h2 /= 2;

		for (int j = 0; j < 2; j++) {
			nextPos_h2 = Method(nextPos_h2,h2);
		}
		countDev++;
		uslovie[0] = fabs(nextPos_h2.u_1 - nextPos.u_1);
		uslovie[1] = fabs(nextPos_h2.u_2 - nextPos.u_2);
		if (uslovie[0] > eps && uslovie[1] > eps)
		{
			nextPos_h2 = Method(pos, h2);
		}
	} while (uslovie[0] >= eps && uslovie[1]>=eps);

	h = 2 * h2;

	if ((uslovie[0]< eps/4 && uslovie[1] < eps/4) && countDev == 0) countDev = -1;
	if ((uslovie[0] < eps && uslovie[1] < eps) && countDev == 0) countDev = 0;
	return nextPos;
}

Pos func_ist(double x) {
	std::vector<double> W1 = { -1, 1 }, W2 = { 1, 1 };
	double a1 = 3, a2 = 10;
	double n1, n2;
	n1 = -1000 * x;
	n2 = -0.01*x;
	Pos rez;
	rez.u_1 = a1 * W1[0] * pow(M_E, n1) + 10 * W2[0] * pow(M_E, n2);
	rez.u_2= a1 * W1[1] * pow(M_E, n1) + 10 * W2[1] * pow(M_E, n2);
	return rez;
}