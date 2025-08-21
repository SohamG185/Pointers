#include <iostream>
using namespace std;
int main() {
    int a =10;
    int *aptr = &a;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    
    return 0;
}


/*
0x7fffa64ba594
0x7fffa64ba598
*/
