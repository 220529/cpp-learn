// sum.cpp
// 演示如何输入两个整数并输出它们的和
// 重点：变量声明、输入输出、基本运算

#include <iostream> // 引入输入输出流库

int main() {
    int a, b; // 声明两个整型变量a和b
    std::cout << "请输入第一个整数: "; // 提示用户输入
    std::cin >> a; // 读取用户输入的第一个整数，存入a

    std::cout << "请输入第二个整数: "; // 提示用户输入
    std::cin >> b; // 读取用户输入的第二个整数，存入b

    int sum = a + b; // 计算a和b的和，存入sum
    std::cout << "它们的和是: " << sum << std::endl; // 输出结果

    return 0; // 程序正常结束
} 