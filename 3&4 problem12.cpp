#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// 将16进制字符串转换为10进制整数
int parseHex(const string &hexStr) {
    int decimalValue = 0;
    stringstream ss;
    ss << hex << hexStr;
    ss >> decimalValue;

    return decimalValue;
}

int main() {
    string hexStr;
    cout << "请输入16进制数：";
    cin >> hexStr;
    int decimalValue = parseHex(hexStr);
    cout << "对应的10进制数是：" << decimalValue << endl;
    return 0;
}
