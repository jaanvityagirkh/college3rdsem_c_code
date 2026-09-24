#include<stdio.h>
int main(){
    int arr[100],n,i,key,found=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search:");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at idx %d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("element not found");
    }
    return 0;

}