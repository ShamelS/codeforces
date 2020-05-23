#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdlib.h>  
using namespace std;



int main() {
    string str;
    cin >> str; 
    string nstr;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(char a: str){
        if(a == 'a' || a=='e' || a=='i' || a== 'o' || a== 'u' || a=='y' )
            nstr.append("");
        else{
            nstr.append(".");
            nstr.push_back(a);
        }
    }

    cout << nstr;
}