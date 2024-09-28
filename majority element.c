#include<stdio.h>
int majorityelement(int num[],int size){
    int majority=num[0],votes=1;
    for(int i=1;i<size;i++){
        if (votes == 0){
            majority=num[i];
            votes = 1;
        }
        else if(majority==num[i]){
            votes++;
        }
        else{
            votes--;
        }
    }
    return majority;
}
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=majorityelement(arr,n);
    printf("the majority element is: %d\n",result);
    return 0;
}
