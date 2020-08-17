//Program: Binary Search
//Language: C
//This algorithm only works on sorted array

#include<stdio.h>
void main()
{
    int start=0,end,mid,s,i,n,c=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter the sorted array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter the search element\n");
    scanf("%d",&s);

    end=n-1;
    while (start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==s)
            {
                printf("Element found at %d position \n",mid+1);
                c++;
                break;
            }
        else if(a[mid]<s)
            start=mid+1;
        else
            end=mid-1;
    }

    if(c==0)
        printf("Element not found\n");   

}