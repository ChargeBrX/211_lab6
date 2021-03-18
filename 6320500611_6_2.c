#include <stdio.h>
int main()
{
    int n,i,j,c=0,w=0;

    scanf("%d",&n);

    char num[n],ber[n];

    scanf("%s",num);
    scanf("%s",ber);

    for(i=0;i<n;i++)
    {
        if(num[i]==ber[i])
        {
            c++;
        }
        else
        {
            w++;
        }
    }

    printf("%d %d",c,w);
}
