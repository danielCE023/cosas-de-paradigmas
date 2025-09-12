#include <stdio.h>

int main()
{
        int a[10];
        int i;
        char *cp;
        int *ip;
        double *dp;

        cp=(char *)a;
        ip=(int *)a;
        dp=(double *)a;

        for(i=0;i<10;i++)
                a[i]=0x11ffffff;

        for(i=0;i<10;i++,cp++)
                printf("%d %x %d\n",i,cp,*cp);

        for(i=0;i<10;i++,ip++)
                printf("%d %x %d\n",i,ip,*ip);

        for(i=0;i<10;i++,dp++)
                printf("%d %x %f\n",i,dp,*dp);
}
