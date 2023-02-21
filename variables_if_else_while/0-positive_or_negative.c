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
    printf(%d "is positive", \n);
  if ( n == 0 )
    printf(%d "is zero", \n);
  else if ( n < 0 )
    printf(%d "is negative", \n);
  else ( n > 0 )
  return (0);
}
