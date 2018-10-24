#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int **M, n, maior;


void MostraMaior(int linha, int col, int **matriz)
{
	maior = matriz[0][0];
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < col; j++){
			if(maior < matriz[i][j]){
				maior = matriz[i][j];
			}
		}
	}
	cout << "O maior elemento é: " << maior << endl;
}


int **GeraMatriz(int linha, int col, int **matriz)
{
	for(int i = 0; i < linha; i++)
		matriz = (int**)malloc(linha*sizeof(int));
	for(int j = 0; j < col; j++)
		matriz[j] = (int*)malloc(col*sizeof(int));
	return matriz;
}


int **EntraMatriz(int linha, int col, int **matriz)
{
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < col; j++){
		do {	
			cout << "digite M[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> M[i][j];}
			while (M[i][j] < 0);
			}
	}
	return matriz;
}


void LiberaMatriz(int linha, int **matriz){
	for (int i = 0; i < linha; i++)
		free(matriz[i]);
	free(matriz);
}

void MostraMatriz(int linha, int col, int **matriz)
{
	cout << "IMPRIMINDO MATRIZ COM " << linha << " LINHAS E " << col << " COLUNAS" << endl;
	for(int i = 0; i < linha; i++){
		if(i == 0) cout << "[";
		for(int j = 0; j < n; j++){
			if(j < n - 1) cout << M[i][j] << ", ";
			else
				cout << M[i][j];}
		cout << "]" << endl;
	}
}

int main()
{
	cout << "Qual o tamanho da Matriz? ";
	cin >> n;

	M = GeraMatriz(n, n, M);
	M = EntraMatriz(n, n, M);
	MostraMatriz(n, n, M);
	MostraMaior(n, n, M);
	LiberaMatriz(n, M);
	return 0;
}
