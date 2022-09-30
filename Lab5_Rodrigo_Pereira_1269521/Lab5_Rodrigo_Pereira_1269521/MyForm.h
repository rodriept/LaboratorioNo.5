#pragma once
#include "List.h"

namespace Lab5RodrigoPereira1269521 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBIngresarDatoList;
	private: System::Windows::Forms::Button^ BIngresarDatoList;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ ButBorrar;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ BVerCantDatos;
	private: System::Windows::Forms::TextBox^ TBCantDatos;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TBObtenerValor;
	private: System::Windows::Forms::Button^ BObtenerValor;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TBVerificarValorList;
	private: System::Windows::Forms::Button^ BVerificarValor;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TBEncontrarIndice;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBIngresarDatoList = (gcnew System::Windows::Forms::TextBox());
			this->BIngresarDatoList = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ButBorrar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BVerCantDatos = (gcnew System::Windows::Forms::Button());
			this->TBCantDatos = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TBObtenerValor = (gcnew System::Windows::Forms::TextBox());
			this->BObtenerValor = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TBVerificarValorList = (gcnew System::Windows::Forms::TextBox());
			this->BVerificarValor = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TBEncontrarIndice = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ejercicio No.1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingresar un dato a la lista";
			// 
			// TBIngresarDatoList
			// 
			this->TBIngresarDatoList->Location = System::Drawing::Point(15, 67);
			this->TBIngresarDatoList->Name = L"TBIngresarDatoList";
			this->TBIngresarDatoList->Size = System::Drawing::Size(100, 20);
			this->TBIngresarDatoList->TabIndex = 2;
			// 
			// BIngresarDatoList
			// 
			this->BIngresarDatoList->Location = System::Drawing::Point(15, 93);
			this->BIngresarDatoList->Name = L"BIngresarDatoList";
			this->BIngresarDatoList->Size = System::Drawing::Size(100, 23);
			this->BIngresarDatoList->TabIndex = 3;
			this->BIngresarDatoList->Text = L"Ingresar dato";
			this->BIngresarDatoList->UseVisualStyleBackColor = true;
			this->BIngresarDatoList->Click += gcnew System::EventHandler(this, &MyForm::BIngresarDatoList_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Borrar datos de la lista";
			// 
			// ButBorrar
			// 
			this->ButBorrar->Location = System::Drawing::Point(40, 352);
			this->ButBorrar->Name = L"ButBorrar";
			this->ButBorrar->Size = System::Drawing::Size(75, 23);
			this->ButBorrar->TabIndex = 5;
			this->ButBorrar->Text = L"Borrar";
			this->ButBorrar->UseVisualStyleBackColor = true;
			this->ButBorrar->Click += gcnew System::EventHandler(this, &MyForm::ButBorrar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(152, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Cantidad de datos de la lista";
			// 
			// BVerCantDatos
			// 
			this->BVerCantDatos->Location = System::Drawing::Point(180, 67);
			this->BVerCantDatos->Name = L"BVerCantDatos";
			this->BVerCantDatos->Size = System::Drawing::Size(75, 23);
			this->BVerCantDatos->TabIndex = 7;
			this->BVerCantDatos->Text = L"Ver";
			this->BVerCantDatos->UseVisualStyleBackColor = true;
			this->BVerCantDatos->Click += gcnew System::EventHandler(this, &MyForm::BVerCantDatos_Click);
			// 
			// TBCantDatos
			// 
			this->TBCantDatos->Enabled = false;
			this->TBCantDatos->Location = System::Drawing::Point(190, 93);
			this->TBCantDatos->Name = L"TBCantDatos";
			this->TBCantDatos->Size = System::Drawing::Size(56, 20);
			this->TBCantDatos->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Obtener el valor de una posición:";
			// 
			// TBObtenerValor
			// 
			this->TBObtenerValor->Location = System::Drawing::Point(37, 152);
			this->TBObtenerValor->Name = L"TBObtenerValor";
			this->TBObtenerValor->Size = System::Drawing::Size(100, 20);
			this->TBObtenerValor->TabIndex = 10;
			// 
			// BObtenerValor
			// 
			this->BObtenerValor->Location = System::Drawing::Point(37, 178);
			this->BObtenerValor->Name = L"BObtenerValor";
			this->BObtenerValor->Size = System::Drawing::Size(100, 23);
			this->BObtenerValor->TabIndex = 11;
			this->BObtenerValor->Text = L"Obtener Posición";
			this->BObtenerValor->UseVisualStyleBackColor = true;
			this->BObtenerValor->Click += gcnew System::EventHandler(this, &MyForm::BObtenerValor_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(207, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Verificar si el valor se encuentra en la lista:";
			// 
			// TBVerificarValorList
			// 
			this->TBVerificarValorList->Location = System::Drawing::Point(50, 231);
			this->TBVerificarValorList->Name = L"TBVerificarValorList";
			this->TBVerificarValorList->Size = System::Drawing::Size(100, 20);
			this->TBVerificarValorList->TabIndex = 13;
			// 
			// BVerificarValor
			// 
			this->BVerificarValor->Location = System::Drawing::Point(62, 257);
			this->BVerificarValor->Name = L"BVerificarValor";
			this->BVerificarValor->Size = System::Drawing::Size(75, 23);
			this->BVerificarValor->TabIndex = 14;
			this->BVerificarValor->Text = L"Verificar";
			this->BVerificarValor->UseVisualStyleBackColor = true;
			this->BVerificarValor->Click += gcnew System::EventHandler(this, &MyForm::BVerificarValor_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(247, 136);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Obtener el indice del valor ingresado:";
			// 
			// TBEncontrarIndice
			// 
			this->TBEncontrarIndice->Location = System::Drawing::Point(284, 152);
			this->TBEncontrarIndice->Name = L"TBEncontrarIndice";
			this->TBEncontrarIndice->Size = System::Drawing::Size(100, 20);
			this->TBEncontrarIndice->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(287, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 28);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Obtener indice";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 515);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TBEncontrarIndice);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->BVerificarValor);
			this->Controls->Add(this->TBVerificarValorList);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BObtenerValor);
			this->Controls->Add(this->TBObtenerValor);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TBCantDatos);
			this->Controls->Add(this->BVerCantDatos);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ButBorrar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BIngresarDatoList);
			this->Controls->Add(this->TBIngresarDatoList);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		List* MiLista = new List();
	private: System::Void BIngresarDatoList_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (TBIngresarDatoList->Text == "")
		{
			MessageBox::Show("Ingrese un valor en la lista", "Error: no ingresar un valor", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MiLista->Add(Convert::ToInt32(TBIngresarDatoList->Text));
			MessageBox::Show("Se a ingresado correctamente el dato a la lista", "Ingresado correctamente", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		
	}
    private: System::Void ButBorrar_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		MiLista->Clear();
		MessageBox::Show("Se elimino los datos de la lista", "Datos eliminados", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
		
    }
    private: System::Void BVerCantDatos_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		TBCantDatos->Text = MiLista->Count().ToString(); //Ir al metodo Count y mostrar en un TextBox la cantidad de valores que hay en la lista
		
    }
    private: System::Void BObtenerValor_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		//Ver el valor en la que se encuentra en la posición ingresada
		int index;
		index = Convert::ToInt32(TBObtenerValor->Text);
		if (index < 0) //Si la posición ingresada es menor a 0 da error
		{
			MessageBox::Show("Posición no válida en la lista", "Error encontrado", MessageBoxButtons::OK,MessageBoxIcon::Error);

		}
		else if (index > MiLista->Count()-1) //Si en la posición ingresada es mayor a la que llega la lista
		{
			MessageBox::Show("Posición no válida en la lista", "Error encontrado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else //ir al método GetItem y mostrar el valor por medio de un MessageBox
 		{
			MessageBox::Show("Valor encontrado en la posición " + "[" + index + "] = " + MiLista->GetItem(index).ToString(), "Valor encontrado", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		}

    }
    private: System::Void BVerificarValor_Click(System::Object^ sender, System::EventArgs^ e)  
    {
		bool Verificar; 
		Verificar = MiLista->Contains(Convert::ToInt32(TBVerificarValorList->Text));
		if (Verificar == true)
		{
			MessageBox::Show("El valor a verificar si se encuentra en la lista", "Valor encontrado", MessageBoxButtons::OK);
		}
		else
		{
			MessageBox::Show("El valor a verificar no se encuentra en la lista", "Error: Valor no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		//Boton para encontrar el indice del valor ingresado
		int Valor;
		Valor = Convert::ToInt32(TBEncontrarIndice->Text);
		if (MiLista->IndexOf(Valor) == -1)
		{
			MessageBox::Show("El valor no se encuentra en la lista ", "Error: indice no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MessageBox::Show("El índice del valor es " + MiLista->IndexOf(Valor).ToString(), "Indice encontrado en la lista", MessageBoxButtons::OK);
		}
		
    }
};
}
