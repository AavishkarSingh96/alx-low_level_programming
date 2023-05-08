#include "main.h"

/**
 * create_file - file created.
 * @filename: A pointer to file to create.
 * @text_content: string to write to the file.
 *c language is used here
 * Return: fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ryu, oat, z = 0;
/*fruit is tasty*/
	if (filename == NULL)
		return (-1);
/*is music big bang*/
	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}
/*to create this loop*/
	ryu = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
/*we could be heroes*/
	oat = write(ryu, text_content, z);
/*down for the fin*/
	if (ryu == -1 || oat == -1)
		return (-1);
/*where ever it takes*/
	close(ryu);
/*baby I am good*/
	return (1);
}
/*I am feeling right*/
