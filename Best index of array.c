#include <stdio.h>
int main()
{
    int s,a[10]={2,1,3,9,2,4,-10,-9,1,3},i,j,k=2,l,max=0;

    for(i=0;i<10;i++)
    {
     s=0;
     k=2;
     j=i+1;
     s=s+a[i];

     while(j+k<=10)
     {
      for(l=j;l<j+k;l++)
      s=s+a[l];

      j=j+k;
      k++;
     }

      if(max<s)
      max=s;
     }

     printf("%d\n",max);
     return 0;
}