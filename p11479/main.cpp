#include <iostream>

using namespace std;

int main()
{
    int test_case;
    long long int a,b,c;
    int cs = 0;
    cin >> test_case;

    while(test_case--){
        cin >> a >> b >> c;
        cout << "Case "<<++cs<<": ";
    if(a+b<=c||b+c<=a||c+a<=b)cout<<"Invalid"<<endl;
        else if(a==b&&b==c)cout<<"Equilateral"<<endl;
        else if(a==b||b==c||c==a)cout<<"Isosceles"<<endl;
        else cout<<"Scalene"<<endl;
    }



    return 0;
}
