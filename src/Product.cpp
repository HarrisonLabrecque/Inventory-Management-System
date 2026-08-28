#include "Product.h"
#include <iostream>

using namespace std;

// Default constructor
Product::Product()
{
    productID = 0;
    name = "";
    price = 0.0;
    quantity = 0;
    categoryID = 0;
}

// Parameterized constructor
Product::Product(int id,
                 string name,
                 double price,
                 int quantity,
                 int categoryID)
{
    productID = id;
    this->name = name;
    this->price = price;
    this->quantity = quantity;
    this->categoryID = categoryID;
}

// Setters
void Product::setProductID(int id)
{
    productID = id;
}

void Product::setName(string name)
{
    this->name = name;
}

void Product::setPrice(double price)
{
    this->price = price;
}

void Product::setQuantity(int quantity)
{
    this->quantity = quantity;
}

void Product::setCategoryID(int id)
{
    categoryID = id;
}

// Getters
int Product::getProductID() const
{
    return productID;
}

string Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}

int Product::getQuantity() const
{
    return quantity;
}

int Product::getCategoryID() const
{
    return categoryID;
}

// Display
void Product::displayProduct() const
{
    cout << "Product ID: " << productID << endl;
    cout << "Name: " << name << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Category ID: " << categoryID << endl;
}