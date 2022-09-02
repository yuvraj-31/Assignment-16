#include <stdio.h>
int first_occur(int b[],int n);
int main()
{
    int row,col,counter1=0,counter2=0;
    printf("Enter the no of rows for a square matrix\n");
    scanf("%d",&row);
    printf("Enter the no of columns for a square matrix\n");
    scanf("%d",&col);
    int a[row][col];
    
    
   
    printf("Enter the elements of matrix :\n");
     for(int i=0;i<row;i++)
    {   
        for(int j=0;j<col;j++)
          {
            scanf("%d",&a[i][j]);
          }
            
        }

     for(int i=0;i<row;i++)
    {    
        for(int j=0;j<col;j++)
          {  
              if(a[i][j]==0)
               counter1++;
              else
                counter2++;
       
          }
          
    }
    counter1>counter2?printf("Given matrix is a sparse matrix"):printf("given matrix is not a sparse matrix");
    
    
    return 0;
}
    
