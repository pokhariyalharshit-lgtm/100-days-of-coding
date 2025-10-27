// Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i,posv=0,negv=0,zero=0;

    printf("Enter the limit of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        if(arr[i]>0){
            posv++;
        }else if(arr[i]<0){
            negv++;
        }else{
            zero++;
        }
    }
    printf("Positive count= %d\tNegative count= %d\tZero count= %d",posv,negv,zero);

    return 0;
}
