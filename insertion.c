#include<stdio.h>
int main()
{

    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);

    int arr[n+1];
    for(int i =0;i<n;i++)
    {
        printf("Enter %d index Element: ",i+1);
        scanf("%d",&arr[i]);
    }

    int idx,val;
    printf("Enter which index: ");
    scanf("%d",&idx);

    printf("Enter New Value: ");
    scanf("%d",&val);

    for(int i=n; i>=idx+1; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[idx] = val;

    printf("Now Updated Array: ");

    for(int i =0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");


    return 0;
}