// Programa originalmente extraido da wikipedia: https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Fibonacci e adaptado por mim os problemas que atrapalhava na execução do visor.
#include <stdio.h>
int main(){
	int N, num, numA, numB, i;
	printf("Digite quantos termos devem aparecer: ");
	scanf("%d", &N);
	numA = 1; numB = 0; i = 0;
	while(i < N){
	    printf("%d\n", numA);
	    num = numA + numB;
	    numB = numA;
	    numA = num;
	    i++;
	 }
}
