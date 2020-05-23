#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdlib.h>  
using namespace std;

int main() {    
    int n;
    cin >> n;
    int suma=0,sumb=0,sumc=0;
    while(n-->0){
        int a,b,c;
        cin >> a >> b >>c;
        suma+=a;
        sumb +=b;
        sumc+=c;
    }

    cout << ((suma==0 && sumb==0 && sumc==0)?"YES":"NO") << endl;

}

/*3
0 2 -2
1 -1 3
-3 0 0*/