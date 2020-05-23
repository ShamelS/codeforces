#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdlib.h>  
using namespace std;


int main() {

    string str;
    cin >> str;
    int arr[str.length()];
    int k=0; 
    
    for (int i=0; i< str.length(); i+=2){
        const char *c= str.substr(i,1).c_str();;
        arr[k++]=atoi(c);
         }
        

        
       
        
    sort(arr,arr + k);
    
    for(int j=0; j<k;j++)
    {
        if(j==k-1)
        cout << arr[j];
        else
            cout << arr[j] << "+";
        
        
    }

    cout << endl;

}