#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the size of the array:\n");
    scanf("%d ",&n);
    int arr[n];
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=n-1;
    j=n-2;
    while(i>0) {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i--;
        j--;
    }
    printf("modified array:\n");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}

