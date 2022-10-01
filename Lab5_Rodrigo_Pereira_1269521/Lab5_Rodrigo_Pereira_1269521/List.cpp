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
void List::Clear() //Para borrar toda la lista
{
	header = nullptr;
	contador = 0; 
}
int List::Count() //Para saber cuantos valores hay en la lista
{
	return contador;
}
bool List::Contains(int item) //Para saber si contiene el valor ingresado en la lista
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
int List::IndexOf(int item)//Obtiene el índice de la primera ocurrencia por medio del valor
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
int List::GetItem(int index) //Para saber el valor que tiene en la posicion ingresada
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
void List::SetItem(int index, int item) //Cambiar un elemento en la posición en la que se indica
{
    Node* Temporal = header;
	int Cont = 0;
	bool IndexEncontrado = false;
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
bool List::Remove(int item) //Elimina el elemento de la lista por medio del elemento dado
{
	Node* Temporal = header;
	Node* Anterior = nullptr;
	while ((Temporal != nullptr ) && (Temporal->data != item))
	{
		Anterior = Temporal;
		Temporal = Temporal->next;
	}
	if (Temporal == nullptr)
	{
		return false;
	}
	else if(Anterior == nullptr)
	{
		header = header->next;
		delete Temporal;
		contador--;
		return true;

	}
	else
	{
		Anterior->next = Temporal->next;
		delete Temporal;
		contador--;
		return true;
	}
}
void List::RemoveAt(int index) //Elimina el elemento por medio de la posición dada
{
	Node* Temporal = header;
	Node* anterior = nullptr;
	int cont = 0;
	while((Temporal != nullptr) && cont != index)
	{
		anterior = Temporal;
		Temporal = Temporal->next;
		cont++;
	}
    if(anterior == nullptr)
	{
		header = header->next;
		contador--;
		delete Temporal;
	}
	else
	{
		anterior->next = Temporal->next;
		delete Temporal;
		contador--;
	}
}