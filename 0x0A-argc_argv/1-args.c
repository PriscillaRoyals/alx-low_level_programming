#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
