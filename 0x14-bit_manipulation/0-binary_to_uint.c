#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b:String containning the binary num
 * Return: the converted number or NULL 
 */

unsigned int binary_to_uint(const char *b)
  {   
	  int num1;
	  unsigned int num2 = 0;

	 if(b == NULL)
		 return(0);

	 for (num1 = 0; b[num1]; num1++)
		
	 {
		 if(b[num1] < '0' || b[i] > '1')
			return(0);
		 num2 = 2*num2 + (b[num1] - '0');
			 
		 
	 }

	 return(num2);

  }
