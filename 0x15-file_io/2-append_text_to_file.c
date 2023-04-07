#include "main.h"

/**
 * append_text_to_file - append text_content to existing file
 * @filename: pointer to file name
 * @text_content: pointer to the content to be appended to the file
 *
 * Return: 1(success) or -1(failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, n, i = 0;

	if (filename == NULL || access(filename, F_OK && W_OK) != 0)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fp = open(filename, O_RDWR | O_APPEND);
	n = write(fp, text_content, i);
	if (fp == -1 || n == -1)
		return (-1);
	close(fp);
	return (1);


}
