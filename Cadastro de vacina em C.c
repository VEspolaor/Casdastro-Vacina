#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

//Autor: Vitor Augusto Espolaor
//R.A:22029168-5
//Atividade: MAPA - ESOFT - ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II 

struct dados{
	int codigo;
	char nome[30], cpf[30], vacina[30], data[30], lote[30];
};


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char cpfbus[30];
	int escolha, contador = 1, i;
	struct dados listad[100];
	
	do{
		printf("\n");
		printf("==========Menu de Opções==========\n");
		printf("1-Cadastrar Vacina  \n");
   		printf("2-Listar Aplicações \n");
    	printf("3-Consultar por CPF \n");
   		printf("4-Sair \n");
   		printf("==================================\n\n");
   		scanf("%d",&escolha);
   		fflush(stdin);
   	
   		switch(escolha){
   			case 1:
   				system("cls");
   				
   				printf("==========Cadastro da Vacina========== \n\n");
   				printf("Código: %d\n", contador);
   				fflush(stdin);
				
				printf("\n Informe o Nome:");
   				fgets(listad[contador].nome, 30, stdin);
   				fflush(stdin);
				
				printf("\n Informe o Cpf:");
   				fgets(listad[contador].cpf, 30, stdin);
   				fflush(stdin);
				
				printf("\n Informe o nome da Vacina:");
   				fgets(listad[contador].vacina, 30, stdin);
   				fflush(stdin);
				
				printf("\n Informe a data que foi realizada a aplicação da vacina:");
   				fgets(listad[contador].data, 30, stdin);
   				fflush(stdin);
				
				printf("\n Informe o número do lote da vacina:");
   				fgets(listad[contador].lote, 30, stdin);
   				fflush(stdin);
   			
			   	contador++;		
			   	
			break;
   		
   			case 2:
   				system("cls");
   				printf("==========Lista de Aplicações========== \n\n");
   				
   				for(i=1; i<contador; i++){
   					printf("Código:%d\n",i);
   					printf("Nome:%s",listad[i].nome);
   					printf("Cpf:%s",listad[i].cpf);
   					printf("Vacina:%s",listad[i].vacina);
   					printf("Data:%s",listad[i].data);
   					printf("Lote:%s",listad[i].lote);
					printf("\n");	
				};
   			break;
   		
   			case 3:
   				system("cls");
   				fflush(stdin);
   				printf("==========Consultar por Cpf==========\n");
   				printf("Digite o Cpf que deseja fazer a busca \n\n");
   				fflush(stdin);
   				fgets(cpfbus, 30, stdin);
   				fflush(stdin);
   				
   				for(i=1; i<contador; i++){
   					if(strcmp(listad[i].cpf, cpfbus) ==0){
   						printf("\n");
   						printf("Cpf Encontrado \n");
   						printf("Código:%d\n",i);
   						printf("Nome:%s",listad[i].nome);
   						printf("Cpf:%s",listad[i].cpf);
   						printf("Vacina:%s",listad[i].vacina);
   						printf("Data:%s",listad[i].data);
   						printf("Lote:%s",listad[i].lote);
   						fflush(stdin);
   					break;
					}
				}
   				if(strcmp(listad[i].cpf, cpfbus) !=0){
   					printf("\n");
   					printf("Cpf não encontrado \n");
				}
   			break;
   		
   			case 4:
   				printf("\n Saindo do Programa \n");
   				return 0;
   			break;
   		
   			default:
   				printf("\n Opção Inválida \n");
	   		}	
	}while(escolha != 0);
	return 0;
}
