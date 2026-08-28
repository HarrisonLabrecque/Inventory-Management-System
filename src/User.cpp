#include "../include/User.h"
#include <iostream>

using namespace std;

// Default constructor
User::User()
{
    userID = 0;
    username = "";
    password = "";
    role = "";
}

// Parameterized constructor
User::User(int id,
           string username,
           string password,
           string role)
{
    userID = id;
    this->username = username;
    this->password = password;
    this->role = role;
}

// Login
bool User::login(string username, string password)
{
    return this->username == username &&
           this->password == password;
}

// Setter methods
void User::setUserID(int id)
{
    userID = id;
}

void User::setUserName(string username)
{
    this->username = username;
}

void User::setPassword(string password)
{
    this->password = password;
}

void User::setRole(string role)
{
    this->role = role;
}

// Getter methods
int User::getUserID() const
{
    return userID;
}

string User::getUserName() const
{
    return username;
}

string User::getPassword() const
{
    return password;
}

string User::getRole() const
{
    return role;
}

// Display
void User::displayUser() const
{
    cout << "User ID: " << userID << endl;
    cout << "Username: " << username << endl;
    cout << "Role: " << role << endl;
}