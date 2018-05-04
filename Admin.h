#pragma once

#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class Admin
{
    string name, password;
public:
    void AddUser(string name, string id, string password, string type);
    void ChangeInfo();
    void DeleteUser(string id);
    void AddBook(string name, string id, string writer, string publisher, string state, string count);
    void DeleteBook(string id);
};
