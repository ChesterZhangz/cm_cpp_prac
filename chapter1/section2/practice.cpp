//
// Created by Chester Zhang on 2025/12/23.
//

#include <iostream>
#include <iomanip>

void q1(const int n) {
    std::cout << n ;
    if (n > 0) {
        std::cout << " is positive number" << std::endl;
    } else if (n < 0) {
        std::cout << " is negative number" << std::endl;
    } else {
        std::cout << " is zero" << std::endl;
    }
}

void q2(const int n) {
    std::cout << n;
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
        std::cout << " is leap year" << std::endl;
    } else {
        std::cout << " is not leap year" << std::endl;
    }
}

void q3() {
    for (int i = 1; i <= 100; i++) {
        std::cout << i << "  ";
        if (i % 10 == 0) {
            std::cout << std::endl;
        }
    }
}

void q4() {
    for (int i = 0; i <= 50; i++) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
}

void q5(const int n) {
    long long sum = 1LL;
    for (int i = 2; i <= n; i++) {
        sum = sum * i;
    }
    if (n > 20) {
    std::cout << "Overflow: n too large for long long" << std::endl;
    } else {
        std::cout << n << "'s factorial is " << sum << std::endl;
    }
}

void q6() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << "×" << i << "=" << std::setw(2) << j * i << "  ";
        }
        std::cout << std::endl;
    }
}

void q7() {
    int n, sum = 0;
    do {
        std::cout << "Input number until 0: ";
        std::cin >> n;
        sum += n;
    } while (n != 0);

    std::cout << sum;
}

void q8(const int n) {
    if (n < 2) {
        std::cout << "不是质数" << std::endl;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            std::cout << "不是质数" << std::endl;
        }
    }
    std::cout << "是质数" << std::endl;
}

void q9() {
    int n;
    std::cout << "Give me a number, I will give you the surprise: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}

void q10() {
    const int target = rand() % 100 + 1;
    int guess;

    while (std::cin >> guess) {
        if (guess > target)
            std::cout << "太大" << std::endl;
        else if (guess < target)
            std::cout << "太小" << std::endl;
        else {
            std::cout << "猜中了" << std::endl;
            break;
        }
    }
}

void q11(const int n) {
    long long num = 0, a = 1 ,b = 1;

    if (n >= 1) std::cout << a << " ";
    if (n >= 2) std::cout << b << " ";

    for (int i = 3; i <= n; i++) {
        num = a + b;
        b = a;
        a = num;
        std::cout << num << " ";
    }
}

void q12(const int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            std::cout << i << "  ";
        }
    }
}

void q13(const std::string& n) {
    if (n.empty()) return;
    int left = 0;
    auto right = n.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (n[left] != n[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        std::cout << n << " 是回文数。" << std::endl;
    } else {
        std::cout << n << " 不是回文数。" << std::endl;
    }
}

void q14() {
    constexpr int n = 3;
    int i, j, k;

    // --- 上半部分 ---
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // --- 下半部分 ---
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// This is a helper function
bool is_prime(const int n) {
        bool prime = true;
        for (int i = 2; i * i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
    return true;
    }

void q15() {
    for (int i = 100; i<= 200; i++) {
        if (is_prime(i)) {
            std::cout << i << "  ";
        }
    }
}

void q16(const int n) {
    int sum = 0;

    for (int i = 1; i < n; ++i)
        if (n % i == 0)
            sum += i;

    if (sum == n) {
        bool first = true;
        std::cout << n << " = ";
        for (int i = 1; i < n; ++i)
            if (n % i == 0) {
                if (!first) std::cout << " + ";
                std::cout << i;
                first = false;
            }
    } else {
        std::cout << "This is not perfect number." << std::endl;
    }
}

void q17(int a,int b) {
    while (b != 0) {
        const int r = a % b;
        a = b;
        b = r;
    }

    std::cout << a;
}

void q18() {
    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            std::cout << i << " ";
        }
    }
}

void q19() {
    int choice;
    double a, b;

    while (true) {
        std::cout << "1. 加法\n";
        std::cout << "2. 减法\n";
        std::cout << "3. 乘法\n";
        std::cout << "4. 除法\n";
        std::cout << "5. 退出\n";
        std::cout << "请选择操作: ";
        std::cin >> choice;

        if (choice == 5) {
            break;
        }

        std::cout << "请输入两个数: ";
        std::cin >> a >> b;

        switch (choice) {
            case 1:
                std::cout << "结果: " << a + b << std::endl;
                break;
            case 2:
                std::cout << "结果: " << a - b << std::endl;
                break;
            case 3:
                std::cout << "结果: " << a * b << std::endl;
                break;
            case 4:
                if (b != 0)
                    std::cout << "结果: " << a / b << std::endl;
                else
                    std::cout << "除数不能为0" << std::endl;
                break;
            default:
                std::cout << "无效选择" << std::endl;
        }
    }
}

void q20(int n) {
    if (n == 0) {
        std::cout << "0's binary is: 0";
        return;
    }
    std::cout << n << "'s binary is: ";

    int bits[32];
    int cnt = 0;

    while (n != 0) {
        bits[cnt++] = n % 2;
        n /= 2;
    }

    for (int i = cnt - 1; i >= 0; --i) {
        std::cout << bits[i];
    }
}

void q21(const std::string& str) {
    int count = 0;
    const std::string vowels = "aeiouAEIOU";

    for (const char c : str) {
        if (vowels.find(c) != std::string::npos) {
            count++;
        }
    }

    std::cout << "The number of vowel letters is: " << count << std::endl;
}

void q22(const int n) {
    std::vector<std::vector<int>> triangle(n);

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    int maxNum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            maxNum = std::max(maxNum, triangle[i][j]);
        }
    }

    const int width = static_cast<int>(std::to_string(maxNum).length()) + 1;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1) * width / 2; j++) {
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            std::cout << std::setw(width) << triangle[i][j];
        }
        std::cout << std::endl;
    }
}

