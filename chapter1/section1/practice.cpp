//
// Created by Chester Zhang on 2025/12/19.
//

#include <iostream>
#include <string>
#include <iomanip>

void q1() {
    constexpr int a = 6;
    constexpr double b = 6.6 ;
    constexpr char c = 'A';
    const std::string d = "ABCD";

    std:: cout  << "Here are: integer," << a << "\n"
                << "decimal number " << b << "\n"
                << "char " << c << "\n"
                << "and string respectively" << d << "\n"
                << std::endl;
}

void q2() {
    int a,b;
    std::cin >> a >> b;

    const int sum = a + b;
    const int abt = a - b;
    const int time = a * b;
    const int remainder = a % b;
    const double quo = (static_cast<double>(a) / static_cast<double>(b));

    std::cout   << "Sum: " << sum << std::endl
                << "Abstract: " << abt << std::endl
                << "Multiplication: " << time << std::endl
                << "Quotation: " << quo << std::endl
                << "Remainder: " << remainder << std::endl;
}

void q3() {
    constexpr double pi = 3.1415926;
    double radius;

    std::cout << "Give me the radius: ";
    std::cin >> radius;

    const double circumference = 2 * radius * pi;
    const double area = pi * radius * radius;

    std::cout << "The circumference of the circle is: " << circumference << std::endl
    << "The area of this circle is: " << area << std::endl;

}

void q4() {
    int a;
    std::cout << "Give me an integer number: " << std::endl;
    std::cin >> a;

    std::cout << "The double, triple and square number of the integer are"
    << 2 * a
    << 3 * a
    << a * a
    << std::endl;
}

void q5() {
    int a,b;
    std:: cout << "Given two numbers a and b, give me the value of these numbers respectively: ";
    std::cin >> a >> b;

    const int temp = a;
    a = b;
    b = temp;

    std::cout   << "Let me exchange your two numbers: "
                <<"Now, the number a is" << a << std::endl
                <<"The number b is" << b << std::endl;
}

void q6() {
    double celsius;
    std::cout << "Give me the celsius: ";
    std::cin >> celsius;

    const double fahrenheit = celsius * 1.8 + 32.0;

    std::cout << "The fahrenheit of " << celsius << "C is: " << fahrenheit << "F";
}

void q8() {
    std::string name, age, height;
    std::cout << "Give your name, age and height(m) respectively(Use enter key to separate each information): ";
    getline(std::cin,name);
    std::cin >> age >> height;

    std::cout << "Name: " << name << std::endl
    << "Age: " << age << std::endl
    << "Height(m): " << height << std::endl;
}

void q10() {
    constexpr int a = 42.2 , b = 5.2;
    constexpr double c = 42.2, d = 5.2;

    std::cout   << "Let a = " << a << ", b = " << b << std::endl
                << "The operation of int: " << a / b << std::endl
                << "The operation of double: " << c / d << std::endl
                << "The type transformation to int for " << c << "/" << d << " is: " << static_cast<int>(c) / static_cast<int>(d) << std::endl
                << "The type transformation to double for " << a << "/" << b << " is: " << static_cast<int>(a) / static_cast<int>(b) << std::endl;
}

void q13() {
    double num1, num2;
    std::cout << "Enter two decimal numbers separated by space: ";
    std::cin >> num1 >> num2;

    const double result = num1 / num2;

    std::cout << std::fixed;

    std::cout   << "2 decimal places: " << std::setprecision(2) << result << std::endl
                << "4 decimal places: " << std::setprecision(4) << result << std::endl
                << "6 decimal places: " << std::setprecision(6) << result << std::endl;
}

void q14() {
    std::string name, age;
    double height, weight;

    std::cout << "Please enter your Name: ";
    getline(std::cin, name);

    std::cout << "Enter your Age, Height(m) and Weight(kg) separated by space: ";
    std::cin >> age >> height >> weight;

    const double bmi = weight / (height * height);

    std::cout << std::setprecision(3);
    std::cout << std::setw(10) << "Name: " << std::setw(10) << name << std::endl
              << std::setw(10) << "Age: " << std::setw(10) << age << std::endl
              << std::setw(10) << "Height: " << std::setw(10) << height << "m" << std::endl
              << std::setw(10) << "Weight: " << std::setw(10) << weight << "kg" << std::endl
              << std::setw(10) << "BMI: " << std::setw(10) << bmi << std::endl;
}

int main() {
    q14();
}