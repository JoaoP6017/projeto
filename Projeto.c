#include <stdio.h>

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
	return 0;
}
