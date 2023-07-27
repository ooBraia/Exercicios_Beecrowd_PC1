#include <stdio.h>

int main ()
{

	short saldo, i, teste;
	unsigned short n, a, b;

	teste = 0;
	while (scanf("%hu", &n), n)
	{

		saldo = 0;
		printf("Teste %hd\n", ++teste);
		for (i = 0; i < n; ++i)
		{

			scanf("%hd %hd", &a, &b);
			saldo += a;
			saldo -= b;
			printf("%hd\n", saldo);

		}

		printf("\n");
	}

}
