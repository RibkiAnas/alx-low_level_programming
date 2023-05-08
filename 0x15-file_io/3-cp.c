#include "main.h"

#define BUFFER_SIZE 1024

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
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 98);
	fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_to_file(fd_to, buffer, bytes_read, argv[2]);
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_files(fd_from, fd_to);
		exit(98);
	}

	close_files(fd_from, fd_to);

	return (0);
}

/**
* open_file - function that opens a file
* @filename: name of the file to open
* @flags: flags for the open function
* @error_code: error code to exit with if an error occurs
*
* Return: file descriptor of the opened file
*/
int open_file(char *filename, int flags, int error_code)
{
	int fd = open(filename, flags, 0664);

	if (fd == -1)
	{
		if (error_code == 98)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		else if (error_code == 99)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);

		exit(error_code);
	}

	return (fd);
}

/**
* write_to_file - function that writes to a file
* @fd: file descriptor of the file to write to
* @buffer: buffer containing the data to write
* @count: number of bytes to write
* @filename: name of the file to write to
*/
void write_to_file(int fd, char *buffer, ssize_t count, char *filename)
{
	ssize_t bytes_written = write(fd, buffer, count);

	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
* close_files - function that closes two files
* @fd1: file descriptor of the first file to close
* @fd2: file descriptor of the second file to close
*/
void close_files(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		close(fd2);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
