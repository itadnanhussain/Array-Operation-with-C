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

    int i=0,j=n-1;

    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++ , j--;
        
    }

    printf("Reverse Array: ");
    
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }




    return 0;
}