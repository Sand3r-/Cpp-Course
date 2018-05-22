#pragma once
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <functional>

#include <Windows.h>

inline long long PerformanceCounter()
{
    LARGE_INTEGER result;
    ::QueryPerformanceCounter(&result);
    return result.QuadPart;
}

inline long long PerformanceFrequency()
{
    LARGE_INTEGER result;
    ::QueryPerformanceFrequency(&result);
    return result.QuadPart;
}

void FillVector(std::vector<float>& data)
{
    std::random_device rng;
    std::mt19937 rng_eng(rng());
    std::uniform_real_distribution<float> dist(-50, 50);

    auto gen = bind(dist, rng_eng);
    generate(std::begin(data), std::end(data), gen);
}

void MeasureTime(std::function<void(std::vector<float>)> function, std::vector<float> vec)
{
    using namespace std;
    auto cyclesNow = PerformanceCounter();
    function(vec);
    auto cyclesDiff = PerformanceCounter() - cyclesNow;

    auto durationSeconds = cyclesDiff * 1.f / PerformanceFrequency();
    cout << durationSeconds << " seconds" << endl;
    cin.get();
}