#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int n = 5;
	int matx[n][n];
	int count = 0 ;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matx[i][j] = count;
			count++;
			printf("%.2d    ",matx[i][j]);
			
		}printf("\n");
	}
	
return 0;	
}
