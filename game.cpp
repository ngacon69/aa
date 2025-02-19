#include <iostream>
#include "game.h"
#include "utils.h"

void startGame() {
    std::cout << "Chao mung den voi game!" << std::endl;
    std::cout << "1. Bat dau choi" << std::endl;
    std::cout << "2. Cau hinh" << std::endl;
    std::cout << "3. Thoat" << std::endl;
}

void playGame() {
    char key_to_press;
    int time_limit, count = 0;

    std::cout << "Nhap phím bạn muốn chọn (ví dụ E): ";
    std::cin >> key_to_press;

    std::cout << "Nhap thời gian (giây): ";
    std::cin >> time_limit;

    auto start_time = std::chrono::steady_clock::now();
    auto end_time = start_time + std::chrono::seconds(time_limit);

    std::cout << "Bắt đầu nhấn phím '" << key_to_press << "' để BỎ CON trong " << time_limit << " giây!" << std::endl;
    std::cout << "Bấm phím '" << key_to_press << "' để BỎ CON..." << std::endl;

    while (std::chrono::steady_clock::now() < end_time) {
        if (_kbhit()) {
            char pressed_key = _getch();
            if (pressed_key == key_to_press) {
                count++;
            }
        }
    }

    std::cout << "\nThời gian kết thúc!" << std::endl;
    std::cout << "Số lần bạn đã BỎ CON với phím '" << key_to_press << "': " << count << std::endl;
}

void settings() {
    std::cout << "Cau hinh game: " << std::endl;
    std::cout << "1. Chon phím bấm" << std::endl;
    std::cout << "2. Chọn thời gian" << std::endl;
    std::cout << "3. Quay lại" << std::endl;
}
