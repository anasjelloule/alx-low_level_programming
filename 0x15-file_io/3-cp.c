/*
 * File: 3-cp.c
 * Auth:Anas Jelloul
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
char *cr_bffr(char *fls);
void cs_fl(int f_d_);

/**
 *  cr_bffr -
 * @fls: char *
 * @text_content: char*
 * Return: int
 */
char *cr_bffr(char *fls)
{
char *bffr;
bffr = malloc(sizeof(char) * 1024);
if (bffr == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fls);
exit(99);
}
return (bffr);
}
/**
 *  cs_fl -
 * @f_d_: char *
 * Return: int
 */
void cs_fl(int f_d_)
{
int cnn;
cnn = close(f_d_);
if (cnn == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d_);
exit(100);
}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int frm, dist, anas, rrd;
char *bffr;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

bffr = cr_bffr(argv[2]);
frm = open(argv[1], O_RDONLY);
rrd = read(frm, bffr, 1024);
dist = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do
{
if (frm == -1 || rrd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(bffr);
exit(98);
}

anas = write(dist, bffr, rrd);
if (dist == -1 || anas == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(bffr);
exit(99);
}

rrd = read(frm, bffr, 1024);
dist = open(argv[2], O_WRONLY | O_APPEND);

} while (rrd > 0);
free(bffr);
cs_fl(frm);
cs_fl(dist);
return (0);
}
