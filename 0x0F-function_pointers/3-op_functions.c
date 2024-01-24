#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - returns sum of 2 values
 * @a: first arg
 * @b: second arg
 *
 * Return: sum of 2 args
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns subtrction of 2 args
 * @a: first arg
 * @b: second arg
 *
 * Return: sub of 2 args
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mulitplies 2 args
 * @a: first arg
 * @b: second arg
 *
 * Return: mul of 2 args
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 args
 * @a: first arg
 * @b: second arg
 *
 * Return: div of 2 args
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Erro\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns modulus of 2 args
 * @a: first arg
 * @b: second arg
 *
 * Return: mod of 2 args
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
