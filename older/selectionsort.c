#include<Stdio.h>
void printarray(int *A,int n){
    for(int i=0;i<n;i++)
    {
        printf(" %d",A[i]);
    }
    printf("\n");
}
void selectionSort(int *A,int n){
    int indexOfMin,temp;
    printf("Running Selection Sort......\n");
    //selection sort mai n-1 passes lagte hai.
    for (int i = 0; i <n-1; i++)
    {
        indexOfMin=i;
        for(int j=i+1;j<n;j++){
            if (A[j] < A[indexOfMin])
            {
               indexOfMin=j;
            }
            
        }
        //Swap A[i] and A[indexOfMin]
        temp=A[i];
        A[i]=A[indexOfMin];
        A[indexOfMin]=temp;
    }
    

}
int main(){
    //00 01 02 03 04
    //02 05 03 13 01 

    //After first pass
    //00 01 02 03 04
    //01 05 03 13 02

    int A[]={2,5,3,13,1};
    int n=5;
    printarray(A,n);
    selectionSort(A,n);
    printarray(A,n);
}