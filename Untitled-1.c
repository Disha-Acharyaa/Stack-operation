#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],i,j,m,n;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of an array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements of array are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }   
    printf("The transpose of the matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
    }
}