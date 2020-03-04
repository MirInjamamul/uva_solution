#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_set_length;
    scanf("%d",&number_set_length);

    float l,w,h;
    int cs=0;

    while (number_set_length--)
    {
        cs++;
        scanf("%f %f %f",&l,&w,&h);

       if(l>20 && w>20){
            printf("Case %d: bad\n",cs);
       }else{
            if(h>20){
            printf("Case %d: bad\n",cs);
       }else{
            printf("Case %d: good\n",cs);
       }

       }

    }
  return 0;
}
