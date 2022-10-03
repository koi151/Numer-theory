// Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. Viết chương trình liệt kê các số đẹp trong đoạn giữa 2 số nguyên cho trước, các số cách nhau một dấu cách.

// Input Format

// 2 số nguyên a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// Liệt kê các số đẹp trong đoạn, các số viết cách nhau một khoảng trống

// Sample Input 0

// 1 400
// Sample Output 0

// 161

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool Palindrome(int n){
    int temp = n, res = 0;
    while (temp){
        res = res*10 + temp%10;
        temp /= 10;
    } 
    return res == n;
}

int sum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool check(int n){
    int flag = 0, temp = n;
    while (n != 0 && !flag){
        if (n % 10 == 6) flag ++;
        n /= 10;
    }
    if (!flag) return false;
    return sum(temp) % 10 == 8;
}

//================================================
int main ()
{   
    FAST_IO;
    int a,b;
    cin >> a >> b;
    for ( int i = a; i <= b; i++){
        if (Palindrome(i) && check(i))
            cout << i << ' ';
    }
    return (0-0);
}
