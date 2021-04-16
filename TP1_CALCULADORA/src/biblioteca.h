#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

																		//MENU

	/*
* brief el menu de opciones de la calculadora.
* param recibe el numero A para mostrarlo en pantalla.
* param recibe el numero B para mostrarlo en pantalla.
* return retorna la opcion que ingrese el usuario
*/
	int menuOpciones(float a, float b, int c, int d);
																		//GET

	/*
* brief permite ingresar un numero al usuario .
* param recibe el puntero a la direccion de memoria donde se va a guardar el numero.
*
*/
	void ingresarNum1(float *num1);

	/*
* brief permite ingresar un numero al usuario .
* param recibe el puntero a la direccion de memoria donde se va a guardar el numero.
*
*/
	void ingresarNum2(float *num2);

																		//OPERACIONES ARITMETICAS

	/*
* brief recibe dos numeros y los suma.
* param la variable suma adquiere dicho calculo entre ambos numeros.
* return retorna el valor de la suma.
*/
	float SumaOperandos(float num1, float num2);

	/*
* brief recibe dos numeros y los resta.
* param la variable resta adquiere dicho calculo entre ambos numeros.
* return retorna el valor de la resta.
*/
	float RestaOperandos(float num1, float num2);

	/*
* brief recibe dos numeros y los multiplica.
* param la variable producto adquiere dicho calculo entre ambos numeros.
* return retorna el valor del producto.
*/
	float MultiplicacionOperandos(float num1, float num2);

	/*
* brief recibe dos numeros y los divide.
* param el numero dividiendo.
* param el numero divisor.
* return retorna el cociente.
*/
	float DivisionOperandos(int num1, int num2, float *aux);

	/*
* brief recibe un numero y le realiza su factorial.
* param el numero a realizarle el factorial.
* return retorna el resultado del factorial.
*/
	long long int FactorialNum1(int num1);

	/*
* brief recibe un numero y le realiza su factorial.
* param el numero a realizarle el factorial.
* return retorna el resultado del factorial.
*/
	long long int FactorialNum2(int num2);

#endif
