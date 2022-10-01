// Đếm số lượng các số chính phương trong đoạn từ a tới b

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^18

// Output Format

// Số lượng số chính phương trong đoạn [a, b]

// Sample Input 0

// 1 50
// Sample Output 0

// 7
// Sample Input 1

// 101 101
// Sample Output 1

// 0

#include <iostream>
#include <cmath>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//========================================
int main (){
    FAST_IO;
    long long a,b;
    cin >> a >> b;
    a = ceil(sqrt(a));
    b = sqrt(b);
    int cnt = 0;
    for ( int i = a; i <= b; i ++){
        cnt ++;
    }
    cout << cnt;

    return 0;
}