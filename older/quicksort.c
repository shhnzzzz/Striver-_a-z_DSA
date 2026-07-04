#include<stdio.h>
void printarray(int *A,int n){
    for(int i=0;i<n;i++)
    {
        printf(" %d",A[i]);
    }
    printf("\n");
}
void quickSort(int A[],int low,int high){
    int partitionIndex; //index of pivot after partition
    partitionIndex=partition(A,low,high);
    quickSort(A,low,partitionIndex-1);
    quickSort(A,partitionIndex+1,high);
}
int partition(int A[],int low,int high){
    int temp;
    int pivot=A[low];
    int i=low+1;
    int j=high;
    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}
int main(){
    int A[]={3,5,2,13,12};
    int n=5;
    printarray(A,n);
    quickSort(A,n);
    printarray(A,n);
    return 0;
}