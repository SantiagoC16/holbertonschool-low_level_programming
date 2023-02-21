#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* give me a message acording to the number */
/* betty style doc for function main goes there */
int main(void)
{
  int n;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if ( n > 0 )
    printf( "is positive" );
  if ( n == 0 )
    printf( "is zero" );
  if ( n < 0 )
    printf( "is negative" );
  if ( n > 0 )
  return (0);
}
