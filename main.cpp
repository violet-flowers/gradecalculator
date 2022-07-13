#include <iostream>
using namespace std;

const char * grade_calc(int grade) {
    const char * result;
    if (grade == 100) {
        result = "Perfect Score!";
    } else if (grade >= 93) {
        result = "A";
    } else if (grade >= 80) {
        result = "B";
    } else if (grade >= 70) {
        result = "C";
    } else if (grade >= 60) {
        result = "D";
    } else {
        result = "F";
    }
    return result;
}



int main() {
    int inp1;
    std::cout << "Please input your grade" << std::endl;
    std::cin >> inp1;
    std::cout << "Your grade is an " << grade_calc(inp1)<< std::endl;
}


