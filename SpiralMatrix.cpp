#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
   linha coluna
    0       1

*/


void caracol(int n){
 int m = n;
 int  matx[n][m];
 int esquerda= 0 , topo = 0,  direita = m-1, base= n-1 ;
 int count = 1;
 char ondevai = 'd'; // d = direita , b = baixo , e = esquerda , c = cima
  fflush(stdin);
 
 while(esquerda <= direita && topo <= base ){
 	if( ondevai == 'd'){
 		for(int i = esquerda; i<= direita ; i++ ){
 			matx[topo][i] = count++;
		 }
		 topo++;
		 ondevai = 'b';
		  fflush(stdin);
	 }
	 if(ondevai == 'b'){
	 	for(int i = topo; i <= base; i++ ){
	 		matx[i][direita] = count++;
		 }
		 direita--;
		 ondevai = 'e';
		  fflush(stdin);
	 }if(ondevai == 'e'){
	 	for(int i=direita; i >= esquerda; i-- ){
	 		matx[base][i] = count++ ;
		 }
		 base-- ;
		 ondevai = 'c';
		  fflush(stdin);
	 }if(ondevai == 'c'){
	 	for(int i=base ; i >= topo ; i--){
	 		matx[i][esquerda] = count++;
		 }
		 esquerda++;
		 ondevai = 'd';
		  fflush(stdin);
	 }
	
 }
for (int i = 0 ; i < n ; i ++ ){
	for(int j=0; j< m;j++){
		printf("%.2d    ",matx[i][j]);
		 fflush(stdin);
			}
			printf("\n");
			 fflush(stdin);
	
}
 
 
}

int main(){
	int n = 5;
//	int matx[n][n];
//	int count = 0 ;
// 	int aux = 0 ;
 	caracol(n);
	
return 0;	
}
