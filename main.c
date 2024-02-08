#include <stdio.h>
#include "encrypt.h"

int main() 
{
	char str[] = "Hello";
	encrypt(str);
	printf("Зашифровано в: %s\n", str);
	encrypt(str);
	printf("Расшифровано в: %s\n", str);

	return 0;
} 

