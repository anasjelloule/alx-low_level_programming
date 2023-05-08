#include <stdlib.h>
#include "main.h"
/**
 *  read_textfile -  reads a text file and prints.
 * @filename: char *
 * @letters: size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *bffr;
ssize_t oop, anas, rrd;
if (filename == NULL)
return (0);
bffr = malloc(sizeof(char) * letters);
if (bffr == NULL)
return (0);
oop = open(filename, O_RDONLY);
rrd = read(oop, bffr, letters);
anas = write(STDOUT_FILENO, bffr, rrd);
if (oop == -1 || rrd == -1 || anas == -1 || anas != rrd)
{
free(bffr);
return (0);
}
free(bffr);
close(oop);
return (anas);
}
