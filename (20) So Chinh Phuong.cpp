// Kiểm tra một số nguyên có phải là số chính phương hay không? Định nghĩa số chính phương: https://vi.wikipedia.org/wiki/S%E1%BB%91_ch%C3%ADnh_ph%C6%B0%C6%A1ng

// Input Format

// Một số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra YES nếu N là số chính phương, ngược lại in NO

// Sample Input 0

// 169
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool SquareNum(int n){
    long long re = sqrt(n);
    return re*re == n; 
}


//======================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    cout << (SquareNum(n)?"YES":"NO");
    return (0-0);
}