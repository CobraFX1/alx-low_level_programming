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
 * create_file - Creates a file with specific content and permissions.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t writef;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
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

