#include <stdio.h>
int first_occur(int b[],int n);
int main()
{
    int row,col;
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
    
     int sum=0;
     for(int i=0;i<row;i++)
    {   
        for(int j=0;j<col;j++)
          {  
             if(i+j==2)
              {
                 sum=sum+a[i][j];  
              }
          }      
          
    }
    printf("The sum of right diagonals of a matrix is %d",sum);
    
    return 0;
}
    
