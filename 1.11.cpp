#include <iostream>

using namespace std;

int main(){
	char nota, gabarito[10], matriz[100][10];
	int acertos[100];
	
	//Cria Gabarito
	cout<<"Crie o gabarito"<<endl;
	for(int i=0; i<10; i++){
		cout<<"Questao "<< i + 1<<":\nMarque a, b, c ou d = ";
		cin>>gabarito[i];
	}
	
	//Entra Respostas do alunos
	for(int i=0; i<100; i++){
		acertos[i]=0;
		cout<<"Insira as respostas do aluno "<<i+1<<"."<<endl;
		for(int j=0;j<10;j++){
			cout<<"Questao "<<j+1<<".";
			cin>>matriz[i][j];
			if(matriz[i][j] == gabarito[i]){
				acertos[i] = acertos[i]+1;
			}
		}		
	}
	
	//Mostra Matriz
	for(int i=0; i<100; i++){
		cout<<endl;
		if(i==0)cout<<"[";
		for(int j=0; j<10; j++){
			if(j < 10-1)cout<<matriz[i][j]<<", ";
			else
				cout<<matriz[i][j];
		}
	}
			cout<<"]"<<endl;
				
	//Mostra Vetor com acertos		
	for (int i=0; i<100; i++){
		if(i==0)cout<<"[";
		if(i <100-1)cout<<acertos[i]<<", ";
		else
			cout<<acertos[i];
	}
	cout<<"]";
	return 0;
}