#include<stdio.h>
int main(){
    int a[10][10],transpose[10][10],m,n,i,j;
    printf("Enter the number of rows and cols :");
    scanf("%d %d",&n,&m);

    printf("Enter the elements of array:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            transpose[j][i]=a[i][j];
        }
    }

    printf("The transpose of matrix is:\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}