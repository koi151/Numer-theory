// Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N. Ước số nguyên tố nhỏ nhất của 1 là 1. Ước số nguyên tố nhỏ nhất của các số chẵn là 2. Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

// Input Format

// Một số N được ghi trên một dòng.

// Constraints

// 1≤N≤100000

// Output Format

// Đưa ra kết quả theo từng dòng

// Sample Input 0

// 6
// Sample Output 0

// 1
// 2
// 3
// 2
// 5
// 2

#include <iostream>
#include <cmath>

#define FAST_IO ios:sync_with_stdio(0); cin.tie(0)

using namespace std;

void sieve(int a[] ,int n){
    for ( int i = 1; i <= n; i ++)
        a[i] = i;

    for ( int i = sqrt(n); i >= 2; i --){
        for ( int j = i*i; j <= n; j += i)
            a[j] = i;
    }
}

//===================================
int main (){
    int n;
    cin >> n;
    int a[n];
    sieve(a,n);
    for ( int i = 1; i < n; i ++)
        cout << a[i] << '\n';
    
    return (0-0);
}