#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

char *gabarito, **matriz;
int *acertos, linha, col, a;

int *GeraVetor(int tam, int *vetor)
{
	vetor = (int*)malloc(tam * sizeof(int));
	return vetor;
}


char *GeraGabarito(int tam, char *vetor)
{
	vetor = (char*)malloc(tam * sizeof(char));
	return vetor;
}

char **GeraMatriz(int linha, int col, char **matriz)
{
	matriz = (char**)malloc(col * sizeof(char));

	for(int j = 0; j < linha; j++)
		matriz[j] = (char*)malloc(col * sizeof(char));
	return matriz;
}

char *EntraVetor(int tam, char *vetor)
{
	for(int i = 0; i < 10; i++)
	{
		cout << "Questao " << i + 1 << ":\nMARQUE a, b, c ou d = ";
		cin >> gabarito[i];
	}

	return vetor;
}

char **EntraMatriz (int linha, int coluna, char **matriz, int *vetor)
{
	for(int i = 0; i < 100; i++)
	{
		vetor[i] = 0;
		cout << "INSIRA AS RESPOSTAS DOS ALUNOS " << i + 1 << "." << endl;
		for(int j = 0; j < 10; j++)
		{
			cout << "Questao " << j + 1 << ".";
			cin >> matriz[i][j];
			if(matriz[i][j] == gabarito[i])
			{
				vetor[i] = vetor[i] + 1;
			}
		}
	}

	return matriz;
}

void MostraMatriz(int linha, int col, int **matriz)
{
	for(int i = 0; i < linha; i++)
	{
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

void MostraVetor(int tam, int *vetor)
{
	cout << "NOTAS DOS ALUNOS ORDENADAS: " << endl;
	for(int j = 0; j < tam; j++)
	{
		if (j == 0) cout << "V=[" << vetor[j] << ",";
		else if (j < tam - 1) cout << vetor[j] << ", ";
		else
			cout << vetor[j] << "]" << endl;
	}
}

void LiberaMatriz(int linha, char **matriz)
{
	for (int i = 0; i < linha; i++)
		free(matriz[i]);
	free(matriz);
}



using namespace std;

int main()
{
	linha = 100;
	col = 10;
	a = 10;

	acertos = GeraVetor(100, acertos);
	gabarito = GeraGabarito(a, gabarito);
	cout << "CRIAR GABARITO" << endl;
	gabarito = EntraVetor(10, gabarito);
	matriz = GeraMatriz(linha, col, matriz);
	matriz = EntraMatriz(linha, col, matriz, acertos);
	MostraVetor(a, acertos);
	LiberaMatriz(linha, matriz);
	free(acertos);


	return 0;
}
