#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k, a[3][3],b[3][3],c[3][3];

    printf("Enter the rows and columns of a matrix : ");
    scanf("%d %d" , &m, &n);

    printf("Enter the rows and colums of b matrix: ");
    scanf(" %d %d", &p,&q);

    if(n!=p)
    {
        printf(" Matrix Multiplication is not possible");
        return 0;
    }

    printf("Enter the elements of a matrix: \n");
    for (i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }

    }
    printf("Enter the elements of b matrix: \n");
    for (i=0;i<p;i++)
    {   
        for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
        c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        }
    }

    printf("Resultant Matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
return 0;
}