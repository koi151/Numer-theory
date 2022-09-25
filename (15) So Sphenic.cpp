// Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau. Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5. Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?

// Input Format

// Một số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// Đưa ra 1 hoặc 0 tương ứng với N là số Sphenic hoặc không.

// Sample Input 0

// 999923001838986077
// Sample Output 0

// 1
// Sample Input 1

// 30
// Sample Output 1

// 1

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool check_Spenic(int n){
    int i = 2, pow, fa = 0;
    while (i*i <= n){
        pow = 0;
        while (n % i == 0){
            n /= i;
            pow ++;
        }
        if (pow != 0)
            fa ++;
        if (pow > 1 || fa > 3)
            return false;
        i++;
    }
    if (n > 1) fa ++;
    return fa == 3;
}

//==================================
int main ()
{
    FAST_IO;
    long long n;
    cin >> n; 
    cout << check_Spenic(n);
    return (0-0);
}





