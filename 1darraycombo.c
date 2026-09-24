#include<stdio.h>
int main(){
    int a[100],n,i,pos,value,choice;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\n1. Traversal : "); 
    printf("\n2. Insertion : ");
    printf("\n3. Deletion : ");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    //Traversal:
    if(choice==1){
        printf("Array elements are:\n");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }
    }

    //Insertion:
    else if(choice==2){
        printf("Enter position : ");
        scanf("%d",&pos);

        printf("Enter value : ");
        scanf("%d",&value);

        for(i=0;i>=pos;i--){
            a[i]=a[i-1];
        }
        a[pos-1]=value;
        printf("Array after insertion:\n");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }

    }
    
    // Deletion:
    else if(choice==3){
        printf("Enter position to delete : ");
        scanf("%d",&pos);

        for(i=pos-1;i<n-1;i++){
            a[i]=a[i+1];
        }
        n--;

        printf("Array after deletion:\n");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }

    }

    else{
        printf("Invalid choice : ");
    }

    return 0;

}