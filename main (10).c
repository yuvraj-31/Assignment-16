#include <stdio.h>
int first_occur(int b[],int n);
int main()
{
    int row,col,sum=0,Row_no;
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
    {    int count=0;
        for(int j=0;j<col;j++)
          {  
              if(a[i][j]==1)
                count++;
          }
          if(sum<count)
            { sum=count;
             Row_no=i+1;
            }
          
    }
   printf("The row with maximum number of 1s is %d",Row_no);
    
    
    return 0;
}
    
