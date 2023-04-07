#include "main.h"

/**
 * read_textfile - print file content
 * @filename: pointer to file name
 * @letters: number of characters to print
 *
 * Return: number of printed characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, i;
	char buf[1024];
	int fp;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	n = read(fp, buf, letters);
	i = write(STDOUT_FILENO, buf, n);
	close(fp);
	if (n != i || n == -1 || i == -1)
		return (0);
	return (n);


}
