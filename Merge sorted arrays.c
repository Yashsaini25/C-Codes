#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 0, k = 0, *a, *b, *c, i, n, m;
    printf("Enter the number of elements for the 1st array: ");
    scanf("%d", &n);
    printf("Enter the number of elements for the 2nd array: ");
    scanf("%d", &m);
    a = (int*)malloc(n * sizeof(int));
    b = (int*)malloc(m * sizeof(int));
    c = (int*)malloc((n + m) * sizeof(int));
    if (a == NULL || b == NULL || c == NULL)
    {
        printf("Memory allocation failed");
        exit(1);
    }
    printf("Enter %d elements for the 1st array:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter %d elements for the 2nd array:\n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n + m; i++)
    {
        if (j < n && (k >= m || a[j] <= b[k]))
        {
            c[i] = a[j];
            j++;
        }
        else
        {
            c[i] = b[k];
            k++;
        }
    }
    printf("Array after merging:");
    for (i = 0; i < n + m; i++)
        printf(" %d", c[i]);
    printf("\n");
    free(a);
    free(b);
    free(c);
    return 0;
}
