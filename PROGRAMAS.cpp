#include<stdio.h>
#include<stdlib.h>

// Codigo #1 MAXIMO COMUN DIVISOR
/*
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
	
}*/

//Codigo #2  SERIE DE FIBONACCI

/*
long int fib(int n){
	if (n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else return fib(n-2)+fib(n-1);
/*
int main(){
	int n=11;
	printf("El valor del fibonacci de %i es: %i",n, fib(n));
	return 0;
}*/

//Codigo #3 FUNCION DE ACKERMANN

/*
int A(int m, int n){
	if(m==0)
		return n+1;
	else if(m>0 && n==0)
		return A(m-1,1);
	else if(m>0 && n>0)
	    return A(m-1,A(m,n-1));
}

int main(){
	int m,n;
     printf("Ingresa dos valores : \n");
     scanf("%i%i",&m,&n);
     printf("El resultado es:%i\n",A(m,n));
	return 0;
}*/

//Codigo #4 FUNCION DE MORRIS

/*
long morris(int n, int m){
	if(n==m)
	return (m+1);
	else
	return morris(n,morris(n-1,m+1));
	}
int main(){
	int n,m;
	printf("Ingresa los valores de n y m:\n ");
	scanf("%i%i",&n,&m);
	printf("El resultado es:%i\n",morris(n,m));
	return 0;
}*/

//Codigo #5 FUNCIONES PAR E IMPAR(Mutuamente recursivas)

/*
int par(int m),impar(int m);
int n;

int par(int m){
	if(m==0){
		return 1;
	}
	else{
		return impar(m-1);
	}
}

int impar(int m){
	if(m==0){
		return 0;
	}
	else{
		return par(m-1);
	}
}

int par(int);
int impar(int);

int main(){
	int m;
	printf("Ingresa un numero:\n");
	scanf("%i",&m);
	
	if(par(m)==1){
		printf("El numero es par\n");
	}else{
		printf("El numero es impar \n");
	}
	return 0;
}*/

//Codigo #6 funcion Q

/*
int Q(int a, int b){
	if(a<b){
		return 0;
	}else{
		return Q(a-b,b)+1;
	}
}

int main(){
	int a,b;
	printf("Ingresa los valores de a y b: \n ");
	scanf("%i%i",&a,&b);
	printf("El resultado es: %i \n",Q(a,b));
	return 0;
}*/

//Codigo #7 BUSQUEDA BINARIA
/*
    int BusBin(int A[9],int x, int i, int j);
    int main(){
    	int i, j, x;
    	int A[]={1,2,3,4,5,6,7,8,9};
    	x=1;
    	i=1;
    	j=9;	
    BusBin(A,x,i,j);
    	printf("La posicion de x es:%i\n",BusBin(A,i,j,x));
	return 0;
}
int BusBin(int A[9],int x, int i, int j){

	int medio;
	medio=(i+j)/2;
	if(A[medio]=x){
		return medio;
	}else if((x<A[medio])&&(i<medio)){
		return BusBin(A,x,i,medio-1);
	}else if(medio<j){
		return BusBin(A,x,medio+1,j);
	}else{
		return -1;		
	}	
}*/
















