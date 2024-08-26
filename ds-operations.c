// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

    
    void printarr(int arr[],int n){
    printf("{");
    for(int j =0;j<n;j++){
        if(j==n-1){
            printf("%d",arr[j]);
            break;
        }
        printf("%d ",arr[j]);
        
    }
    printf("}\n");
    }
    
      int find_element(int arr[],int n ,int number){ //find an element in the array
        for(int k =0; k<n;k++){
        if(number==arr[k]){
            return k;
        }
    }
    }
    int delete_element(int arr[],int n,int number){
        for(int p=0;p<n;p++){
            if(arr[p]==number){
                for(int q=p; q<n; q++){
                    arr[q]=arr[q+1];
                }
            }
            
        }
        return n-1;
    }
    
    int insert_element(int arr[], int n, int number, int pos) {
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the new element
    arr[pos - 1] = number;

    return n + 1;  // Return the new size of the array
}

 
    void sort_elements(int arr[],int n){
        for(int l=0;l<n;l++){
            for(int m=l+1;m<n;m++){
                int temp;
                if(arr[m]<arr[l]){
                temp = arr[l];
                arr[l]=arr[m];
                arr[m]=temp;
            }
        }
    }
    }
    //find an element in the array //just wanted to try the return in an function the code can be done in a much simpler manner
    int main() {
          int n;
    //initialising the array
    printf("enter the no of elements in a list/array:");
    scanf("%d",&n);
    int arr[n+1];
    for(int i =0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printarr(arr,n);
    int no;
    printf("enter the number that you need to find the position of :");
    scanf("%d",&no);
    
    int p= find_element(arr,n,no);
    printf("%d\n",p);
    sort_elements(arr,n);
    printf("after the sorted list:\n");
    printarr(arr,n);
    
    int dno;
    printf("enter the number you want to delete:");
    scanf("%d",&dno);
    
    n=delete_element(arr,n,dno);
    printarr(arr,n);
    
    int ino,ipos;
    printf("enter the number you want to insert:");
    scanf("%d",&ino);
    printf("enter the position you want to insert to:");
    scanf("%d",&ipos);
    
    n=insert_element(arr,n,ino,ipos);
    printarr(arr,n);
}
    