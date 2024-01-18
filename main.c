#include "monty.h"

char *oparg;

/**
 * main - The entry point of the program
 * @argc: arguement count
 * @argv: arguement array
 *
 */

int main(int argc, char **argv)
{
	FILE *fp;
	char *buffer = NULL;
	size_t bufsize = 0;
	unsigned int line_number = 0;
	char *str = NULL;

	if (argc != 2)
		error_handler();
	fp = fopen(argv[1], "r");
	if(fp == NULL)
		file_error(argv[1]);

	while(getline(&buffer, &bufsize, fp) != -1)
	{
		str = strtok(buffer, " \t\n");
		oparg = strtok(NULL, " \t\n");
		fputs(str, stdout);

		line_number++;
	}

	fclose(fp);
	free(buffer);

}

