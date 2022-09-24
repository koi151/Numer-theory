// Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

// Input Format

// Số nguyên dương N

// Constraints

// 2≤N≤10^16

// Output Format

// Phân tích thừa số nguyên tố của N, xem ví dụ để rõ hơn format.

// Sample Input 0

// 60
// Sample Output 0

// 2^2 * 3^1 * 5^1

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

void prime_Fact ( long long n){
    int pow;
    long long  ft = 2;
    while (ft*ft  <= n){
        pow = 0;
        while ( n % ft == 0){
            n /= ft; 
            pow ++;
        }

        if ( pow != 0){
                cout << ft << "^" << pow; 
            if (n != 1)
                 cout << " * ";
        }

        ft ++;
    }
    if ( n > 1)
        cout << n << "^1";
}

//===================================
int main ()
{
    FAST_IO;
    long long n;
    cin >> n;
    prime_Fact(n);
    return (0-0);
}