#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,l=0,t=0,*a,i,n,ind;
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
        for(j=0;j<n;j++)
        {
            if(*(a+i)==*(a+j))
            l++;
        }
        if(l==1)
        t++;
        if(t==4)
        ind=i;
        l=0;
    } 
    printf("4th non-repeating element is: ");
    printf("%d",*(a+ind));
    printf("\n");
    return 0;
}