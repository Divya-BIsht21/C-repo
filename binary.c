//Program Name: BinarySearch.c 
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, low, high, middle, n, search, array[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d element\n", n);
    for ( i=0 ; i<n ; i++ )
        scanf("%d",&array[i]);
    printf("Enter value to find\n");
    scanf("%d",&search);
    low = 0;
    high = n - 1;
    middle = (low+high)/2;
    while( low<= high )
    {
        if ( array[middle] < search )
            low = middle + 1;
        else if ( array[middle] == search )
        {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
            high = middle - 1;
        middle = (low + high)/2;
    }
    if ( low > high )
        printf("Not found! %d is not present in the list.\n", search);
    return 0;
}
