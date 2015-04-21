//Convierte caracteres de salida para que sean visibles
//Federico Mandri K2051
//21-04-2015


#include <stdio.h>

int main (void)
{
	int c = 0;
		
	while ( ( c = getchar() ) != EOF )
	{
		if ( c == '\t')
		{
		   printf( "\\");
		   printf("\\t");
        }
        
		else if ( c == '\b')
		     {
                  printf( "\\");
                  printf( "\\b");
             }
        
        else if ( c == '\\')
             printf( "\\\\");
                  
        else        
           putchar ( c );
	}
} 
