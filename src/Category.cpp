#include "../include/Category.h"
#include <iostream>

using namespace std;

// Default constructor
Category::Category()
{
    categoryID = 0;
    categoryName = "";
}

// Parameterized constructor
Category::Category(int id, string name)
{
    categoryID = id;
    categoryName = name;
}

// Setter methods
void Category::setCategoryID(int id)
{
    categoryID = id;
}

void Category::setCategoryName(string name)
{
    categoryName = name;
}

// Getter methods
int Category::getCategoryID() const
{
    return categoryID;
}

string Category::getCategoryName() const
{
    return categoryName;
}

// Display function
void Category::displayCategory() const
{
    cout << "Category ID: " << categoryID << endl;
    cout << "Category Name: " << categoryName << endl;
}