#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "biblioteca.h"
	int main()
	{
		setbuf(stdout, NULL);

		float num1;
		float num2;
		int flagNum1 = 0;
		int flagNum2 = 0;
		int flagOperaciones = 0;
		float aux;
		float resultadoSuma;
		float resultadoResta;
		float resultadoProducto;
		float resultadoCociente;
		double resultadoFactorial1;
		double resultadoFactorial2;
		char respuesta = 's';

		do
		{
			switch (menuOpciones(num1, num2, flagNum1, flagNum2))
			{
			case 1:
				ingresarNum1(&num1);
				flagNum1 = 1;
				system("cls");
				break;
			case 2:

				if (flagNum1)
				{
					ingresarNum2(&num2);
					flagNum2 = 1;
				}
				else
				{
					printf("por favor, primero debe ingresar el primer numero \n");
					system("pause");
				}
				system("cls");
				break;
			case 3:
				if (flagNum2)
				{
					system("cls");
					resultadoSuma = SumaOperandos(num1, num2);
					resultadoResta = RestaOperandos(num1, num2);
					resultadoProducto = MultiplicacionOperandos(num1, num2);
					resultadoCociente = DivisionOperandos(num1, num2, &aux);
					resultadoFactorial1 = FactorialNum1(num1);
					resultadoFactorial2 = FactorialNum2(num2);
					printf("operaciones realizadas, pulse 4 para ver los resultados \n");

					flagOperaciones = 1;
				}
				else
				{
					printf("por favor, primero debe ingresar ambos operandos \n");
					system("pause");
					system("cls");
				}
				break;
			case 4:
				if (flagOperaciones)
				{
					system("cls");
					printf("el resultado de la suma es %.2f\n", resultadoSuma);
					printf("el resultado de la resta es %.2f\n", resultadoResta);
					printf("el resultado de la multiplicacion es %.2f\n", resultadoProducto);
					if (resultadoCociente == -1)
					{
						printf("error, no se puede dividir por cero\n");
					}
					else
					{
						printf("el resultado de la division es %.2f\n", aux);
					}

					if (resultadoFactorial1 >= 1)
					{
						printf("el resultado del factorial de A! es %.2f\n", resultadoFactorial1);
					}
					else
					{
						printf("error, no existe factorial para numeros negativos o para cero\n");
					}

					if (resultadoFactorial2 >= 1)
					{
						printf("el resultado del factorial de B! es %.2f\n", resultadoFactorial2);
					}
					else
					{
						printf("error, no existe factorial para numeros negativos o para cero\n");
					}
				}
				else
				{
					printf("primero hay que realizar las operaciones\n");
					system("pause");
					system("cls");
				}
				break;
			case 5:
				respuesta = 'n';
				break;
			default:
				printf("utilice una opcion valida!\n");
				system("pause");
				system("cls");
			}

		} while (respuesta == 's');
		return 0;
	}
