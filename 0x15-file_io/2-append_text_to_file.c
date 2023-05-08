#include "main.h"

/**
 * append_text_to_file - end of a file.
 * @filename: A name file.
 * @text_content: The string to add to the end of the file.
 *c is really difficult
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tin, kfc, gas = 0;
/*do you remember*/
	if (filename == NULL)
		return (-1);
/*what was that*/
	if (text_content != NULL)
	{
		for (gas = 0; text_content[gas];)
			gas++;
	}
/*come here sugar*/
	tin = open(filename, O_WRONLY | O_APPEND);
	kfc = write(tin, text_content, gas);
/*what a loser*/
	if (tin == -1 || kfc == -1)
		return (-1);
/*what a loser*/
	close(tin);
/*no food or wine*/
	return (1);
}
/*create a loop in c*/
