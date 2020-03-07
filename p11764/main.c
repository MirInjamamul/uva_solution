#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int cs = 0;
    scanf("%d",&n);

    while(n--){
        int total_wall;
        int high = 0;
        int low = 0;
        scanf("%d",&total_wall);
        int height;
        int prev = 0;
        while(total_wall--){
            scanf("%d",&height);

            if(height>prev){
                high++;
            }
            else if(height<prev)
                low++;


            prev=height;
        }

        printf("Case %d: %d %d\n",++cs,--high,low);
    }
    return 0;
}
