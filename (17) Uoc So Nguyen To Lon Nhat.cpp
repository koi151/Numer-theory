// Tìm ước số nguyên tố lớn nhất của một số nguyên dương.

// Input Format

// Dòng đầu tiên là số lượng test case T; T dòng tiếp theo mỗi dòng là một số nguyên dương N

// Constraints

// 1≤T≤500; 2≤N≤10000000

// Output Format

// Ước số nguyên tố lớn nhất của n in ra mỗi test case trên 1 dòng

// Sample Input 0

// 2
// 10
// 17
// Sample Output 0

// 5
// 7

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

int GPD(int n){
    int i = 2;
    while (i*i <= n){
        while (n % i == 0)
            n /= i;
        i++;
    }
    return max(n, i-1);
}

//=========================================
int main (){
    FAST_IO;
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        cout << GPD(n) << '\n';
    }
    return (0-0);
}