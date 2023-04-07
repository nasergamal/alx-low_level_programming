#include "main.h"
void close_fd(int fd);
/**
 * main - copy contnent of file 1 to file 2
 * @ac: number of argument
 * @av: pointer to argument
 *
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	int fp1, fp2, n, f2;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
	fp1 = open(av[1], O_RDONLY);
	n = read(fp1, buf, 1024);
	fp2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fp1 == -1 || n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}
		f2 = write(fp2, buf, n);

		if ((fp2 == -1) || f2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}
		n = read(fp1, buf, 1024);
		fp2 = open(av[2], O_WRONLY | O_APPEND);
	} while (n > 0);
	close_fd(fp1);
	close_fd(fp2);
	return (0);
}

/**
 * close_fd - close fd
 * @fd: to be closed
 *
 * Return: void
 */
void close_fd(int fd)
{
	int f1;
	
	f1 = close(fd);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
        }
}
