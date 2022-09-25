// Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

// Input Format

// Số nguyên dương N

// Constraints

// 2≤N≤10^16

// Output Format

// Phân tích thừa số nguyên tố của N, xem ví dụ để rõ hơn format.

// Sample Input 0

// 60
// Sample Output 0

// 2^2 * 3^1 * 5^1

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

void prime_Fact ( long long n){ // Hàm phân tích TSNT
    int pow;
    long long  ft = 2;
    while (ft*ft  <= n){
        pow = 0;
        while ( n % ft == 0){
            n /= ft; 
            pow ++;
        }

        if ( pow != 0){
                cout << ft << "^" << pow; 
            if (n != 1)
                 cout << " * ";
        }

        ft ++;
    }
    if ( n > 1)
        cout << n << "^1";
}

//=======================================
int main ()
{
    FAST_IO;
    long long n;
    cin >> n;
    prime_Fact(n);
    return (0-0);
}
//========================================
// Step:
// 	. j (là hệ số của tsnt) 
// 	. pow (là số mũ) 
// 	------------------------------------------------------
// 	. j bắt đầu từ 2 -> giá trị tối đa cho phép là sqrt(n)

// 		. Nếu n chia hết cho j 
// 			. Kiểm tra số mũ tối đa có thể của hệ số j
		
// 		. Nếu pow khác 0
// 			. In số

// 		. Tăng j

// 	. Nếu n còn lại khác 0, in ra tích thừa số n cuối cùng (^1)