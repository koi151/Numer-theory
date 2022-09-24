// Cho số nguyên không âm N, liệt kê các số nguyên tố không vượt quá N.

// Input Format

// Số nguyên N

// Constraints

// 0≤n≤10^7

// Output Format

// In ra các số nguyên tố không vượt quá N trên 1 dòng, các số cách nhau một khoảng trắng.

// Sample Input 0

// 13
// Sample Output 0

// 2 3 5 7 11 13 

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

void sieve(bool a[], int n){
    for ( int i = 0; i <= n; i ++)
        a[i] = true;
    a[0] = a[1] = false;
    
    for(int i = 2; i*i <= n; i++){
        if (a[i]){
            for ( int j = i*i; j <= n; j +=i)
                a[j] = false;
        }
    }
}

//===============================
int main (){
    FAST_IO;
    int n;
    cin >> n;
    bool *a = new bool[n];
    sieve(a,n);
    for ( int i = 1 ; i <= n; i ++){
        if (a[i])
            cout << i << " ";
    }
    return (0-0);
}