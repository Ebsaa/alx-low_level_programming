#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success OR -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_status, words = 0;

	if (filename == NULL)
		return (-1);

	/*open file by creating it and if it exists write but truncate to 0*/
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;
		/*write to file*/
		write_status = write(file, text_content, words);
		if (write_status == -1)
			return (-1);
	}

	close(file); /*close file*/
	return (1);
}
