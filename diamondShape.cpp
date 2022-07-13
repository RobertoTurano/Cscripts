#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int tamanho;

	printf("Digite o Tamanho : ");
	scanf("%i", &tamanho);
	//printf("%i",tamanho);
	int espacos = 1;
	for(int i=0; i <= tamanho; i++){
		for(int j= tamanho; j > i; j--){
			printf(" ");
		}
		 printf("*");
		 if(i>0){
		 	for(int k=1; k<= espacos ; k++ ){
		 		printf(" ");
			 }
			 espacos+=2;
			 printf("*");
			 
		 }
		 printf("\n");
	
	}
	espacos-=4;
	for(int i=0; i<=tamanho-1; i++){
		for(int j=0 ; j<=i; j++){
			printf(" ");
		}
		printf("*");
		for(int k=1; k<=espacos;k++){
			printf(" ");
		}
		espacos -=2;
		if(i != tamanho-1){
			printf("*");
		}
		printf("\n");
	}
	return 0;	 
	 }


