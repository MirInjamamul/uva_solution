#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_case,i;
    scanf("%d",&test_case);
    int case_no = 0;

    while(test_case--){
        char str[10][90];
        int priority[10];
        int max=-1;

        for(i=0;i<10;i++){
            scanf("%s%d",&str[i],&priority[i]);
            if(max<priority[i]){
                max = priority[i];
            }
        }
        printf("Case #%d:\n",++case_no);
        for(i=0;i<10;i++){
            if(priority[i]==max){
                printf("%s\n",str[i]);
            }
        }

    }
    return 0;
}
