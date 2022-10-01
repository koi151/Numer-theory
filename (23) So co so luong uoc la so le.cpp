// Kiểm tra xem một số có số lượng ước số của nó là số lẻ

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra YES nếu N là số có số ước là số lẻ, ngược lại in NO.

// Sample Input 0

// 100
// Sample Output 0

// YES
// Explanation 0

// Số 100 có các ước 1, 2, 4, 5, 10, 20, 25, 50, 100. Vậy 100 có 9 ước là số lẻ, nên đáp án là YES.

#include <iostream>
#include <cmath>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//================================
int main (){
    FAST_IO;
    long long n;
    cin >> n;
    long long temp = sqrt(n);
    cout << (temp*temp == n ? "YES":"NO");
    return 0;
}
// Số thỏa đề chính là số chính phương