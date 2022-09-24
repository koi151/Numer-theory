// Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

// Input Format

// Một dòng hai số nguyên dương tương ứng, cách nhau một khoảng trống.

// Constraints

// Các số đều không vượt quá 9 chữ số.

// Output Format

// Viết ra số lượng các số thuần nguyên tố tương ứng

// Sample Input 0

// 2345 6789
// Sample Output 0

// 15

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool checkPrime (int n){
    for ( int i = 2; i*i <= n; i ++){
        if (n % i == 0) return false;
    }
    return n > 1;
}
// 123
bool all_sum_prime(int n){
    int num = 0, temp;
    while (n){
        temp = n % 10;
        num += temp;
        n /= 10;
        if (!checkPrime(temp)) return false;
    }
    return checkPrime(num);
}

//=============================================
int main (){
    FAST_IO;
    int a,b, count = 0;
    cin >> a >> b;
    for ( int i = a; i <= b; i ++){
        if (all_sum_prime(i) && checkPrime(i))
            count ++;
    }   
    cout << count;
    return (0-0);
}