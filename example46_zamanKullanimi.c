#include <stdio.h>
#include <time.h> 
int main ()
{
  time_t start,end;
  time (&start);
  printf ("Bir tuşa basınız");
  char kar;
  scanf("%c",&kar);
  time (&end);
  printf ("Tuşa basmanız %.2lfsaniye sürdü.n", difftime (end,start));
  return 0;
}

