/*
* The MIT License (MIT)
*
* Copyright (c) Steven Agyekum <agyekum@posteo.de>
*
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software
* and associated documentation files (the "Software"), to deal in the Software without restriction,
* including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
* and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all copies
* or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*/

#include <stdio.h>
#include <stdint.h>

void
print2bin( const char *str )
{
    uint8_t
      a         /* Ascii */
    , b         /* Bit */
    , p = 0     /* Padding (right) */
    , l = 8U;   /* Binary Layout */

    while( str && *str != '\0' )
    {
        for( a = *str; a > 0; a = ( a >> 1U ) )
        {
            b = ( ( a % 2U ) > 0 ) ? 1U : 0;

            if( *str == a )
                printf( "\n%c    | %d    %s", *str, a,
                    ( a < 100U ) ? " |" : "|" );
            
            p++;
            printf( "%d", b );
        }

        while( p < l && p++ )
            printf( "%s0", (p == l ) ? ">|" : "" );
        
        p = 0; *str++;
    
    }
}

int main( void )
{
	printf("-------------------------\n");
	printf("Char | Ascii  | Bin (RTL)\n");
	printf("-------------------------");

	print2bin("Steven");

	return 0;
}

