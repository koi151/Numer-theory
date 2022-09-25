// Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2.

// Input Format

// Cặp số N, p được viết cách nhau một khoảng trống.

// Constraints

// 1≤N≤10^14; 2≤p≤5000

// Output Format

// Đưa ra kết quả trên một dòng

// Sample Input 0

// 7 3
// Sample Output 0

// 2

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=====================================
int main ()
{   
    FAST_IO;
    long long n, ans = 0;
    int p;
    cin >> n >> p;
    while (n){
        ans += n/p; 
        n /= p;
    } 
    cout << ans;
    return (0-0);
}