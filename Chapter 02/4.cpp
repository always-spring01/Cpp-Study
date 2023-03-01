#include <iostream>

int main() {
    int lucky_number = 3;

    int user_input;     // user Input

    while (1) {
        std::cout << "입력 : ";
        std::cin >> user_input;
        if (lucky_number == user_input) {
            std::cout << "맞추셨습니다!" << std::endl;
            break;
        }else {
            std::cout << "다시 시도하세요" << std::endl;
        }
    }

    return 0;
}