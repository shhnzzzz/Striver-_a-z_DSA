#include<stdio.h>

void printarray(int *A,int n){
    for(int i=0;i<n;i++)
    {
        printf(" %d",A[i]);
    }
    printf("\n");
}
void insertionsort(int *A,int n){
    int key,j;
     for(int i=0;i<=n-1;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
     }
}
int main(){
    int A[]={12,5,28,10,23,7};

    int n=6;
    printarray(A,n);
    insertionsort(A,n);
    printarray(A,n);
    return 0;

}
