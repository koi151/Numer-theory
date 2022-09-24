// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4, 9, 25, 49.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^12

// Output Format

// Đưa ra kết quả trên một dòng

// Sample Input 0

// 100
// Sample Output 0

// 4 9 25 49

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

// lọc các số nguyên tố
void sieve (bool prime[], int n){
    for ( int i = 2; i < n; i ++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for ( int i = 2; i*i <= n; i ++){
        if (prime[i]){
            for ( int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

//=================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    n = sqrt(n);  // lấy căn của n và tìm số nguyên tố từ 2->n, bình phương SNT trên là kết quả
    bool* prime = new bool[n];
    sieve(prime, n);
    for ( int i = 2; i < n; i++){
        if (prime[i])
            cout << i*i << ' ';
    }
    return (0-0);
}