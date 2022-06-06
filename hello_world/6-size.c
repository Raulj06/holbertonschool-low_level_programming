#include<stdio.h>
/**
 * main - prints size of various types
 *
 * Return: 0
 */

int main(void)
{
	int intData;
        float floatData;
	char charData;
	double doubleData;

	printf("Size of int is %zu bytes\n", sizeof(intData));
	printf("Size of float is %zu bytes\n", sizeof(floatData));
	printf("Size of char is %zu byte\n", sizeof(charData));
	printf("Size of double is %zu bytes\n", sizeof(doubleData));	
	return (0);
}
