#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_case;
    int cs=0;
    float c, d ;
    scanf("%d",&test_case);

    while(test_case--){
        scanf("%f %f",&c,&d);

        d = (5*d)/9;

        c = c + d;

        printf("Case %d: %.2f\n",++cs,c);
    }
    return 0;
}
