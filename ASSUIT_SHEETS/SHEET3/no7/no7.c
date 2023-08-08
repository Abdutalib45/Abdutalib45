#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int*arr =(int*)malloc (n*sizeof(int));
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for (i=0;i<n/2;i++)
    {
        if (arr[n-i-1]!=arr[i])
        {
            break;
        }
        
    }

    if (i==n/2)
    {
        printf("YES");
    }
    else
    printf("NO");



}    