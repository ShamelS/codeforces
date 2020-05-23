#include <iostream>
#include <string>

using namespace std;


int main() {
int n;int k;
cin >> n >> k;
int arr[n];
int j=0;
while (n>0){// 2 5 --->     5 5
    int x;
    scanf("%d", &x);
    if (j+1 <= k && x>0)
        arr[j++]=x;
    else if (arr[j-1] == x && x>0)
        arr[j++]=x;

    n--;

    
    

}

cout << j << endl;
}