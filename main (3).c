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
    
    printf("The Transpose of the given matrix is:\n");
    
     for(int i=0;i<row;i++)
    {   
        for(int j=i+1;j<col;j++)
          {  
              if(i!=j)
              {
                  int temp = a[i][j];
                   a[i][j] = a[j][i];
                    a[j][i] = temp;
              }
          }      
          
    }
    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
          {
            printf(" %d",a[i][j]);
          }
          printf("\n");
            
    }
    
    return 0;
}
    
