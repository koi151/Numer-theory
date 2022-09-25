// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N. Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^8.

// Output Format

// In ra YES nếu N là số Smith, ngược lại in ra NO.

// Sample Input 0

// 22
// Sample Output 0

// YES

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool check_Prime (int n){
    for ( int i = 2; i < n; i ++){
        if (n % i == 0) return false;
    }
    return n > 1;
}

int sum_Digit(int n){
    int sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int check_Con(int n){
    int i = 2, pow = 0, fa = 0; 
    int sum = 0;
    while (i*i <= n){
        pow = 0;
        while (n % i == 0){
            pow ++;
            n /= i;
        }
        if ( pow != 0)
            sum += pow * sum_Digit(i);

        i++;
    } 
    if (n > 1) 
        sum += sum_Digit(n);
    return sum;
}

//=====================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    cout << (!check_Prime(n) && (check_Con(n) == sum_Digit(n)) ? "YES" : "NO" );
    return (0-0);
}