void q23() {
    for (int i = 1; i <= 1000; i++) {
            int temp = i, digits = 0;
            while (temp) {
                digits++;
                temp /= 10;
            }

            temp = i;
            int sum = 0;
            while (temp) {
                const int d = temp % 10;
                sum += std::pow(d, digits);
                temp /= 10;
            }

            if (sum == i) {
                std::cout << i << std::endl;
            }
    }
}

void q24() {
    int balance = 1000;
    int choice;
    bool is_exit = false;

    std::cout << "You have $1000, you can choose menus below:" << std::endl;

    do {
        std::cout << "=== ATM Menu ===" << std::endl;
        std::cout << "1. Check balance" << std::endl;
        std::cout << "2. Save Money" << std::endl;
        std::cout << "3. Get Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Your choice is here: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Your balance is: $" << balance << std::endl;
                break;
            case 2: {
                int saving;
                std::cout << "How much will you save? Give me the money: ";
                std::cin >> saving;
                balance += saving;
                std::cout << "You now have $" << balance << std::endl;
                break;
            }
            case 3: {
                int withdraw;
                std::cout << "How much will you withdraw? Give me the number: ";
                std::cin >> withdraw;
                if (withdraw > balance) {
                    std::cout << "Sorry, your balance is not enough, please try again!" << std::endl;
                } else {
                    balance -= withdraw;
                    std::cout << "You have already withdrawn $" << withdraw << std::endl;
                    std::cout << "You have a balance of $" << balance << std::endl;
                }
                break;
            }
            case 4:
                std::cout << "Thank you for your visit. Looking forward to meeting you again." << std::endl;
                is_exit = true;
                break;
            default:
                std::cout << "Please try again! Your number is not valid." << std::endl;
                break;
        }
    } while (!is_exit);
}

// Belows are solutions for Q25
// Helper function 1
bool isLeap(const int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

// Helper function 2
int daysInMonth(const int y, const int m) {
    if (m == 2) return isLeap(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

// Helper function 3
int weekDay(int y, int m, const int d) {
    if (m < 3) {
        m += 12;
        y--;
    }
    const int c = y / 100;
    const int y2 = y % 100;
    int w = (y2 + y2 / 4 + c / 4 - 2 * c + (26 * (m + 1)) / 10 + d - 1) % 7;
    if (w < 0) w += 7;
    return w;
}

void q25() {
    int year, month;
    std::cin >> year >> month;

    const int days = daysInMonth(year, month);
    const int firstDay = weekDay(year, month, 1);

    std::cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    for (int i = 0; i < firstDay; i++) {
        std::cout << "    ";
    }

    for (int d = 1; d <= days; d++) {
        if (d < 10) std::cout << "  ";
        else std::cout << " ";
        std::cout << d << " ";

        if ((firstDay + d) % 7 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

int main() {
    q24();
}

