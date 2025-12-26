//
// Created by Chester Zhang on 2025/12/22.
//

#include <iostream>

void test1() {
    int a;
    do {
        std::cout << "Input number until the game end: ";
        std::cin >> a;
    } while (a > 0);

    std::cout << "THE END" << std::endl;
}

void test2() {
    const std::vector<int> vec = {1,2,3,4,5};

    for (const int num :  vec) {
        std::cout << num << std::endl;
    }
}

void test3() {
    const std::vector<int> vec = {1,2,3,4,5};

    for (int num :  vec) {
        num = num * 2;
        std::cout << num << " ";
    }

    std::cout << std::endl;

    for (const int num :  vec) {
        std::cout << num << " ";
    }



}

void test4() {
    const std::vector<char> label = {'a','A','b','B','c','C','d','D'};

    for (int i =0; i < label.size(); i++) {
        std::cout << "Number " << i << " is: " << label[i] << std::endl;
    }
}

void test5(){
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    // 使用范围 for 循环，必须加引用 &
    for (int &x : nums) {
        if (x % 2 != 0) {   // 奇数
            x += 1;
        }
    }

    // 输出结果
    for (const int x : nums) {
        std::cout << x << " ";
    }
}

void not_prime(const int n) {
    std::cout << n << " is not a prime number" << std::endl;
}

bool isPrime(const int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void test6() {
    int n;
    std::cout << "Give me the number: ";
    std::cin >> n;

    while (n <= 0) {
        std::cout << "Re-input the number, need bigger than 0: ";
        std::cin >> n;
    }

    if (isPrime(n)) {
        std::cout << n << " is a prime number" << std::endl;
    } else {
        not_prime(n);
    }
}

void test7() {
    int n;
    std::cout << "输入一个整数: ";
    std::cin >> n;

    int sum = 0;
    const int original = n;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    std::cout << original << " 的各位数之和是: " << sum << std::endl;
}

int main() {
  test6();
}

