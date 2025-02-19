#ifndef UTILS_H
#define UTILS_H

#include <chrono>

bool timeExpired(std::chrono::steady_clock::time_point start_time, int seconds);

#endif
