#include <stdio.h>
#include <math.h>

int main (){ //Te pedir� que ingreses un numero negativo, y no parar� hasta que lo ingreses
	int a;
	
	while(a >= 0){
		printf("Ingrese un numero negativo: ");
		scanf("%d", &a);
		if(a >= 0){
			printf("Error!! No se ingreso numero negativo. \n\n");
		}
	}
	printf("Valor negativo ingresado correctamente");
	
	return 0;
}
