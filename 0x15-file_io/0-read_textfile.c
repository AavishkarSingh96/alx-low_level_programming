#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- STDOUT print
 * @filename: text read
 * @letters: letter count read
 * Return: w- actual bytes printed
 *        0 fail or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
/*there is a heaven*/
{
	char *tan;
	ssize_t lo;
	ssize_t ray;
	ssize_t rain;
/*there is no water*/
	lo = open(filename, O_RDONLY);
	if (lo == -1)
		return (0);
/*get low when whistle blow*/
	tan = malloc(sizeof(char) * letters);
	rain = read(lo, tan, letters);
	ray = write(STDOUT_FILENO, tan, rain);
/*nothing to write home*/
	free(tan);
	close(lo);
	return (ray);
}
/*comments are really long*/
