#include <stdio.h>

void sort(int a[],int k,int n)
{
    int m,l=0,i=0;
    m=n/2;
    while(k!=a[m]&&i<n/2)
    {
        if(k>a[m])
        {
            l=m;
            m=(m+n)/2;
        }
        else m=(l+m)/2;
        i++;

    }
    if(i==n/2)
    printf("Element not found\n");
    else printf("Element %d found at index: %d\n",k,m);
}

int main()
{
    int a[9],i,k;
    printf("Enter 9 elements in ascending or descending order:");
    for(i=0;i<9;i++)
    scanf("%d",&a[i]);
    printf("Enter the element which is to be find: ");
    scanf("%d",&k);
    sort(a,k,9);
    return 0;
}