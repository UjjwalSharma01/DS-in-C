#include <stdio.h>
int main (){
    // for(int i =1 ; i<size-1;i++) 
    key = a[i];
    j = i-1;
    while(j>0 && a[j]>key){
        A[j+1] = A[j]; // swap
        j--;
    }
    A[j+1] = key;
    return 0;
}