/**
 * rev_string -  revers string
 *
 * @s: String
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i, j = _strlen(s);
char st;
for (i = 0; i < j / 2; i++)
{
st = *(s + i);
*(s + i) = *(s + j - i - 1);
*(s + j - i - 1) = st;
}
}
