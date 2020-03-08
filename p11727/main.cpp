#include <iostream>

using namespace std;

int main()
{
    int test_case;
    int cs=0;
    int a, b,c ;
    cin>>test_case;

    while(test_case--){
        cin>>a>>b>>c;

        if((a>b&&a<c)||(a<b&&a>c)){
            cout<<"Case "<<++cs<<": "<<a<<endl;
        }else if((b>a&&b<c)||(b<a&&b>c)){
            cout<<"Case "<<++cs<<": "<<b<<endl;
        }else{
            cout<<"Case "<<++cs<<": "<<c<<endl;
        }

    }

    return 0;
}
