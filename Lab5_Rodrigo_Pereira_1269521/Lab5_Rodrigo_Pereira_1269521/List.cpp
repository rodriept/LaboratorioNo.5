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
	return true;
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