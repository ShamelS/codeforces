#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdlib.h>  
using namespace std;



int main() {
    long long m,n,a;
    cin >> m >> n >> a;
    long long tiles=0;long long sumx=0;long long sumy=0;
    while ((sumx < m || sumy < n) && a!=1){
        if(sumx<m)
        sumx+=a;
        if(sumy<n)
        sumy+=a;
    }
    long long sum=(sumx)*(sumy);
    sum/=(a*a);
    tiles+=sum;
    if(a==1)
        tiles=m*n;
    cout << tiles << endl;

}
