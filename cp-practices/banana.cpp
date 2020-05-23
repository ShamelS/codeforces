#include <iostream>
#include <string>

using namespace std;

int main() {
    int k,n,w;
    cin >> k >> n >>w;
    int summation=0;

    for(int i =1; i<=w; i++){
        summation+= (k*i);
    }

    cout << (summation <n?"0":to_string(summation-n)) << endl;

}
