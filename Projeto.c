#include <stdio.h>

int mult(int a, int b)
{
	int mult = a*b;
	return mult;
}
int sub(int a, int b)
{
	int sub = a-b;
	return sub;
}
int soma(int a, int b)
{
	int soma_num = a + b;
	return soma_num;
}
int main()
{
	printf("Soma dos numeros %d\n", soma(3,4));
	printf("A subtracao dos numeros : %d\n",sub(4,3));
	printf("Multiplicacao dos numeros: %d\n", mult(4,3));
	return 0;
}
