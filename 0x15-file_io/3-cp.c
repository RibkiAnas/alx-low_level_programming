#include "main.h"

#define BUFFER_SIZE 1024

/**
 * open_files - opens the source and destination files
 * @file_from: source file
 * @file_to: destination file
 * @fd_from: pointer to the source file descriptor
 * @fd_to: pointer to the destination file descriptor
 * Return: 0 on success, exit with code on failure
 */
int open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	*fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(*fd_from);
		exit(99);
	}
	return (0);
}

/**
 * copy_contents - copies the contents of a file to another file
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * Return: 0 on success, exit with code on failure
 */
int copy_contents(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

/**
 * copy_file - copies the content of a file to another file
 * @file_from: source file
 * @file_to: destination file
 * Return: 0 on success, exit with code on failure
 */
int copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;

	open_files(file_from, file_to, &fd_from, &fd_to);
	copy_contents(fd_from, fd_to);

	return (0);
}

/**
* main - function that copies the content of
* a file to another file.
* @argc: number of arguments.
* @argv: array of arguments.
*
* Return: 0 on Success.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (copy_file(argv[1], argv[2]));
}
