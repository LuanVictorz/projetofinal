#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#define max_alunos 50
using namespace std;

typedef struct {
	char nome [50];
	float notas [4];
	int ativo;
} Aluno;
Aluno alunos [max_alunos];
void menu();
void cadastrar();
void remover ();
void reprovados();
void pesquisar();
void listar();
int main(int argc , char const *argv[])
{
	menu ();
	return 0;
	
}
void menu (){
	int op;
	do{
		system ("cls");
	cout << "\n1 - CADASTRAR ALUNO \n2 - REMOVER ALUNO ";
	cout << "\n3 - ALUNOS REPROVADOS\n4 - PESQUISAR ALUNOS ";
	cout << "\n5 - LISTA DE ALUNOS \n0- PARA SAIR\n"; 
	scanf("%d" , &op);
	getchar ();
	switch(op){
		case 1:
			cadastrar ();
			break;
			case 5:
				listar ();
				break;
	 }
	 getchar ();
	}while(op!=0);

}
void cadastrar(){
	char nome [50];
	int notas [4];
	int op;
	do{
		system ("cls");
		cout << ("\nDigite O Nome: ");
		fgets(nome, sizeof(nome),stdin);
		cout << ("\n 1 Bimestre: ");
		scanf ("%f" , &notas[0]);
				cout << ("\n 2 Bimestre: ");
		scanf ("%f" , &notas[1]);
				cout << ("\n 3 Bimestre: ");
		scanf ("%f" , &notas[2]);
				cout << ("\n 4 Bimestre: ");
		scanf ("%f" , &notas[3]);
		for (int i = 0; i < max_alunos; ++i)
		{
			if (alunos[i].ativo==0)
			{
				alunos[i].notas[0] = notas[0];
				alunos[i].notas[1] = notas[1];
				alunos[i].notas[2] = notas[2];
				alunos[i].notas[3] = notas[3];
				strcpy (alunos[i].nome, nome);
				alunos[i].ativo=1;
				break;
			}
		}
		cout << ("\n 1 - continuar \n 0 - Sair\n");
		scanf("%i" , &op);
		
	}while(op!=0);
}
void remover (){
	
}
void reprovados(){
	
}
void pesquisar(){
	
}
void listar (){
	system ("cls");
	cout << "\n LISTA DE ALUNOS \n";
	for (int i = 0; i < max_alunos ; ++i)
	{
		if (alunos[i].ativo==1])
		{
			
		}
		cout << ("Nome : %s\n" , alunos[i].nome);
		cout << ("1 bim  : %0.2f\n" , alunos[i].notas[0]);
		cout << ("2 bim  : %0.2f\n" , alunos[i].notas[1]);
		cout << ("3 bim  : %0.2f\n" , alunos[i].notas[2]);
		cout << ("4 bim  : %0.2f\n" , alunos[i].notas[3]);
		cout << ("\n------------\n");
		
	}
	
}