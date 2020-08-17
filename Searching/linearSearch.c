//Program : Linear search
//Language : C

#include<stdio.h>
void main()
{
    int i,size,s,c=0;
    printf("Enter the size of the array \n");
    scanf("%d",&size);

    int a[size];
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    printf("Enter the search element\n");
    scanf("%d",&s);

    for(i=0;i<size;i++)
        if(a[i]==s)
        {
            printf("The element is found at %d position \n",i+1);
            c++;
            break;
        }
    
    if(c==0)
        printf("Element not found");
}