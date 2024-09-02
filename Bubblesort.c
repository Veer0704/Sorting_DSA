#include <stdio.h>
/// @brief 
/// @return 
int main(){
    int a[],i;
    printf("Enter the array size");
    scanf(%d,&n);
    printf("Enter the values in array");
    for(i=0;i<n;i++){
        scanf(%d,&a[i]);
    }

    for(i=0;i>0;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Result: \n");
    for(i=0;i<n;i++){
        printf(%d,a[i]);
    }    


}