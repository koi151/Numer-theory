#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

bool checkPrime( int n){
    for ( int i = 2; i*i < n; i ++){
        if (n % i == 0) return false;
    }
    return n > 1;
}

//==============================
int main (){
    FAST_IO;
    int t,n;
    cin >> t;   
    while (t --){
        cin >> n;
        cout << (checkPrime(n) ? "YES\n" : "NO\n"); 
    }
    return (0-0);
}