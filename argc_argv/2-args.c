#include <stdio.h>
#include "main.h"

/**
 *main - print all arguments
 *@argc: test
 *@argv: test
 *@counter: test
 *Return: 0 
 */

int main(int argc, char *argv[])
{

	int counter;

	for (counter = 0; counter != argc; counter++)

	printf("%s\n", argv[counter]);

	return (0);
}
