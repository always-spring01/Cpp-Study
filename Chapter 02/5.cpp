#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int user_input;
    cout << "메뉴를 선택하세요!" << endl
        << "1. 1번 출력" << endl
        << "2. 2번 출력" << endl
        << "3. 3번 출력" << endl;

    cin >> user_input;
    switch (user_input) {
        case 1:
            cout << "1번 메뉴를 선택하였습니다" << endl;
            break;
        case 2:
            cout << "2번 메뉴를 선택하였습니다" << endl;
            break;
        case 3:
            cout << "3번 메뉴를 선택하였습니다" << endl;
            break;
        default:
            cout << "1, 2, 3중 하나를 입력하세요!" << endl;
            break;
    }


    return 0;
}