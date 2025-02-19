#include "utils.h"

bool timeExpired(std::chrono::steady_clock::time_point start_time, int seconds) {
    auto end_time = start_time + std::chrono::seconds(seconds);
    return std::chrono::steady_clock::now() >= end_time;
}
