#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: an array of a command listed
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
