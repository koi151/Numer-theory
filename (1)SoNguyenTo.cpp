// Kiểm tra một số nguyên không âm N có phải là số nguyên tố hay không?

// Input Format

// Dòng duy nhất chứa số nguyên dương N

// Constraints

// 0≤N≤10^9

// Output Format

// In ra YES nếu n là số nguyên tố, ngược lại in NO.

// Sample Input 0

// 999999999
// Sample Output 0

// NO
// Sample Input 1

// 17
// Sample Output 1

// YES

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

bool checkPrime( long long n){
    for ( long long i = 2; i*i < n; i ++){
        if (n % i == 0) return 0;
    }
    return n>1;
}

//=============================================
int main (){
    FAST_IO;
    long long n;
    cin >> n;
    cout << (checkPrime(n) ? "YES":"NO");
    return 0;
}