#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdlib.h>  
using namespace std;



int main() {
    int n;string str;
    cin >>n>>str;
    int nn=n;
    int count =0;int k=0;
    while(nn-->0){
        if(k<n-1 && str.at(k)==str.at(k+1))
            count++;
        k++;

    }
    cout << count << endl;
}