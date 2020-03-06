#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    while(n--){
        scanf("%d %d",&i,&j);
        if(i<j){
            printf("<\n");
        }
        else if(i>j){
            printf(">\n");
        }else{
            printf("=\n");
        }
    }
    return 0;
}
