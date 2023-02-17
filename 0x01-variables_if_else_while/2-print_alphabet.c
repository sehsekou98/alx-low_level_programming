#include <stdio.h>
/**
 * main - main block
 * description: used `putchar` function to print the alphabet in lowcase.
 * return: 0
 */

int main(void) {
	  char c = 'a';
	  while (c <= 'z')
    {
	    putchar(c);
	    c++
    }
	  putchar('\n');

	  return (0);

}
