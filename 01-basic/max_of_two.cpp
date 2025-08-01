// max_of_two.cpp
// 演示如何输入两个整数并输出其中较大的一个
// 重点：if/else 条件语句

#include <iostream> // 引入输入输出流库

int main() {
    int a, b; // 声明两个整型变量a和b
    std::cout << "请输入第一个整数: ";
    std::cin >> a;
    std::cout << "请输入第二个整数: ";
    std::cin >> b;

    // 使用if/else判断并输出较大值
    if (a > b) {
        std::cout << "较大的数是: " << a << std::endl;
    } else if (a < b) {
        std::cout << "较大的数是: " << b << std::endl;
    } else {
        std::cout << "两个数相等: " << a << std::endl;
    }

    return 0;
}
