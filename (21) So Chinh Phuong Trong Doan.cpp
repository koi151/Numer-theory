// In ra các số chính phương trong đoạn từ a tới b. Bài này bạn nào code bằng java thì có thể bỏ qua vì test lớn quá Java không chạy xong trong 8s.

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^12

// Output Format

// In ra các số chính phương trong đoạn giữa 2 số a, b trên một dòng. Các số cách nhau một khoảng trắng.

// Sample Input 0

// 10 20
// Sample Output 0

// 16

#include <iostream>
#include <cmath>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//==============================
int main (){
    FAST_IO;
    long long a, b;
    cin >> a >> b;
    a = ceil(sqrt(a)); // làm tròn số thập phân lên (4,123 = 5)
    b = sqrt(b);
    for ( long long i = a; i <= b; i ++){
        cout << i*i << ' ';
    }
    return (0-0);
}
