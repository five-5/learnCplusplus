#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // 只要val的值小于等于10，while循环继续执行
    while (val <= 10){
        sum += val; // 将sum + val 赋值给sum
        ++val;      // 将val+1
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
