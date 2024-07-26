#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,l=0,t=0,*a,i,n,ind=-1;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
    for(i=0;i<n;i++)
    {
        l=0;
        if(*(a+i)==-1)
        continue;
        for(j=0;j<n;j++)
        {
            if(*(a+i)==*(a+j))
            {
                l++;
                if(i!=j)
                *(a+j)=-1;
            }
        }
        if(l>1)
        t++;
        if(t==4)
        {
         ind=i;
         break;
        }
    } 
    if(ind!=-1)
    {
     printf("4th repeating element is: ");
     printf("%d\n",*(a+ind));
    }
    else printf("There is no 4th repeating element\n");
    return 0;
}