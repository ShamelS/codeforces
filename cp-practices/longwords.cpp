//shamel//

#include <iostream>
#include <string>
#include <string>

using namespace std;


int main() {
int a;
cin >> a;
while (a-->0){
    
    string b;
    cin >> b;

    if(b.length() >10)
        cout << b[0] <<  b.length()-2 << b[b.length()-1]<<endl;
    else 
        cout << b<< endl;
}


}

