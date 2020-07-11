#include<stdio.h>

int binar_search(int arr[],int n, int x){
    int left,right,mid;
    left=0;
    right=n-1;

    while(left<=right){
        mid=(left+right)/2;

        if(arr[mid]==x){
            return 1;
        }

        if(arr[mid]<x){
            left=mid+1;
        }else{
            right=mid-1;
        }


    }

    return 0;


}

int main(){
    int arr[6];
    int i,x;
    printf("Enter the number \n");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the desire number : ");
    scanf("%d",&x);

    int n=sizeof(arr)/sizeof(arr[0]);
    //int x=15;

    int search=binar_search(arr,n,x);

    if(search==1){
        printf("Number %d found",x);
    }else{
        printf("Number %d not found",x);
    }

}
