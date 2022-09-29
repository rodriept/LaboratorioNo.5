#pragma once
class List
{
	/// <summary>
	/// Nodo simplemente enlazado
	/// </summary>
	struct Node
	{
		/// <summary>
		/// Informaci�n a almacenar
		/// </summary>
		int data;

		/// <summary>
		/// Apuntador hacia siguiente Nodo
		/// </summary>
		Node* next;
	};

private:
	/// <summary>
	/// Apuntador al primer Nodo dentro de la lista (cabeza)
	/// </summary>
	Node* header = nullptr;

public:
	/// <summary>
	/// Agrega un elemento al FINAL de la lista
	/// </summary>
	/// <param name="item">Elemento a agregar</param>
	void Add(int item);

	/// <summary>
	/// Elimina todos los elementos de la Lista.
	/// </summary>
	void Clear();

	/// <summary>
	/// Cuenta la cantidad de elementos en la lista
	/// </summary>
	/// <returns>Cantidad de elementos en la lista</returns>
	int Count();

	/// <summary>
	/// Verifica si el elemento indicado se encuentra en la lista
	/// </summary>
	/// <param name="item">Elemento a verificar</param>
	/// <returns>Verdadero si el elemento est� en la lista, Falso en caso con-trario</returns>
	bool Contains(int item);

	/// <summary>
	/// Obtiene el �ndice de la primera ocurrencia del elemento indicado dentro de la lista
	/// </summary>
	/// <param name="item">Elemento a verificar</param>
	/// <returns>El �ndice (base 0) de la primera ocurrencia si lo encontr�, -1 en caso contrario</returns>
	int IndexOf(int item);

	/// <summary>
	/// Inserta un elemento en una posici�n espec�fica de la lista
	/// </summary>
	/// <param name="index">Posici�n/�ndice (base 0) dentro de la lista</param>
	/// <param name="item">Elemento a insertar</param>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor a Count</exception>
	void Insert(int index, int item);

	/// <summary>
	/// Obtiene el valor del elemento en la posici�n indicada de la lista
	/// </summary>
	/// <param name="index">Posici�n/�ndice (base 0) dentro de la lista</param>
	/// <returns>Elemento en posici�n indicada</returns>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor o igual a Count</exception>
	int GetItem(int index);

	/// <summary>
	/// Cambia el elemento en la posici�n indicada de la lista
	/// </summary>
	/// <param name="index">Posici�n/�ndice (base 0) dentro de la lista</param>
	/// <param name="item">Elemento a actualizar</param>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor o igual a Count</exception>
	void SetItem(int index, int item);

	/// <summary>
	/// Obtiene el �ndice de la �ltima ocurrencia del elemento indicado dentro de la lista
	/// </summary>
	/// <param name="item">Elemento a verificar</param>
	/// <returns>El �ndice (base 0) de la �ltima ocurrencia si lo encontr�, -1 en caso contrario</returns>
	int LastIndexOf(int item);

	/// <summary>
	/// Elimina la primera ocurrencia del elemento en la lista
	/// </summary>
	/// <param name="item">Elemento a eliminar</param>
	/// <returns> Verdadero si el elemento fue removido, Falso si no fue encon-trado</returns>
	bool Remove(int item);

	/// <summary>
	/// Elimina el elemento en la posici�n de la lista indicada
	/// </summary>
	/// <param name="index">Posici�n/�ndice (base 0) dentro de la lista</param>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor o igual a Count</exception>
	void RemoveAt(int index);
};


