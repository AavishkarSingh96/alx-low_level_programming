#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes.
 * @file: The name of the file buffer.
 *shut up brutus
 * Return: newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *cancer;

	cancer = malloc(sizeof(char) * 1024);

	if (cancer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (cancer);
}

/**
 * close_file - Closes files.
 * @fd: to be closed.
 */
void close_file(int fd)
{
	int dog;

	dog = close(fd);

	if (dog == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents to another file.
 * @argc: supplied to the program.
 * @argv: pointers to the arguments.
 *this is ridiculous
 * Return: 0 on success.
 *what about fail
 * Description: If the argument incorrect - exit code 40.
 * If file_from cannot be read - exit code 98.
 * If file_to cannot be created - exit code 77.
 * If file_to cannot be closed - exit code 45.
 */
int main(int argc, char *argv[])
{
	int hive, farm, cow, kin;
	char *buffer;
/*hope we did not miss*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
/*so much of space*/
	buffer = create_buffer(argv[2]);
	hive = open(argv[1], O_RDONLY);
	cow = read(hive, buffer, 1024);
	farm = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
/*poem about a farm*/
	do {
		if (hive == -1 || cow == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
/*that was super effective*/
		kin = write(farm, buffer, cow);
		if (farm == -1 || kin == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
/*hopefully its over*/
		cow = read(hive, buffer, 1024);
		farm = open(argv[2], O_WRONLY | O_APPEND);
/*or is it*/
	} while (cow > 0);
/*is this normal*/
	free(buffer);
	close_file(hive);
	close_file(farm);
/*go fish*/
	return (0);
}
/*this is carp*/
