#pragma once
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class Book
{
    string name, id, writer, publisher, state, count;
public:
    void increaseCount();
    void decreaseCount();
};
