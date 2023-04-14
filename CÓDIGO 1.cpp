// Codigo #1 MAXIMO COMUN DIVISOR
#include<stdio.h>
#include<stdlib.h>

int MCD(int A, int B){
	if(A<B){
		return MCD(B, A);
		
	}else if(B==0){
		return A;
	}else return MCD(B,A%B);	
}

int main(){
	int A=9, B=2;
	printf("El MCD de %i y %i  es: %i",A,B,MCD(A,B));
	return 0;
	
}