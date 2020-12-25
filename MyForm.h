#pragma once
#include "Header.h"

namespace Regional_task {

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
		//void MainTask(void);
		//void TestTask(void);

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

	protected:







	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;


	private:
		int numTask = 0;



	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label2;










	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label15;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(435, 45);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 24);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(253, 47);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Число разбиений n:";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(10, 280);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(7);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(801, 459);
			this->zedGraphControl1->TabIndex = 7;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(1756, 43);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(300, 138);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Разность решений";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 70);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 18);
			this->label2->TabIndex = 0;
			this->label2->Text = L"label2";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(822, 280);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(608, 200);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ui";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"vi";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"ui-vi";
			this->Column5->Name = L"Column5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(252, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 20);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Параметры системы";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 211);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(187, 32);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Масштаб";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(18, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(54, 24);
			this->textBox2->TabIndex = 13;
			this->textBox2->Tag = L"";
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(78, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(54, 24);
			this->textBox3->TabIndex = 14;
			this->textBox3->Text = L"1";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Основная задача", L"Тестовая задача" });
			this->checkedListBox1->Location = System::Drawing::Point(18, 40);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(187, 42);
			this->checkedListBox1->TabIndex = 15;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(18, 98);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(185, 33);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Вычислить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 150);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 18);
			this->label10->TabIndex = 17;
			this->label10->Text = L"масштаб";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(14, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(199, 20);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Выберите тип задачи:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(725, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(168, 20);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Описание системы";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(725, 44);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(382, 120);
			this->label13->TabIndex = 20;
			this->label13->Text = L"d/dx(k(x)du/dx)-q(x)u=-f(x)\nu(0) = 0, u(1) = 1, x={0, ..., 1}\n\nk(x) > 0, коэф. те"
				L"плопроводности\nq(x) >= 0, коэф. теплообмена с окруж. сред.\nf(x) плотность источн"
				L"иков тепла в стержне ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(863, 186);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 18);
			this->label14->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(536, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Справка";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(537, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 18);
			this->label7->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1158, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 140);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Основная:\nk(x)_1 = x + 1, x = [0,..., ξ)\nk(x)_2 = x, x=(ξ,..., 1]\nq(x)_1 = x, x ="
				L" [0,..., ξ)\nq(x)_2 = x^2, x=(ξ,..., 1]\nf(x)_1 = x, x = [0,..., ξ)\nf(x)_2 = exp(-"
				L"x), x=(ξ,..., 1]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(252, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(272, 60);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Интервал сетки: x_0 = 0, x_n = 1\nТочка разрыва: ξ = 0.4\nmax_ε = 0.5⋅10^(–6)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1158, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 80);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Тестовая:\nk_1 = 1.4, k_2 = 0.4\nq_1 = 0.4, q_2 = 0.16\nf_1 = 0.4, f_2 = exp(-0.4)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(147, 168);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(56, 24);
			this->textBox4->TabIndex = 27;
			this->textBox4->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(106, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 18);
			this->label8->TabIndex = 28;
			this->label8->Text = L"x";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(170, 150);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 18);
			this->label15->TabIndex = 29;
			this->label15->Text = L"u(x)";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(822, 492);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(8);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(614, 257);
			this->zedGraphControl2->TabIndex = 30;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1432, 845);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Уравнение теплопроводности ( 1 краевая з.)";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm::TestTask(void) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;

		panel->CurveList->Clear();
		panel2->CurveList->Clear();
		dataGridView1->Rows->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ er_list = gcnew ZedGraph::PointPairList();

		panel->Title->Text = "Зависимость U(x) - температуры в сечении стержня x";
		panel->XAxis->Title->Text = "X";
		panel->YAxis->Title->Text = "U(x)";

		panel2->Title->Text = "Разность численного и аналитического решения";
		panel2->XAxis->Title->Text = "X";
		panel2->YAxis->Title->Text = "Err(x)";

		double n = System::Convert::ToDouble(textBox1->Text);
		std::vector<double> x(n + 1), f(n + 1), cur(n+1), prev(n + 1), next(n + 1);

		double max = 0, maxxn;

		test_matrix(n, next, cur, prev, f);
		slay(n, prev, cur, next, f, x);
		for (int i = 1; i < n + 1 ; i++) {
			if (newx(i, n) < 0.4) {
				if (max < fabs(func_1(newx(i, n)) - x[i]))
				{
					max = fabs(func_1(newx(i, n)) - x[i]);
					maxxn = newx(i, n);
				}
			}
			else
				if (max < fabs(func_2(newx(i, n)) - x[i]))
				{
					max = fabs(func_2(newx(i, n)) - x[i]);
					maxxn = newx(i, n);

				}
		}
		label7->Text = "n = " + n + "\nE: " + max + "\nXn: " + maxxn;


		for (int i = 0; i < n + 1; i++)
		{
			f1_list->Add(newx(i, n), x[i]);
			if (newx(i, n) < 0.4)
				f2_list->Add(newx(i, n), func_1(newx(i, n)));
			else 
				f2_list->Add(newx(i, n), func_2(newx(i, n)));
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = newx(i, n);
			if (newx(i, n) < 0.4) {
				dataGridView1->Rows[i]->Cells[2]->Value = func_1(newx(i, n));
				dataGridView1->Rows[i]->Cells[4]->Value = fabs(func_1(newx(i, n)) - x[i]);
				er_list->Add(newx(i, n), fabs(func_1(newx(i, n)) - x[i]));
			}
			else {
				dataGridView1->Rows[i]->Cells[2]->Value = func_2(newx(i, n ));
				dataGridView1->Rows[i]->Cells[4]->Value = fabs(func_2(newx(i, n)) - x[i]);
				er_list->Add(newx(i, n), fabs(func_2(newx(i, n)) - x[i]));

			}
			dataGridView1->Rows[i]->Cells[3]->Value = x[i];


			if (newx(i, n) < 0.4)
				f2_list->Add(newx(i, n), func_1(newx(i, n)));
			else
				f2_list->Add(newx(i, n), func_2(newx(i, n)));
			f1_list->Add(newx(i, n), x[i]);
		}
		dataGridView1->Rows->Add();
		dataGridView1->Rows[n]->Cells[0]->Value = n;
		dataGridView1->Rows[n]->Cells[1]->Value = 1;
		dataGridView1->Rows[n]->Cells[2]->Value = 1;
		dataGridView1->Rows[0]->Cells[2]->Value = 0;
		dataGridView1->Rows[n]->Cells[3]->Value = 1;
		dataGridView1->Rows[n]->Cells[4]->Value = 0;
		dataGridView1->Rows[0]->Cells[4]->Value = 0;
		f1_list->Add(1, 1);
		f2_list->Add(1, 1);
		LineItem^ Curve1 = panel->AddCurve("Численное решение", f1_list, Color::Red, SymbolType::None);
		LineItem^ Curve2 = panel->AddCurve("Точное решение", f2_list, Color::Orange, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("", er_list, Color::CadetBlue, SymbolType::None);

		zedGraphControl1->AxisChange();
		zedGraphControl2->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();

	}

	private: System::Void MainTask(void) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;

		panel->CurveList->Clear();
		panel2->CurveList->Clear();

		panel->Title->Text = "Зависимость U(x) - температуры в сечении стержня x";
		panel->XAxis->Title->Text = "X";
		panel->YAxis->Title->Text = "U(x)";

		panel2->Title->Text = "Разность численного решения с шагом h и 2h";
		panel2->XAxis->Title->Text = "X";
		panel2->YAxis->Title->Text = "Err(x)";

		dataGridView1->Rows->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ er_list = gcnew ZedGraph::PointPairList();

		double n = System::Convert::ToDouble(textBox1->Text);

		double h = 1 / n;
		std::vector<double> x(n + 1), x2(2*n + 1), f(n + 1), f2(2*n + 1), cur(n + 1), cur2(2*n + 1),
			next(n + 1), next2(2*n + 1), prev(n + 1), prev2(2*n + 1);
		
		double max = 0, maxxn = 0;

		main_matrix(n, next, cur, prev, f);
		slay(n , prev, cur, next, f, x);

		main_matrix(n * 2 , next2, cur2, prev2, f2);  
		slay(n * 2, prev2, cur2, next2, f2, x2); 

		for (int i = 1; i < n + 1; i++)
		{
			if (max < fabs(x[i] - x2[i * 2]))
			{
				max = fabs(x[i] - x2[i * 2]);
				maxxn = newx(i, n);
			}
		}
		label7->Text = "n = " + n + "\nE: " + max + "\nXn: " + maxxn;

		for (int i = 0; i < n + 1; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = newx(i, n);
			dataGridView1->Rows[i]->Cells[2]->Value = x2[i * 2 ];
			dataGridView1->Rows[i]->Cells[3]->Value = x[i];
			dataGridView1->Rows[i]->Cells[4]->Value = fabs(x2[i * 2 ] - x[i]);
			f1_list->Add(newx(i, n ), x[i]);
			f2_list->Add(newx(i, n), x2[2*i]);
			er_list->Add(newx(i, n), fabs(x2[i * 2] - x[i]));
		}
		dataGridView1->Rows->Add();
		dataGridView1->Rows[n]->Cells[0]->Value = n;
		dataGridView1->Rows[n]->Cells[1]->Value = 1;
		dataGridView1->Rows[n]->Cells[2]->Value = 1;
		dataGridView1->Rows[0]->Cells[2]->Value = 0;
		dataGridView1->Rows[n]->Cells[3]->Value = 1;
		dataGridView1->Rows[n]->Cells[4]->Value = 0;
		dataGridView1->Rows[0]->Cells[4]->Value = 0;
		f1_list->Add(1, 1);
		f2_list->Add(1, 1);


		LineItem^ Curve1 = panel->AddCurve("Численное решение", f1_list, Color::Magenta, SymbolType::None);
		LineItem^ Curve2 = panel->AddCurve("Численное решение h2", f2_list, Color::Blue, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("", er_list, Color::Red, SymbolType::None);

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();
	}

	private: System::Void zedGraphControl2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		numTask = checkedListBox1->SelectedIndex;
		if (numTask == 1)
			TestTask();
		else
			MainTask();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		double xmin = Convert::ToDouble(textBox2->Text);
		double xmax = Convert::ToDouble(textBox3->Text);
		double ymax = Convert::ToDouble(textBox4->Text);
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;
		if (ymax < 0) {
			panel->YAxis->Scale->Min = ymax;
			panel->YAxis->Scale->Max = xmin;
		}
		else {
			panel->YAxis->Scale->Min = xmin;
			panel->YAxis->Scale->Max = ymax;
		}

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
	}
	};
}