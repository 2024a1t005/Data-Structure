//Sort the element of an array in ascending order using bubblle sort.
#include<stdio.h>
int main(){
    int n;
    printf("Enter Size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Bubble Sort
    for(int i=0;i<n-1;i++){//This loop count phases
        for(int j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }  
        }
    }
    printf("After Sorting Array Elements Are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
