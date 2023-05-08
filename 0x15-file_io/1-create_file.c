#include "main.h"

/**
* create_file - function that creates a file.
* @filename: the name of the file to create.
* @text_content: is a NULL terminated string to
* write to the file.
*
* Return: 1 on success, -1 on failure
* (file can not be created, file can not be
* written, write “fails”, etc…).
*/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "w");
	if (!fp)
		return (-1);

	if (text_content)
		fprintf(fp, "%s", text_content);
	
	fclose(fp);
	return (1);
}
