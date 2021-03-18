#include <stdio.h>
int main()
{
    int w,h,i,j,g=0;

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
    printf("%d\n",g);
}
