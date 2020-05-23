#include <iostream>
#include <string>

using namespace std;


int main() {

    int a,b,c,n;
    cin >> n;
    int sum=0;
    while (n --> 0){
        cin >>a >>b >>c;
        if(a+b+c >=2)
        sum++;
    }
    cout << sum << endl;


}