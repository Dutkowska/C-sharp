//greatest common divisor - nwd: just cout a;
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin >> a >> b;
        while(a!=b)
        {
            if(a<b) b-=a;
            else a-=b;
        }
        cout << a+b << endl;
    }
    return 0;
}
