// Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước

// Input Format

// 2 số a, b

// Constraints

// 1≤a≤b≤10^7

// Output Format

// In ra các số đẹp trong đoạn a, b. Trong trường hợp không tồn tại số đẹp nào thì in ra -1.

// Sample Input 0

// 1 1000
// Sample Output 0

// 66 222 252 282 414 434 444 474 494 525 555 585 595 606 616 636 646 666 696 777 828 858 868 888 969

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

bool check (int n){
    int i = 2, pow = 0, div = 0;
    while (i*i <= n){
        pow = 0;
        while (n % i == 0){
            pow ++;
            n /= i;
        }
        if (pow != 0) div++;
        i++;
    }
    if (n > 1) div ++;
    return div >= 3;
}



//=================================================
int main (){
    FAST_IO;
    int a,b, flag = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if(Palindrome(i) && check(i)){
            cout << i << ' ';
            flag = 1;
        }
    }
    if (!flag)
        cout << -1;
    return (0-0);
}