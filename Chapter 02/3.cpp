#include <iostream>

int main() {

    int sum1, sum2 = 0;

    for (int i = 0; i < 10; i++) {
        sum1 += i;
    }

    int i = 1;
    while (i < 10) {
        sum2 += i;
        i += 1;
    }

    std::cout << sum1 << std::endl
                << sum2 << std::endl;
    return 0;
}