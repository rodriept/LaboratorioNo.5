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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TBPosicion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TBValorACambiar;

	private: System::Windows::Forms::Button^ BCambiarElemento;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ TBElementoEliminar;
	private: System::Windows::Forms::Button^ BEliminar;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ TBPosicionEliminar;

	private: System::Windows::Forms::Button^ BElimnarConPosici�n;

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TBPosicion = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TBValorACambiar = (gcnew System::Windows::Forms::TextBox());
			this->BCambiarElemento = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TBElementoEliminar = (gcnew System::Windows::Forms::TextBox());
			this->BEliminar = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TBPosicionEliminar = (gcnew System::Windows::Forms::TextBox());
			this->BElimnarConPosici�n = (gcnew System::Windows::Forms::Button());
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
			this->BIngresarDatoList->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->label3->Location = System::Drawing::Point(12, 464);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Borrar datos de la lista";
			// 
			// ButBorrar
			// 
			this->ButBorrar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ButBorrar->Location = System::Drawing::Point(40, 480);
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
			this->label4->Location = System::Drawing::Point(269, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Cantidad de datos de la lista";
			// 
			// BVerCantDatos
			// 
			this->BVerCantDatos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BVerCantDatos->Location = System::Drawing::Point(300, 67);
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
			this->TBCantDatos->Location = System::Drawing::Point(309, 95);
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
			this->label5->Text = L"Obtener el valor de una posici�n:";
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
			this->BObtenerValor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BObtenerValor->Location = System::Drawing::Point(37, 178);
			this->BObtenerValor->Name = L"BObtenerValor";
			this->BObtenerValor->Size = System::Drawing::Size(100, 23);
			this->BObtenerValor->TabIndex = 11;
			this->BObtenerValor->Text = L"Obtener Posici�n";
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
			this->BVerificarValor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(287, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 28);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Obtener indice";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(247, 215);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(216, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Cambiar el elemento en la posici�n indicada:";
			// 
			// TBPosicion
			// 
			this->TBPosicion->Location = System::Drawing::Point(309, 231);
			this->TBPosicion->Name = L"TBPosicion";
			this->TBPosicion->Size = System::Drawing::Size(100, 20);
			this->TBPosicion->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(253, 234);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Posici�n:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(247, 257);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Valor a ingresar: ";
			// 
			// TBValorACambiar
			// 
			this->TBValorACambiar->Location = System::Drawing::Point(337, 254);
			this->TBValorACambiar->Name = L"TBValorACambiar";
			this->TBValorACambiar->Size = System::Drawing::Size(100, 20);
			this->TBValorACambiar->TabIndex = 22;
			// 
			// BCambiarElemento
			// 
			this->BCambiarElemento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BCambiarElemento->Location = System::Drawing::Point(309, 280);
			this->BCambiarElemento->Name = L"BCambiarElemento";
			this->BCambiarElemento->Size = System::Drawing::Size(75, 23);
			this->BCambiarElemento->TabIndex = 23;
			this->BCambiarElemento->Text = L"Cambiar";
			this->BCambiarElemento->UseVisualStyleBackColor = true;
			this->BCambiarElemento->Click += gcnew System::EventHandler(this, &MyForm::BCambiarElemento_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 324);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(235, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Eliminar un elemento en la lista dado el elemento";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 348);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(102, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Ingrese el elemento:";
			// 
			// TBElementoEliminar
			// 
			this->TBElementoEliminar->Location = System::Drawing::Point(119, 348);
			this->TBElementoEliminar->Name = L"TBElementoEliminar";
			this->TBElementoEliminar->Size = System::Drawing::Size(100, 20);
			this->TBElementoEliminar->TabIndex = 26;
			// 
			// BEliminar
			// 
			this->BEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BEliminar->Location = System::Drawing::Point(75, 374);
			this->BEliminar->Name = L"BEliminar";
			this->BEliminar->Size = System::Drawing::Size(75, 23);
			this->BEliminar->TabIndex = 27;
			this->BEliminar->Text = L"Eliminar";
			this->BEliminar->UseVisualStyleBackColor = true;
			this->BEliminar->Click += gcnew System::EventHandler(this, &MyForm::BEliminar_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(269, 324);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(231, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Eliminar un elemento en la lista dado la posici�n";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(273, 351);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Ingrese la posici�n:";
			// 
			// TBPosicionEliminar
			// 
			this->TBPosicionEliminar->Location = System::Drawing::Point(377, 351);
			this->TBPosicionEliminar->Name = L"TBPosicionEliminar";
			this->TBPosicionEliminar->Size = System::Drawing::Size(107, 20);
			this->TBPosicionEliminar->TabIndex = 30;
			// 
			// BElimnarConPosici�n
			// 
			this->BElimnarConPosici�n->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BElimnarConPosici�n->Location = System::Drawing::Point(337, 377);
			this->BElimnarConPosici�n->Name = L"BElimnarConPosici�n";
			this->BElimnarConPosici�n->Size = System::Drawing::Size(75, 23);
			this->BElimnarConPosici�n->TabIndex = 31;
			this->BElimnarConPosici�n->Text = L"Eliminar";
			this->BElimnarConPosici�n->UseVisualStyleBackColor = true;
			this->BElimnarConPosici�n->Click += gcnew System::EventHandler(this, &MyForm::BElimnarConPosici�n_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 529);
			this->Controls->Add(this->BElimnarConPosici�n);
			this->Controls->Add(this->TBPosicionEliminar);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->BEliminar);
			this->Controls->Add(this->TBElementoEliminar);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->BCambiarElemento);
			this->Controls->Add(this->TBValorACambiar);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TBPosicion);
			this->Controls->Add(this->label8);
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
		//Ver el valor en la que se encuentra en la posici�n ingresada
		int index;
		index = Convert::ToInt32(TBObtenerValor->Text);
		if (index < 0) //Si la posici�n ingresada es menor a 0 da error
		{
			MessageBox::Show("Posici�n no v�lida en la lista", "Error encontrado", MessageBoxButtons::OK,MessageBoxIcon::Error);

		}
		else if (index > MiLista->Count()-1) //Si en la posici�n ingresada es mayor a la que llega la lista
		{
			MessageBox::Show("Posici�n no v�lida en la lista", "Error encontrado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else //ir al m�todo GetItem y mostrar el valor por medio de un MessageBox
 		{
			MessageBox::Show("Valor encontrado en la posici�n " + "[" + index + "] = " + MiLista->GetItem(index).ToString(), "Valor encontrado", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
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
			MessageBox::Show("El �ndice del valor es " + MiLista->IndexOf(Valor).ToString(), "Indice encontrado en la lista", MessageBoxButtons::OK);
		}
		
    }
    private: System::Void BCambiarElemento_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		if(TBPosicion->Text == nullptr|| TBValorACambiar == nullptr)
		{
			MessageBox::Show("Ingrese la posici�n del valor que quiere cambiar y el valor nuevo", "Error: Datos no ingresado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MiLista->SetItem(Convert::ToInt32(TBPosicion->Text), Convert::ToInt32(TBValorACambiar->Text));
			MessageBox::Show("Valor cambiado en el indice " + TBPosicion->Text + " Correctamente", "Valor cambiado correctamente", MessageBoxButtons::OK);
		}
    }

    private: System::Void BEliminar_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		int ItemDelete; 
		ItemDelete = Convert::ToInt32(TBElementoEliminar->Text);
		if (MiLista->Remove(ItemDelete) == false)
		{
			MessageBox::Show("El elemento no se encuentra en la lista", "Error: Elemento no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MiLista->Remove(ItemDelete);
			MessageBox::Show("El elemento se a eliminado de la lista", "Elimando correctamente", MessageBoxButtons::OK);
		}
    }
    private: System::Void BElimnarConPosici�n_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		int IndexDelete;
		try
		{
			IndexDelete = Convert::ToInt32(TBPosicionEliminar->Text);
			if (IndexDelete > MiLista->Count() || IndexDelete < 0)
			{
				MessageBox::Show("La posici�n no existe en la lista", "Error: Posici�n no existente", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				MiLista->RemoveAt(Convert::ToInt32(TBPosicionEliminar->Text));
				MessageBox::Show("El elemento se a eliminado de la lista", "Elimando correctamente", MessageBoxButtons::OK);
			}
				
		}
	    catch (...)
		{
			MessageBox::Show("Ingrese una posici�n", "Error: Posici�n no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		
    }
};
}
