#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int pid = fork();
	printf("Hola mundo, soy un proceso que solo imprime un mensaje\n");
	
	if (pid !=0)
	{
		printf("Hola mundo, mi idenfiticador de proceso es: %d\n", getpid());
	}
	else
	{
		printf("Hola mundo, mi identificador de proceso es: %d\n", getpid());
	}
}

