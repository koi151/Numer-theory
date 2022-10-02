// Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó. Cho một số nguyên dương n, kiểm tra xem n có phải là số hoàn hảo hay không.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤9*10^18

// Output Format

// In YES nếu N là số hoàn hảo, ngược lại in NO

// Sample Input 0

// 28
// Sample Output 0

// YES
// Explanation 0

// 28 có các ước thực sự là 1, 2, 4, 7, 14 có tổng bằng 28.

#include <iostream>
#include <cmath>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool PerfectNum(long long n){
    long long sum = 1;
    long long sqrt_n = sqrt(n);
    for ( int i = 2; i < sqrt_n; i ++){
        if (n % i == 0)
            sum += i + (n/i);
    }
    return sum == n;
}


//=====================================
int main (){
    FAST_IO;
    long long n;
    cin >> n;
    cout << (PerfectNum(n)?"YES":"NO");
    return 0;
}