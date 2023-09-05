//Programa que suma N n�meros enteros a partir de 0 (Tomando en cuenta n�meros negativos).

#include <stdio.h>
#include <math.h>
int main(){
	while (1){
		
		printf("Elegir el n�mero N, del cual se obtendra la suma a partir del 0: \n");
		int Num;
		scanf("%d",&Num);
		
		printf("El numero seleccionado es:%d\n", Num);
		printf ("La suma gaussiana del 0 al n�mero %d, es:\n", Num);
		
		int AbsolNum = powf(powf(Num,2), 0.5);
		int StoredVar = 0;
		
		for (int i = 0; i <= AbsolNum; i++){
			StoredVar = StoredVar + i;
		}
		
		StoredVar = (StoredVar * Num)/AbsolNum;
		printf("%d \n", StoredVar);
		
		printf("Escriba 2 si quiere finalizar el programa, de lo contrario, otorgue cualquier otro input: \n");
		int UserInputChoice;
		scanf("%d", &UserInputChoice);
		
		if (UserInputChoice == 2){
			break;
		}
		
	}
	return 0;
}
