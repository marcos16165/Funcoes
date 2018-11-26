/*
    *
    * Projeto: Fila de Inteiros
    * Autor: Joyce Claine e Marcos Monteiro 
    * Data: 25/11/2018
    * Versão: 1.0
    * Data da última modificação: 26/11/2018
    * Descrição: Exemplo simpres de fila.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

//structc com o campo informação e um ponteiro para o proximo elemento da lista
typedef struct Reg
{
	int info;
	Reg *prox;
} No;//Chamar a struct 

//Ponteiro para o primeiro e úlimo elemento da fila 
typedef struct fila
{
	No *primeiro;
	No *ultimo;
} Fila;

//Inicializando fila vazia 
void inicializaFila(Fila *f)
{
	f->primeiro = NULL;
	f->ultimo = NULL;
}

//inserir elemento no fim da fila
Fila *inserirFila(Fila *f, int k)
{
	No *novo;
	novo = new No;
	novo->info = k;
	if (f->primeiro == NULL)
	{
		 f->primeiro = novo;
		 f->ultimo = novo; 
		 novo->prox = NULL; 	
	}
	else
	{
		novo->prox = f->ultimo->prox;
        f->ultimo->prox = novo;
        f->ultimo = novo; 
	}
		
		
	return f;
}

//Verifica se a fila está vazia
int FilaVazia(Fila *f)
{
	return f->primeiro == NULL; // Se o inicio apontar para NULL, entao Fila está vazia
}

//Remover elemento no começo da fila
Fila *removerFila(Fila *f)
{
	No *aux;
	aux = f->primeiro;

	if(aux == NULL)
		cout << "\nFila vazia!" << endl;
	else
	{
		f->primeiro = aux->prox;
		free(aux);
	}
	return f;
}

//Mostra todos os elementod da fila, na ordem que foram inseridos 
void mostrarFila(Fila *f)
{
	No *copia;
	copia = f->primeiro;
	int cont = 1;
	if (copia == NULL)
	{
		cout << "\nFila vazia!" << endl;
	}
	else
	{
		while(copia != NULL)
		{
			cout << "\nFila[" << cont << "]= " << copia->info << endl;
			copia = copia->prox;
			cont++;
		}
	}

}

//Menu com as funções disponíveis 
void menu()
{
	cout << "\n ----- Menu ------\n";
	cout << "1 - Inserir\n";
	cout << "2 - Remover\n";
	cout << "3 - Mostrar\n";
	cout << "0 - Sair\n";
	cout << " -----------------\n";	
}

//Chamando as funções 
int main()
{
	Fila *F1;
	int op;
	int v;
	inicializaFila(F1);
		
	do
	{		
		menu();
		
		cout << "\nDigite a opcao desejada: ";
		cin >> op;
		
		switch(op)
		{

		case 1:
			// insere();
			cout << "\nValor que deseja inserir: ";
			cin >> v;
			inserirFila(F1,v);
			break;

		case 2:
			//Remover();
			removerFila(F1);
			cout << endl;
			cout <<"Removido com sucesso!" << endl;
			break;

		case 3:
			//Mostrar();
			mostrarFila(F1);
			break;
		}
	}
	while(op != 0);

	return 0;
}
