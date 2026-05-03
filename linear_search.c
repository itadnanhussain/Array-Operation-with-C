#include<stdio.h>
int main()
{

    int n,key,found = 0;

    printf("Enter Array Size: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d index element: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found = 1;
            break;
        }
    }

    if(found==0)
    {
        printf("Value %d not found in the array\n",key);
    }
    else
    {
        printf("Value %d found in the array\n",key);
    }





    return 0;
}