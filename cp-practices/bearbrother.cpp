#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int k=0;
    while (a<=b){
        k++;
        a*=3;
        b*=2;
    }
    cout << k << endl;
}