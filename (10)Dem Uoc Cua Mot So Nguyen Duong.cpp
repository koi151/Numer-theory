// Cho phân tích thừa số nguyên tố của một số nguyên dương N, hãy đếm số lượng ước số của số nguyên dương đó. Ví dụ N = 60 = 2^2 * 3^1 * 5^1.

// Input Format

// Dòng đầu tiên là T : số lượng thừa số nguyên tố khác nhau của N T dòng tiếp theo, mỗi dòng là 2 số nguyên p và e lần lượt là thừa số nguyên tố và số mũ tương ứng

// Constraints

// 1≤T≤100; 2≤p≤100000; 1≤e≤100000;

// Output Format

// In ra số lượng ước số của N, vì kết quả quá lớn, hãy lấy dư với số 1000000007 (1e9 + 7)

// Sample Input 0

// 3
// 2 2
// 3 1
// 5 1
// Sample Output 0

// 12

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

int main (){
    FAST_IO;
    int n;
    cin >> n; 
    int x;
    long long res = 1;
    while (n--){
        cin >> x >> x;
        res *= x+1;
        res %= 1000000007;
    }
    cout << res;
    return (0-0);
}