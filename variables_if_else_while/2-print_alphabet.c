#include <stdio.h>


/*
 * File: 2-print_alphabet.c
 */



/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */



int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
