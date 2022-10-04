// Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n=28, k=3 ta có kết quả là 7 vì 28=2x2x7.

// Input Format

// 2 số n,k

// Constraints

// 1 ≤n,k≤10^9

// Output Format

// In ra thừa số nguyên tố thứ k của n, nếu n không có thừa số nguyên tố thứ k thì in ra -1.

// Sample Input 0

// 28 3
// Sample Output 0

// 7
// Sample Input 1

// 8 5
// Sample Output 1

// -1

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

int Factorize_Pos(int n, int cnt){
    int ft = 2;
    while (ft *ft <= n){
        while (n % ft == 0){
            n /= ft; 
            cnt --;
            if (!cnt) return ft;
        }
        ft ++;
    }
    if (n > 1) cnt --;
    if (!cnt) return n;
    return -1;
}

//====================================================
int main (){
    FAST_IO;
    int n, cnt;
    cin >> n >> cnt;
    cout << Factorize_Pos(n,cnt);
    return 0;
}