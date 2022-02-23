#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  a[0]=0;
  a[1]=0;
  for(int i=2;i<n;i++)
    a[i]=i;
}
void erotosthenes_sieve(int n, int a[n])
{
  int j=2,k;
  while(j<n)
  {
    for(;j<=sqrt(n);j++)
    {
      if ( a[i] != 0)
        break;
    }
    for(int k = j+j; j< n;j +=j
    {
      a[k]=0;      
    }
  }
}
void out_put(int n, int a[n])
