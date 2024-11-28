#include <iostream>
using namespace std;

void gcd(int &a, int &b, int &result) {
    int x = a, y = b; // 保留原始值
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    result = x; // 将结果通过引用返回
}

int main() {
    int m, n, result;

    // 输入自然数 m 和 n
    cout << "请输入两个自然数 m 和 n: ";
    cin >> m >> n;

    // 调用函数求最大公约数
    gcd(m, n, result);

    // 输出结果
    cout << "最大公约数为: " << result << endl;
    cout<<"最小公倍数为："<< (m*n)/result<< endl;

    return 0;
}



