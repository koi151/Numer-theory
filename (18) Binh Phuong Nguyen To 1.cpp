// Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// In ra các số đẹp trong đoạn từ a tới b

// Sample Input 0

// 4 50
// Sample Output 0

// 4 8 9 12 16 18 20 24 25 27 28 32 36 40 44 45 48 49 50
                                         

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool checkPrime (int n){
    for ( int i = 2; i*i <= n; i++)
        if ( n % i == 0) return false;
    return n > 1;
}

void seive (bool mark[], int a, int b){
    for ( int i = 0; i <= b; i ++)
        mark[i] = false;

    for ( int i = 2; i*i <= b; i++){
        if (checkPrime(i)){
            for (int j = (a-1 + i*i)/ (i*i)*(i*i); j <= b; j += i*i)
                mark[j] = true;
        }
    }
}

//=======================================
int main (){
    FAST_IO;
    int a, b;
    cin >> a >> b;
    bool mark[b+1];
    seive(mark,a,b);
    for ( int i = 0; i <= b; i++)
        if (mark[i]) cout << i << ' ';
    return (0-0);
}