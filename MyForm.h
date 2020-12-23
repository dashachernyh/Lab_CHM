#pragma once
#include <math.h>
#include <string>
#include "Header.h"



namespace Rigid_system {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ H_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V_i;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LOC;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DIV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MUL;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::TextBox^  textBox5;


	private: int status;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private:

		bool loc = false;









	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox10;





	private: System::Windows::Forms::DataGridView^  dataGridView1;










	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Xn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  u_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  u_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  E_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  E_2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label2;













	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->LOC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Xn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->E_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->E_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(48, 321);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 152);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// LOC
			// 
			this->LOC->Name = L"LOC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(248, 145);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальный шаг";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(251, 166);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 235);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Масштаб";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(136, 197);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1,2";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(18, 197);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(117, 84);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 18);
			this->label7->TabIndex = 19;
			this->label7->Text = L"u(0)_2";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(76, 206);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Масштаб";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 18);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(465, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Задача :  жесткая система (неявный м. Эйлера)";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(251, 105);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(112, 22);
			this->textBox9->TabIndex = 23;
			this->textBox9->Text = L"100";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(248, 84);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 17);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Максимальное число шагов";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1076, 18);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 25);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Справка";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1049, 48);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(15, 58);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(152, 18);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Начальные условия:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(120, 105);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(63, 22);
			this->textBox10->TabIndex = 32;
			this->textBox10->Text = L"13";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->n, this->Xn,
					this->u_1, this->u_2, this->V_1, this->V_2, this->E_1, this->E_2
			});
			this->dataGridView1->Location = System::Drawing::Point(745, 321);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(646, 402);
			this->dataGridView1->TabIndex = 38;
			// 
			// n
			// 
			this->n->HeaderText = L"n";
			this->n->Name = L"n";
			this->n->ReadOnly = true;
			this->n->Width = 50;
			// 
			// Xn
			// 
			this->Xn->HeaderText = L"Xn";
			this->Xn->Name = L"Xn";
			this->Xn->ReadOnly = true;
			this->Xn->Width = 60;
			// 
			// u_1
			// 
			this->u_1->HeaderText = L"u^((1))";
			this->u_1->Name = L"u_1";
			this->u_1->ReadOnly = true;
			this->u_1->Width = 60;
			// 
			// u_2
			// 
			this->u_2->HeaderText = L"u^((2))";
			this->u_2->Name = L"u_2";
			this->u_2->ReadOnly = true;
			this->u_2->Width = 60;
			// 
			// V_1
			// 
			this->V_1->HeaderText = L"V^((1))";
			this->V_1->Name = L"V_1";
			this->V_1->ReadOnly = true;
			this->V_1->Width = 60;
			// 
			// V_2
			// 
			this->V_2->HeaderText = L"V^((2))";
			this->V_2->Name = L"V_2";
			this->V_2->ReadOnly = true;
			this->V_2->Width = 60;
			// 
			// E_1
			// 
			this->E_1->HeaderText = L"E^((1))";
			this->E_1->Name = L"E_1";
			this->E_1->ReadOnly = true;
			this->E_1->Width = 60;
			// 
			// E_2
			// 
			this->E_2->HeaderText = L"E^((2))";
			this->E_2->Name = L"E_2";
			this->E_2->ReadOnly = true;
			this->E_2->Width = 60;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(248, 58);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(152, 18);
			this->label13->TabIndex = 39;
			this->label13->Text = L"Параметры метода :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(592, 48);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(532, 225);
			this->label17->TabIndex = 40;
			this->label17->Text = L"du(1)/dx=-500.005*u^((1)) + 499.995*U^((2));"
				L"\ndu(2)/dx=499.995*u^((1)) - 500.005*U^((2));"
				L"\nu^((1))(0) = 7, u^((2))(0) = 13;\n"
				L"\nТочное решение для начальных условий:\nu(0)_1=7, u(0)_2=13";

			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(592, 18);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(192, 25);
			this->label18->TabIndex = 41;
			this->label18->Text = L"Описание системы";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 105);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"7";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 84);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"u(0)_1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(249, 235);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 43;
			this->textBox2->Text = L"0,001";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(243, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 17);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Контроль локальной погрешности";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1497, 802);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Задача_9";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int n = 0;
		double maxH = 0;
		double minH = 999999;
		double maxE_1 = 0;
		double maxE_2 = 0;

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		panel->Title->Text = "Зависимость U  от x";
		panel->XAxis->Title->Text = "X";
		panel->YAxis->Title->Text = "U(x)";
		
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // Численное (с помощью рк4) v(1)
		PointPairList^ f1_2_list = gcnew ZedGraph::PointPairList(); // Численное (с помощью рк4) V(2)
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // Истинное (просто через функцию посчитать) u(1)
		PointPairList^ f2_2_list = gcnew ZedGraph::PointPairList(); // Истинное (просто через функцию посчитать) u(2)

		// Шаг по Х
 		double h = Convert::ToDouble(textBox3->Text);
		double _h = Convert::ToDouble(textBox3->Text);
		// Начальные условия U
		double u_1 = Convert::ToDouble(textBox1->Text);
		double u_2 = Convert::ToDouble(textBox10->Text);
		// Максимальная погрешность
		double eps = Convert::ToDouble(textBox2->Text);
		// Максимальное количество шагов
		int maxI = Convert::ToDouble(textBox9->Text);
		double xmin = 0;
		// Границы графика
		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmin+_h;

		Pos pos(xmin, u_1, u_2, 0);
		double x = xmin;
		int i = 0; // Счетчик итераций
		dataGridView1->Rows->Clear();
		double ymax = u_2;
		if (ymax < u_1) ymax = u_1;

		// контроль лп
		
		int count = -1;
		do {
			//Добавление на график
			f1_list->Add(pos.x, pos.u_1);
			f1_2_list->Add(pos.x, pos.u_2);
			f2_list->Add(pos.x, u_1);
			f2_2_list->Add(pos.x, u_2);
			
	//f1_list->Add(pos.x, pos.u);
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = pos.x;
			dataGridView1->Rows[i]->Cells[2]->Value = func_ist(pos.x).u_1;
			dataGridView1->Rows[i]->Cells[3]->Value = func_ist(pos.x).u_2;
			dataGridView1->Rows[i]->Cells[4]->Value = pos.u_1;
			dataGridView1->Rows[i]->Cells[5]->Value = pos.u_2;
			dataGridView1->Rows[i]->Cells[6]->Value = func_ist(pos.x).u_1 - pos.u_1;
			dataGridView1->Rows[i]->Cells[7]->Value = func_ist(pos.x).u_2 - pos.u_2;

			pos = start(pos, h, count, eps); 

			u_1 = func_ist(pos.x).u_1;
			u_2 = func_ist(pos.x).u_2;

			if (maxE_1 < fabs(func_ist(pos.x).u_1 - pos.u_1)) maxE_1 = fabs(func_ist(pos.x).u_1 - pos.u_1);
			if (maxE_2 < fabs(func_ist(pos.x).u_2 - pos.u_2)) maxE_2 = fabs(func_ist(pos.x).u_2 - pos.u_2);
			if (h > maxH) maxH = h;
			if (h < minH) minH = h;
			if (pos.x > xmax_limit) xmax_limit = pos.x + h;
			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
			i++;
		} while ( i < maxI + 1 || (pos.u_1<FLT_EPSILON && pos.u_2<FLT_EPSILON)); 


		label11->Text ="n = " + i + "\nМаксимальный шаг " + maxH + "\nМинимальный шаг: " + minH + "\nМаксимальная глобальная ошибка шаг: " +"\nE_1 = " + maxE_1 + "\nE_2 = " + maxE_2;
		
		LineItem Curve4 = panel->AddCurve("Точное решение u(1)", f2_list, Color::Blue, SymbolType::None);
		LineItem Curve3 = panel->AddCurve("Точное решение u(2)", f2_2_list, Color::DeepSkyBlue, SymbolType::None);
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		LineItem Curve1 = panel->AddCurve("Численное решение v(1)", f1_list, Color::Red, SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("Численное решение v(2)", f1_2_list, Color::Brown, SymbolType::Plus);
		//"n \nЧисло удвоений: \nЧисло делений: \nМаксимальный шаг: \nМинимальный шаг: "

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		panel->YAxis->Scale->Min = xmin_limit;
		panel->YAxis->Scale->Max = ymax+2;
	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		double xmin = Convert::ToDouble(textBox5->Text);
		double xmax = Convert::ToDouble(textBox4->Text);
		
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;
		panel->YAxis->Scale->Min = xmin;
		//panel->YAxis->Scale->Max = xmax;

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	//private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//	numTask = comboBox1->SelectedIndex;
	//}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
			 //private: System::Void checkBox1_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
			 //	loc = comboBox1->CheckState
			 //}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
