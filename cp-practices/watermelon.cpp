//shamel//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int main() {

    int a;
    cin >> a;
    bool cond= (a%2==0);
    string b="";
    if(cond)
		b="YES";
	else
		b="NO";
		
	if(a==2)
		b="NO";
		
	cout << b << endl;
		
    return 0;
}
