// Hãy liệt kê các cặp số nguyên tố cùng nhau và có giá trị khác nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.

// Input Format

// Chỉ có một dòng ghi hai số a, b

// Constraints

// 2<=a<=b<=1000

// Output Format

// Các cặp số i,j thỏa mãn được viết lần lượt trên từng dòng theo định dạng (i,j), theo thứ tự từ điển.

// Sample Input 0

// 5 46
// Sample Output 0

// (5,6)
// (5,7)
// (5,8)
// (5,9)
// (5,11)
// ... 
// (43,46)
// (44,45)
// (45,46)

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

int GCD( int a, int b){
    if (!b) return a;
    return GCD(b, a%b);
}

//======================================
int main (){
    FAST_IO;
    short a,b;
    cin >> a >> b;
    for ( int i = a; i < b; i ++){
        for ( int j = i + 1; j <= b; j ++){
            if (GCD(i,j) == 1) 
                cout << "(" << i << "," << j << ")\n";
        }
    }

    return (0-0);
}