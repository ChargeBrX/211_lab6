#include <stdio.h>
int main()
{
    int w,h,i,j,g=0,ans;

    scanf("%d %d",&w,&h);

    int a[w][h];

    for(i=0;i<w;i++)
    {
        for(j=0;j<h;j++)
        {
            scanf("%d",&a[i][j]);
            g += a[i][j];
        }
    }
    for(i=g;;i++)
    {
        if(i%(w*h)==0)
        {
            ans = i;
            break;
        }
    }
    printf("%d",ans-g);
}
