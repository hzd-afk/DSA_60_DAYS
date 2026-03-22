#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxi = a[0];

    for(int i=1;i<n;i++){
        maxi = max(maxi,a[i]);
    }
    printf("%d",maxi);
}