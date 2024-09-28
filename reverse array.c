#include<stdio.h>
int main()
{
    int N=5,arr[N],i,n;
    printf("enter the size of array: ");
    scanf("%d ",&n);
    printf("enter the elements: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of array: ");
    for(i=N-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
