#include <stdio.h>
int main()
{
    int n,i,mid,low,high,key,found=0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
 
    int arr[n];
    printf("Enter the %d elements in sorted order : ",n);
 
    for(i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);
    }
 
    low=0;
    high=n-1;
 
    printf("Enter the element to search : ");
    scanf("%d", &key);
 
    while(low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == key)
        {
            printf("The Element %d is found at the position %d", key, mid+1);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (!found)
    {
        printf("Element not found");
        return 0;
    }
}
