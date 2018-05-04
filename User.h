#pragma once
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class User
{
    string name, id, password, type;
public:
    int Borrow(string userId, string userType, string bookId, string time);
    int Return(string userId, string userType, string bookId, string time);
    //return 1 if succeed, return 0 otherwise.
};
