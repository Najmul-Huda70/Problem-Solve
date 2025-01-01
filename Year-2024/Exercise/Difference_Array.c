#include <stdio.h>
#include <stdlib.h>

// Function to calculate the absolute difference between corresponding elements of two arrays
void fun(int A[], int B[], int C[], int N) {
    for (int i = 0; i < N; i++) {
        C[i] = abs(A[i] - B[i]);
    }
}


void sort_array(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main() {
    int t;
    scanf("%d", &t);
    
   while(t--){
        int N; 
        scanf("%d", &N);
        
        int A[N]; 
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        
        int B[N];
        for (int i = 0; i < N; i++) {
            B[i] = A[i];
        }
        sort_array(B, N);
        
       
        int C[N];
       fun(A, B, C, N);
        
      
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }
    
    return 0;
}
