#pragma once
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Book.h"
#include "User.h"

using namespace std;
class History
{
    string id, time;
    User *user;
    Book *book;
    int borrowOrReturn;
    //borrowing is -1, returning is 1.
public:
};
