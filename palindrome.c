#include <stdio.h>
void main()
{
  int a, b = 0, c;
  printf("\n\nEnter a row of number to check if it's a palindrome or not\n");
  scanf("\n%d", &a);

  c = a;

  while (c != 0)
  {
    b = b * 10;
    b = b + c%10;
    c = c/10;
  }
  if (a == b)
    printf("\nit is a palindrome number.\n", a);
  else
    printf("\nit is not a palindrome number.\n", a);
}