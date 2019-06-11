#include <stdio.h>

int soma(int a, int b);
{
	int soma_num = a + b;
	return soma_num;
}
int main()
{
	printf("Soma dos numeros %d\n", soma(3,4));
	return 0;
}
