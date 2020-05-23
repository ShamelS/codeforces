#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
        int rr,cc;
    for(int r=0; r< 5; r++)
        for(int c=0; c<5; c++){
            int x;
            cin >> x;
            if (x==1){
                rr=r;
                cc=c;
            }
        }

        int total=abs(rr-2) + abs(cc-2);
        cout << total << endl;

}