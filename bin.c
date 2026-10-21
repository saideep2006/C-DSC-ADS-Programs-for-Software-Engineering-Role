#include<stdio.h>
int main()
{
    //binary search in c programming
    int i,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array in sorted order: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    //reading the elements of the array
    }
    int key;
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at index %d",mid);
            return 0;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("Element not found");
    return 0;
}