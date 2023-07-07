#include <stdio.h>

void sorting(int arr[], int n){
    int i, j, k;
    for (i = 0; i<n; i++){
        int l = 0;
        for (j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= k;
                l++;
            }
            
        }
        printf("%d", l);
    }
}

int main(){
    int array[] = { 97, 16, 43, 63, 13, 22, 7, 58, 72};

    int n = 9;

    sorting(array, n);
}