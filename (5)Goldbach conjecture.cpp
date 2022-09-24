// Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố. Cho số nguyên dương chẵn N >=4 . Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N. Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 = 6.

// Input Format

// Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số chẵn N.

// Constraints

// 1≤T≤1000; 4≤N≤1000000

// Output Format

// Đưa ra kết quả mỗi test theo từng dòng, mỗi dòng là một cặp số thỏa mãn. Chú ý mỗi cặp chỉ liệt kê một lần, không xét đến thứ tự.

// Sample Input 0

// 1
// 3204
// Sample Output 0

// 13 3191
// 17 3187
// 23 3181
// 37 3167
// 41 3163
// 67 3137
// 83 3121
// 137 3067
// 163 3041
// 167 3037
// 181 3023
// 193 3011
// 233 2971
// 241 2963
// 251 2953
// 277 2927
// 307 2897
// 317 2887
// 347 2857
// 353 2851
// 367 2837
// 401 2803
// 463 2741
// 491 2713
// 521 2683
// 541 2663
// 547 2657
// 557 2647
// 571 2633
// 587 2617
// 613 2591
// 647 2557
// 653 2551
// 661 2543
// 673 2531
// 683 2521
// 701 2503
// 727 2477
// 757 2447
// 787 2417
// 811 2393
// 821 2383
// 823 2381
// 827 2377
// 853 2351
// 857 2347
// 863 2341
// 907 2297
// 911 2293
// 937 2267
// 953 2251
// 967 2237
// 983 2221
// 991 2213
// 997 2207
// 1051 2153
// 1061 2143
// 1063 2141
// 1091 2113
// 1093 2111
// 1117 2087
// 1123 2081
// 1151 2053
// 1187 2017
// 1193 2011
// 1201 2003
// 1217 1987
// 1231 1973
// 1291 1913
// 1297 1907
// 1303 1901
// 1327 1877
// 1373 1831
// 1381 1823
// 1427 1777
// 1451 1753
// 1471 1733
// 1481 1723
// 1483 1721
// 1511 1693
// 1567 1637
// 1583 1621
// 1597 1607

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

bool checkPrime(int n){
    for ( int i  = 2; i*i < n; i++){
        if ( n % i == 0) return false;
    }
    return n > 1;
}

//=============================
int main (){
    FAST_IO;
    int t,n;
    cin >> t;
    while ( t--){
        cin >> n;
        for ( int i = 0; i < n/2; i ++){
            if (checkPrime(i) && checkPrime(n-i))
                cout << i << " " << n-i << "\n";
        }
    }
    return (0-0);
}