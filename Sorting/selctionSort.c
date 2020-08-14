#include<stdio.h>
void main()
{
    int size,i,j,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];

    //Input array elements
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

    //Display orginal array
    printf("Orginal Array:\n");
    for(i=0;i<size;i++)
        printf("%d \t",a[i]);
    printf("\n");
    //Implementing selection sort
    for (i=0;i<size;i++)
        for(j=i+1;j<size;j++)
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    
    //Display sorted array
    printf("SORTED ARRAY\n");
    for(i=0;i<size;i++)
        printf("%d \t",a[i]);
    printf("\n");
            
    
}