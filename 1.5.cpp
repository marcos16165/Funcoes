#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int **M, n, maior, aux ;


int **GeraMatriz(int linha, int col, int **matriz){
	for(int i = 0; i < linha; i++)
		matriz = (int**)malloc(linha * sizeof(int));
	for(int j = 0; j < col; j++)
		matriz[j] = (int*)malloc(col * sizeof(int));
	return matriz;
}


int **EntraMatriz(int linha, int col, int **matriz){
	for(int i=0; i<linha; i++)
		for(int j=0; j<col; j++){
			cout <<"digite M["<<i+1<<"]["<<j+1<<"]: ";
				cin>>M[i][j];
		}
	return matriz;
}


void LiberaMatriz(int linha, int **matriz){
	for (int i = 0; i < linha; i++)
		free(matriz[i]);
	free(matriz);
}
void MostraMatriz(int linha, int col, int **matriz){
	cout<< endl <<"======MATRIZ======" << endl;
	for(int i=0; i<linha; i++){
		if(i == 0) cout<< "[";
			for(int j=0; j<n; j++){
		if(j<n-1) cout<<M[i][j]<< ", ";
			else
				cout<<M[i][j];}
		cout <<"]"<<endl;
		}
	}

void MostraTransposta(int linha, int col, int **matriz){
	cout<<endl<< "======A MATRIZ TRANSPOSTA======"<< endl;
	for(int i=0; i<linha; i++){
		if(i == 0) cout<< "[";
			for(int j=0; j<n; j++){
		if(j<n-1) cout<<M[j][i]<< ", ";
			else
				cout<<M[j][i];}
		cout <<"]"<<endl;
		}
	}
	
int main(){
	cout << "Qual o tamanho da Matriz? ";
	cin >> n;
	M = GeraMatriz(n, n, M);
	M = EntraMatriz(n, n, M);
	MostraMatriz(n, n, M);
	MostraTransposta(n, n, M);
	LiberaMatriz(n, M);
	return 0;
}
