// Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng phải chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// In ra các số đẹp trong đoạn từ a tới b

// Sample Input 0

// 3 49
// Sample Output 0

// 4 8 9 16 25 27 32 36 49

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool check(int n){
    int i = 2, pow = 0;
    while( i*i <= n){
        while(n % i == 0){ // 27 % 3 = 0, % 9 = 0
            pow ++;
            n /= i;
        }
        if (pow == 1) 
            return false;
        i++;
    }
    if (n > 1) //(SNT)
        return false;
    return true;
}


//==================================================
int main (){
    int a, b;
    cin >> a >> b;
    for ( int i = a; i <= b; i++){
        if (check(i))
            printf("%d ", i);
    }

    return (0-0);
}

