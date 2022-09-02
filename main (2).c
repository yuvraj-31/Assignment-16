#include <stdio.h>
int first_occur(int b[],int n);
int main()
{
   
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("Enter the elements of matrix 1:\n");
     for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
          {
            scanf("%d",&a[i][j]);
          }
            
        }
       printf("Enter the elements of matrix 2:\n");
     for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
          {
            scanf("%d",&b[i][j]);
          }
            
    }
    printf("The multiplication of these two matrices is:\n");
    
     for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
          {  int sum=0;
              for(int k=0;k<3;k++)
                 {
                   sum=sum+a[i][k]*b[k][j];
                 }
                 
              c[i][j]=sum;      
          }      
          
    }
    for(int i=0;i<3;i++)
    {   
        for(int j=0;j<3;j++)
          {
            printf(" %d",c[i][j]);
          }
          printf("\n");
            
    }
    
    return 0;
}
    
