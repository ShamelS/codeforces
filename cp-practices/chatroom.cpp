#include <iostream>
#include <string>

using namespace std;


int main() {
    string str;
    char nstr[]={'h','e','l','l','o', '\0'};
    int k=0;
    cin >> str;
    string hello;
    for(char a:str){
        if(hello==nstr)
            break;
        else if(a==nstr[k]){
            hello.push_back(nstr[k]);
            k++;
        }

        

    }
    
    cout << (hello==nstr?"YES":"NO") << endl;
}