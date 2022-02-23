#include <stdio.h>
int input_number()
{  
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return 0;
}
int is_prime(int n)
{
  int i;
  if(n==0||n==1);
  return 0;
  if(n==2);
  return 1;
  for(i=2; i<=n;i++)
    {
      if (n%i == 0)
        return 0;
    }
  return 1;
}
void output(int n, int is_prime)
{
  if ( is_prime==1 )
  {
    printf("%d is a prime numbe\n",n);
  }
  else
  {
    printf("%d is a composite\n",n);
  }
}
int main()
{
  int n,isp;
  n=is_prime(n);
  isp=is_prime(n);
  output(n,isp);
  return 0;
    }
