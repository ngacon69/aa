#include <iostream>
#include "game.h"

int main() {
    int choice;

    while (true) {
        startGame();
        std::cout << "Chon 1, 2 hoac 3: ";
        std::cin >> choice;

        if (choice == 1) {
            playGame();
        } else if (choice == 2) {
            settings();
        } else if (choice == 3) {
            std::cout << "Thoat game!" << std::endl;
            break;
        } else {
            std::cout << "Lựa chọn không hợp lệ! Vui lòng chọn lại." << std::endl;
        }
    }

    return 0;
}
