#include "main.h"

/**
 * main - function to call all fun
 * @ac: ac
 * @av: av
 * Return: 0
 */

int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
