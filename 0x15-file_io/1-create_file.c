#include "main.h"
/**
 *  create_file - creates a file
 * @filename: char *
 * @text_content: char*
 * Return: ssize_t
 */
int create_file(const char *filename, char *text_content)
{
int oop, anas, lnc = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (lnc = 0; text_content[lnc];)
lnc++;
}

oop = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
anas = write(oop, text_content, lnc);

if (oop == -1 || anas == -1)
return (-1);
close(oop);
return (1);
}
