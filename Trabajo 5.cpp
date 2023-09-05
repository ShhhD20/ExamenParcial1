#include <stdio.h>
#include <math.h>

int main (){
	int a;
	int b = 0; // 1
	int c = 0; // 2
	int d = 0; // 3
	int e = 0; // 4
	int f = 0; // 5
	int g = 0; // 6
	int h = 0; // 7
	int i = 0; // 8
	int j = 0; // 9
	int operacion;
	
	printf("Ingresa un numero, y se sumaran sus digitos: ");
	scanf("%d", &a);
	b = a % 10;
	printf("%d \n", b);
	c = a % 100;
	printf("%d \n", c);
	d = a % 1000;
	printf("%d \n", d);
	e = a % 10000;
	printf("%d \n", e);
	f = a % 100000;
	printf("%d \n", f);
	g = a % 1000000;
	printf("%d \n", g);
	h = a % 10000000;
	printf("%d \n", h);
	i = a % 100000000;
	printf("%d \n", i);
	j = a % 1000000000;
	printf("%d \n", j);
	
	j -= i; i -= h;	h -= g;	g -= f;	f -= e;	e -= d;	d -= c;	c -= b;
	j = j/100000000;
	printf("%d \n", j);
	
	
	return 0;
}
