#include "monty.h"

char *oparg;

/**
 * main - The entry point of the program
 * @argc: arguement count
 * @argv: arguement array
 * Return: Success
 */

int main(int argc, char **argv)
{
	FILE *fp;
	char buffer[132];
	int bufsize = sizeof(buffer);
	unsigned int line_number = 0;
	char *str = NULL;

	if (argc != 2)
		error_handler();
	fp = fopen(argv[1], "r");
	if(fp == NULL)
		file_error(argv[1]);

	while(fgets(buffer, bufsize, fp) != NULL)
	{
		str = strtok(buffer, " \t\n");
		oparg = strtok(NULL, " \t\n");
		line_number++;
	}

	fclose(fp);

}

