#include<stdio.h>

void printArray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, *(ptr+i)); 
    }
    *(ptr+1) = 5555;
}

// void printArray(int ptr[], int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is %d\n", i+1, ptr[i]); 
//     } 
//     ptr[2] = 5555; // This value will be changes in arr array of main as well becoz when we enter any arr inside function then it takes address
// }

int main(){
    int arr[] = {1,2,3543,34,3,645,23};
    printArray(arr, 7);
    printf("%d", arr[1]);
    return 0;
}