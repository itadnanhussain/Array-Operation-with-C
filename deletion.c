#include<stdio.h>
int main()
{

    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter %d index element: ",i+1);
        scanf("%d",&arr[i]);
    }

    int idx;
    printf("Enter Which index you want to delete: ");
    scanf("%d",&idx); 

<<<<<<< HEAD
    for(int i=idx;i<n-1;i++)
=======
    for(int i=idx;i<n-1;i++)  
>>>>>>> 3bc89ff (Added new operation)
    {
        arr[i] = arr[i+1];
    }

    printf("Now Updated Array: ");

    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");





    return 0;
}
