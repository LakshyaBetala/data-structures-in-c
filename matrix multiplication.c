#include<stdio.h>
#include<stdlib.h>


int main(){
    int arows, acol;
    printf("enter the row and col of matrix a:");
    scanf("%d %d",&arows,&acol);
    int a[arows][acol];
    
    int brows, bcol;
    printf("enter the row and col of matrix b:");
    scanf("%d %d",&brows,&bcol);
    int b[brows][bcol];
    
    for(int i=0;i<arows;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<brows;i++){
        for(int j=0;j<bcol;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    int product[arows][bcol];
    int sum=0;
    if(acol!=brows){
        return -1;
    }
    else{
     for(int i=0;i<arows;i++){
        for(int j=0;j<bcol;j++){
            for(int k=0;k<brows;k++){
                sum+=a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
     }
    }
    for(int i =0;i<arows;i++){
        for(int j=0;j<bcol;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    
}
    