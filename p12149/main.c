#include <stdio.h>
#include <stdlib.h>

int recursive(int number){

    if(number == 0){
        return 0;
    }else{
        return number * number + recursive(number - 1);
    }
}

int main()
{
    int n;

    do{
        int squares = 0;
        int i ;
        scanf("%d",&n);

        if(n==0)
            break;

        /*for(i=1;i<=n;i++){
            squares = squares + (i*i);
        }*/

        squares = squares + recursive(n);

        printf("%d\n",squares);

    }while(1);
    return 0;
}
