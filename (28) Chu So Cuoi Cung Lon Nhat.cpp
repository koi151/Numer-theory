// Viết chương trình C cho phép nhập vào n và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng n và có chữ số cuối cùng lớn nhất. Có bao nhiêu số như vậy?

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^7

// Output Format

// Dòng đầu tiên liệt kê các số thỏa mãn, và dòng thứ 2 in ra số lượng số thỏa mãn.

// Sample Input 0

// 200
// Sample Output 0

// 2 3 5 7 11 13 17 19 23 29 37 47 59 67 79 89 101 103 107 109 113 127 137 139 149 157 167 179 199
// 29

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool seive(bool prime[], int maxn){
    for (int i = 2; i <= maxn; i ++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for ( int i = 2; i*i <= maxn; i ++){
        if (prime[i])
            for ( int j = i*i; j <= maxn; j += i)
                prime[j] = false;
    }
}

bool check (int n){
    int last = n%10, temp;
    n /= 10;
    while (n){
        temp = n % 10;
        if (temp > last) return false;
        n /= 10;
    }
    return true;
}

//========================================================
int main (){
    FAST_IO;
    int n, cnt = 0;
    cin >> n;
    bool prime[n];
    seive(prime, n);
    for ( int i = 2; i <= n; i ++){
        if (prime[i] && check(i)){
            cout << i << ' ';
            ++ cnt;
        }
    }
    cout << '\n' << cnt;
    return 0;
}