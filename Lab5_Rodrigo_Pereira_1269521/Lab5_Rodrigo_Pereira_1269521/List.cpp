#include "List.h"
void List::Add(int item) 
{
	Node* MiNodo = new Node();
	MiNodo->data = item; 
	if (contador == 0) //Cuando la lista esta vacía
	{
		header = &MiNodo;
		cola = &MiNodo;
	}
	else //Cuando la lista ya posee elementos 
	{
		cola->next = &MiNodo;
		cola = &MiNodo;
	}
	contador++; 
}