// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^12

// Output Format

// Đưa ra kết quả mỗi theo từng dòng.

// Sample Input 0

// 838000000000
// Sample Output 0

// 72397

#include <iostream>
#include <cmath>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

void sieve(bool prime[], int n ){
    for (int i = 2; i <= n; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for (int i = 2; i*i <= n ; i++){
        if (prime[i]){
            for ( int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

//=========================================
int main (){
    FAST_IO;
    long long n;
    cin >> n;
    n = sqrt(n);
    bool* prime = new bool[n+1];
    sieve(prime ,n);
    int sum = 0;
    for (long long i = 2; i <= n; i++)
        sum += prime[i];
    cout << sum;
    return (0-0);
}