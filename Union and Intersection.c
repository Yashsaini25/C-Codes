#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j,p,l=0,k,*a,*b,*u,*i,n,m;
    printf("Enter the no. of elements for 1st array: ");
    scanf("%d",&n);
    printf("Enter the no. of elements for 2nd array: ");
    scanf("%d",&m);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    u=(int*)malloc((m+n)*sizeof(int));
    i=(int*)malloc(n*sizeof(int));
    if(a==NULL||b==NULL||u==NULL||i==NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }
    printf("Enter %d elements for 1st array:\n",n);
    for(j=0;j<n;j++)
    {
     scanf("%d",&a[j]);
     *(u+j)=a[j];
    }
    printf("Enter %d elements for 2nd array:\n",m);
    for(j=0;j<m;j++)
    scanf("%d",&b[j]);
    p=n;
    for(j=0;j<m;j++)
    {
        for(k=0;k<n;k++)
        {
            if(*(b+j)==*(a+k))
            {
                l++;
                break;
            }
        }
        if(l==0)
        {
            *(u+p)=*(b+j);
            p++;
        }
        l=0;
    }
    l=0;
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            if(*(a+j)==(*(b+k)))
            {
                *(i+l)=*(a+j);
                l++;
                break;
            }
        }
    }
    printf("Union of elements: ");
    for(j=0;j<p;j++)
    printf(" %d",*(u+j));
    printf("\n");
    printf("Intersection of elements: ");
    for(j=0;j<l;j++)
    printf(" %d",*(i+j));
    printf("\n");
    return 0;

}
