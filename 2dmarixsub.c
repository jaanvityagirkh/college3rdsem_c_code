#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[20][20],m,n,i,j;
    printf("Enter the number of rows and cols :");
    scanf("%d %d",&n,&m);

    printf("Enter the elements of first array:\n");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second array:\n");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    

   

    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("The matrix subtraction of two arrays is :\n");

    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}