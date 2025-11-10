#include <stdio.h>
int main()
{
    int n,key,i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
 
    int arr[n];
    printf("Enter the elements of the array : ");
 
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("Enter the element to search : ");
    scanf("%d", &key);
 
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d \n", i+1);
            return 0;
        }
    }
    printf("Element not found");
}
