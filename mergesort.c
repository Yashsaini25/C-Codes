#include <stdio.h>

void mergesort(int [], int, int);
void merge(int [], int, int, int);

int main()
{
    int low=0,high=9,a[]={3,9,0,1,6,8,2,5,4,7};
    mergesort(a,low,high);
    printf("Sorted array: \n");
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}

void mergesort(int a[],int low ,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void merge(int a[], int low , int mid , int high)
{
    int i=low,j=mid+1,k=low,b[10];
    

    while(i<=mid && j<=high)
    {
        if(a[i]>a[j])
        {
            b[k]=a[j];
            j++;
            k++;
        }
        else 
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }

    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }

    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }

    for(i=low;i<=high;i++)
    a[i]=b[i];

}
