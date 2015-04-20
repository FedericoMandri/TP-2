//Convierte caracteres de salida para que sean visibles
//Federico Mandri K2051
//20-04-2015


#include <stdio.h>

int main (void)
{
	int c = 0;
		
	while ( ( c = getchar() ) != EOF )
	{
		if ( c == '\t')
		   printf( "\\t");
        
		if ( c == '\b')
		   printf( "\\b");
        
        if ( c == '\\')
		   printf( "\\");
                
        putchar ( c );
	}
} 
