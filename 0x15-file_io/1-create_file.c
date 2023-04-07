#include "main.h"

/**
 * create_file - create a file and added string text_content to it
 * @filename: pointer to the name of new file
 * @text_content: pointer to the content to be added to the file
 *
 * Return: 1(success) or -1(failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fp, n, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fp = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	n = write(fp, text_content, i);
	if ((fp == -1 || n == -1))
		return (-1);
	close(fp);
	return (1);
}
