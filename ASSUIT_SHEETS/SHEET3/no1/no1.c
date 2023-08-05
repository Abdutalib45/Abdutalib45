#include<stdio.h>
#include<stdlib.h>
int main ()
{
    long long sum=0;
    int n,i;
    scanf("%d",&n);
    int*arr =(int*)malloc (n*sizeof(int));
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);

    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    if(sum>=0)
    printf("%lld\n",sum);
    else
    printf("%lld\n",-sum);
    return 0;
}