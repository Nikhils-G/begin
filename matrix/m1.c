#include<stdio.h>
void matrixformation(int matrix[3][3],int matrixrow,int matrixcol)
{
    int row=matrixrow;
    int col=matrixcol;
    int row_m[row],col_m[col];
    for(int i=0;i<row;i++)
    {
        row_m[i]=1;
    }
    for(int j=0;j<col;j++)
    {
        col_m[j]=1;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==0)
            {
                row_m[i]=0;
                col_m[j]=0;
            }
        }
    }
    
    for(int i=0;i<row;i++)
    {
        if(row_m[i]==0)
        {
            for(int j=0;j<col;j++)
            {
                matrix[i][j]=0;
            }
        }
    }
    for(int j=0;j<col;j++)
    {
        if(col_m[j]==0)
        {
            for(int i=0;i<row;i++)
            {
                matrix[i][j]=0;
            }
        }
    }
}
void print(int matrix[3][3],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
    
}
int main()
{
    int matrix[3][3]={{1,1,1},{1,0,1},{1,1,1}
    };
    int matrixrow=3;
    int matrixcol=3;
    matrixformation(matrix,matrixrow,matrixcol);
    print(matrix,matrixrow,matrixcol);
    
}
