#include "List.h"
void List::Add(int item) 
{
	Node* MiNodo = new Node();
	MiNodo->data = item; 
	if (contador == 0) //Cuando la lista esta vacía
	{
		header = MiNodo;
		cola = MiNodo;
	}
	else //Cuando la lista ya posee elementos 
	{
		cola->next = MiNodo;
		cola = MiNodo;
	}
	contador++; 
}
void List::Clear()
{
	header = nullptr;
	contador = 0; 
}
int List::Count()
{
	return contador;
}
bool List::Contains(int item)
{
	int Cont = 0;
	Node* Temporal = header;
	while (Cont != contador)
	{
		if (item == Temporal->data)
		{
			return true;
		}
		Temporal = Temporal->next;
		Cont++;
	}
	return false; 
}
int List::IndexOf(int item)
{
	int Cont = 0;
	Node* Temporal = header; 
	while ((Temporal) && Cont < contador)
	{
		if (item == Temporal->data)
		{
			return Cont;
		}
		Temporal = Temporal->next;
		Cont++;
	}
	return -1;
}
int List::GetItem(int index)
{
	int Cont = 0;
	Node* Temporal = header;
	while ((Temporal) && Cont <= index)
	{
		if (Cont == index)
		{
			return Temporal->data;
		}
		Temporal = Temporal->next;
		Cont++;
	}
	return -1;
}
void List::SetItem(int index, int item)
{
	Node* Temporal = header;
	int Cont = 0;
	bool IndexEncontrado = false;
	if (Temporal != nullptr)
	{
		while (IndexEncontrado == false)
		{
			if (Cont == index)
			{
				Temporal->data = item;
				IndexEncontrado = true;
			}
			Temporal = Temporal->next;
			Cont++;
		}
	}
}