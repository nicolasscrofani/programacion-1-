#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "biblioteca.h"

	int menuOpciones(float a, float b, int c, int d)
	{
		int opcion;
		printf("\t\tcalculadora\n\n");
		if (c)
		{
			printf("1)ingresar primer operando (A=%.2f)\n", a);
		}
		else
		{
			printf("1)ingresar primer operando (A=X)\n");
		}

		if (d)
		{
			printf("2)ingresar segundo operando (B=%.2f)\n", b);
		}
		else
		{
			printf("2)ingresar segundo operando (B=Y)\n");
		}

		puts("3)Calcular todas las operaciones\n\ta)Calcular la suma(A+B)\n\tb)Calcular la resta(A-B)\n\tc)Calcular la division(A/B)\n\tc)Calcular la multiplicacion(A*B)\n\td)calcular el factorial(A!)");
		puts("4)Mostrar resultados:");
		puts("5)Salir");
		scanf("%d", &opcion);

		return opcion;
	}

	void ingresarNum1(float *num1)
	{

		printf("ingrese el primer operando:");
		scanf("%f", num1);
	}

	void ingresarNum2(float *num2)
	{
		printf("ingrese el segundo operando:");
		scanf("%f", num2);
	}

	float SumaOperandos(float num1, float num2)
	{
		float suma;
		suma = num1 + num2;
		return suma;
	}

	float RestaOperandos(float num1, float num2)
	{
		float resta;
		resta = num1 - num2;
		return resta;
	}

	float MultiplicacionOperandos(float num1, float num2)
	{
		float producto;
		producto = num1 * num2;
		return producto;
	}

	float DivisionOperandos(int num1, int num2, float *aux)
	{
		int retorno;
		if (num2 != 0)
		{
			*aux = (float)num1 / num2;
			retorno = 0;
		}
		else
		{
			retorno = -1;
		}

		return retorno;
	}

	long long int FactorialNum1(int num1)
	{
		int retorno = 1;
		if (num1 > 0)
		{
			for (int i = 1; i <= num1; i++)
			{
				retorno = retorno * i;
			}
		}
		else
		{
			retorno = -1;
		}
		return retorno;
	}

	long long int FactorialNum2(int num2)
	{
		int retorno = 1;
		if (num2 > 0)
		{
			for (int i = 1; i <= num2; i++)
			{
				retorno = retorno * i;
			}
		}
		else
		{
			retorno = -1;
		}
		return retorno;
	}
