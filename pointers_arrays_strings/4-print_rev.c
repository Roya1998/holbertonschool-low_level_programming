#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print
 * main - check the code
 *
 * Return: Always 0
*/
void print_rev(char *s)
{
    int i = 0;

    // First, find the length of the string
    while (s[i] != '\0')
    {
        i++;
    }

    // Then print the characters in reverse
    i--;
    while (i >= 0)
    {
        _putchar(s[i]);
        i--;
    }

    _putchar('\n');
}
