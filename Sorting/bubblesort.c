#include<stdio.h>
void main()
{
    int size,i,j,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];

    //input the array elements
    printf("Enetr the array elements\n");
    for (i = 0; i < size; i++)
        scanf("%d",&a[i]);
    
    //prints the orginal array
    printf("Orginal Array: \t");
    for(i=0;i<size;i++)
        printf("%d \t",a[i]);
    printf("\n");

    //Sort the array using bubblesort algorithm
    for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

    //prints the sorted array
    printf("Sorted Array: \t");
    for(i=0;i<size;i++)
        printf("%d \t",a[i]);
    printf("\n");
            
}