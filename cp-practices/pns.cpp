#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    string a,b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    cout << a.compare(b) << endl;
    return 0;

}
