// In ra số lượng chữ số 0 liên tiếp tính từ cuối của N! Ví dụ bạn có N = 10, 10!= 3628800. Như vậy, 10! có 2 chữ số 0 liên tiếp tính từ cuối.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra số lượng chữ số 0 liên tiếp tính từ cuối của N!. Kết quả lấy dư với 1000000007.

// Sample Input 0

// 10
// Sample Output 0

// 2

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

int main(){
    long long n, ans = 0;
    cin >> n;
    while (n){
        ans += n % 5;
        n /= 5;
        ans %= 1000000007;
    }
    cout << ans;
    return (0-0);
}





