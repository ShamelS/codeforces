#include <iostream>
#include <string>

using namespace std;


int main() {
    int n;
    cin >> n;int sum=0;
    while ( n--> 0){
        string stri;
        cin >> stri;
        if(stri[0] == '+')
            sum++;
        else if(stri[0]=='-')
            sum--;
        else if (stri[stri.length()-1]=='+')
            sum++;
        else
        {
            sum--;
        }
        

    }
    cout << sum << endl;
}