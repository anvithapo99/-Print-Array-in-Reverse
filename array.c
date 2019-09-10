#include <stdio.h>
#define max_size 100
int main()
{
    int N,A[max_size],size,i;
    scanf("%d",& size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=size-1;i>=0;i--)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
