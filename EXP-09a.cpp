//Krishna Chhabaria
//24070123149
//B3
#include <iostream>
using namespace std;
int main()
{
    int a =10;
    int*aptr;
    aptr=&a;
    cout<< a <<endl;
    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    cout<<&a<<endl;
    return 0;
}

/*output:
10
10
0x61ff08
0x61ff08
*/