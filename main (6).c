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
    
     
     for(int i=0;i<row;i++)
    {    int sum=0;
        for(int j=0;j<col;j++)
          {  
              {
                 sum=sum+a[i][j];  
              }
          }  
          printf("The sum of %d row is %d\n",i+1,sum);
          
    }
    printf("\n");
     for(int i=0;i<row;i++)
    {    int sum2=0;
        for(int j=0;j<col;j++)
          {  
              {
                 sum2=sum2+a[j][i];  
              }
          }  
          printf("The sum of %d col is %d\n",i+1,sum2);
          
    }
    
    
    return 0;
}
    
