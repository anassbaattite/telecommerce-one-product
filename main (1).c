#include<stdio.h>
int
main ()
{
  int p, t, x[3] = { 1, 2, 3 }, n;
  printf
    ("\n\nproduct 'a'code number is 1\nproduct 'b'code number is 2\nproduct'c'code number is 3\n\n");
  printf
    ("-----------------------------------------------------------------\n");
  printf ("\n\n enter the number code of the product:");
  scanf ("%d", &x[3]);
  printf ("enter the how much the custuer wants:");
  scanf ("%d", &n);
  switch (x[3], n)
    {
    case 1:
      p = 300;
      n <= 15;
      printf ("price of this product is=%d\n", p);
      printf ("the totale price is %d", t = n * 1.2 * p);
      break;
    case 2:
      p = 150;
      n <= 20;
      printf ("price of this product is=%d\n", p);
      printf ("the totale price is %d", t = n * 1.2 * p);
      break;
    case 3:
      p = 230;
      n <= 30;
      printf ("price of this product is=%d\n", p);
      printf ("the totale price is %d", t = n * 1.2 * p);

      break;
    default:
      printf
	("we do not have this product or we do not have enough product in the stock");
      break;
    }


}
