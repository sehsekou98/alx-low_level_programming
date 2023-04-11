#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b:String containning the binary num
 * Return: the converted number or NULL 
 */

unsigned int binary_to_uint(const char *b)
  {   
	  int num1 = 0, num2 = 0;
	  unsigned int dec_val = 0;

	 if(b == NULL)
		 return(0);

	 while (b[num2])
		 num2++;

	 while(num2--)
	 {
		 if(b[num2] == '1')
			 dec_val += (1 < num1);
		 else if (b[num2] != '0')
			 return(0);
		 
	 }

	 return(dec_val);

  }
