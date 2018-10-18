#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int **M1,**M2, **MP, n1, m1, n2, m2, maior;


void MostraMaior(int linha, int col, int **matriz)
{
	maior = matriz[0][0];
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < col; j++){
			if(maior < matriz[i][j])
			{
				maior = matriz[i][j];
			}
		}
	}
	cout << "O maior elemento ?: " << maior << endl;
}


int **GeraMatriz(int linha, int col, int **matriz)
{
	matriz = (int**)malloc(col * sizeof(int));
	
	for(int j = 0; j < linha; j++)
		matriz[j] = (int*)malloc(col * sizeof(int));
	return matriz;
}


int **EntraMatriz (int linha, int coluna, int **matriz){	
	for(int i = 0; i < linha; i++)
		for(int j = 0; j < coluna; j++){
			cout << "digite M[ " << i + 1 << "][" << j + 1 << "]: " ;				
			cin >> matriz[i][j];
	}
	return matriz;
}


void LiberaMatriz(int linha, int **matriz)
{
	for (int i = 0; i < linha; i++)
		free(matriz[i]);
	free(matriz);
}


void MostraMatriz(int linha, int col, int **matriz){
	for(int i = 0; i < linha; i++){
		cout << endl;
		if(i == 0) cout << "[" ;
		for(int j = 0; j < col; j++)
		{
			if(j < col - 1) cout << matriz[i][j] << ", ";
			else
				cout << matriz[i][j];
		}

	}
	cout << "]" << endl;
}

int **pmatriz(int **M1, int **M2, int **MP)
{
	for(int i = 0; i<n1; i++)
		for(int j = 0; j<m1; j++){
			for(int k=0; k<m2;k++){
					MP[i][k]+=M1[i][j]*M2[j][k];
				}	
		}
	return MP;	
}


	int main()
	{
		cout << "Qual o tamanho da Matriz? ";
		cin >> n1 >> m1;
		M1 = GeraMatriz(n1, m1, M1);
		M1 = EntraMatriz(n1, m1, M1);
		
		cout << "Qual o tamanho da Matriz 2? ";
		cin >> n2 >> m2;
		M2 = GeraMatriz(n2, m2, M2);
		M2 = EntraMatriz(n2, m2, M2);

		if (m1 == n2){
			MP = GeraMatriz(n1, m2, MP);
			MP = pmatriz(M1, M2, MP);
			cout <<"Deu certo!"<<endl;
			MostraMatriz(n1, m2, MP);
			LiberaMatriz(n1, MP); 
		}else{
			cout << "erro"<<endl;}
		MostraMatriz(n1, m1, M1);

		LiberaMatriz(n1, M1);
		LiberaMatriz(n2, M2);
		
		return 0;
	}
