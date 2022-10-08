#include <iostream>

using namespace std;

int main(){
    int a = 69;
    int b = 96;

    int c = a;
    a = b;
    b = c;
    cout << "sesudah ditukar a menjadi  " << a << " dan b ditukar menjadi " << b << endl;

return 0;
}
