#pragma once
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
#include <chrono>

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
    using namespace chrono;
    auto now = steady_clock::now();
    function(vec);
    auto diff = steady_clock::now() - now;

    duration<long long int, nano> ns = duration_cast<duration<long long int, nano>>(diff);
    cout << ns.count() * powf(10, -9) << " seconds" << endl;
    cin.get();
}