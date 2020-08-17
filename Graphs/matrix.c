// C program to implement graph as an adjacency matrix
// The adjacency matrix is a 2 D array of order VxV where V is no: of vertices
//If a[i][j]=1 then an edge exist b/w i and j

#include<stdio.h>
#define v 5

//function to initialize matrix with 0
void init(int a[][v])
{
    int i,j;
    for (i = 0; i<v;i++)
        for(j=0;j<v;j++)
            a[i][j]=0;    
}

//function to add edges to the matrix
// if there is an edge between i and j we  assign a[i][j]=1
void addEdge(int a[][v],int src,int dest)
{
    a[src][dest]=1;
}

//display the matrix
void display(int a[][v])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
}

void main()
{
    int adjMatrix[v][v];

    init(adjMatrix);
    addEdge(adjMatrix,0,1);
    addEdge(adjMatrix,0,2);
    addEdge(adjMatrix,0,3);
    addEdge(adjMatrix,1,1);
    addEdge(adjMatrix,1,4);
    addEdge(adjMatrix,2,3);
    addEdge(adjMatrix,3,4);

    display(adjMatrix);

}