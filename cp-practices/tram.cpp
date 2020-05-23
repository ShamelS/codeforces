#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum=0;int high=INT32_MIN;
    n--;
    do{
        int a,b;
        cin >> a>> b;
        sum+=(b-a);
        if(high<sum)
        high=sum;
    }while(n -->0);
    cout << high<< endl;
}