#include <main.h>
/**
 * _printf - Function that produces a formatted output
 * @format:  Format of the output from the function
 * @ch: character argument to be passed through the function
 * @my_string: string to be passed through the function
 *
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ch, my_string)
{
	char ch = 'A';
	char my_string[] = "That is a beautiful dog";



	printf("The first letter of the alphabet is: %c", ch);
	printf("%s", my_string);

	return (0);
}
