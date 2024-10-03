#include<stdio.h>
void
main ()
{
  float s = 60, t1, t2, t3;
  printf ("Enter t1:\n");
  scanf ("%f", &t1);

  printf ("Enter t2:\n");
  scanf ("%f", &t2);

  printf ("Enter t3:\n");
  scanf ("%f", &t3);
  printf ("Distance for t1=\n%f", s * t1);
  printf ("Distance for t2=\n%f", s * t2);
  printf ("Distance for t3=\n%f", s * t3);


}
