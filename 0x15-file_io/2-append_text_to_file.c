#include "main.h"
/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s && s[len] != '\0')
        len++;

    return (len);
}
/**
 * append_text_to_file - appends a text to a existing file
 * @filename: the name of the file to append
 * @text_content: a null terminated string to add to the file
 * 
 * Return: 1 on success and -1 on failure
 */
 
 int append_text_to_file(const char *filename, char *text_content)
 {
    int fd;
    ssize_t writef;
     
    if (!filename)
	    return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
    	writef = write(fd, text_content, _strlen(text_content));
    	if (writef == -1)
    	{
    	    close(fd);
		return (-1);
    		}
	}
	close(fd);
	return (1);
} 
