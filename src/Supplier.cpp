#include "../include/Supplier.h"
#include <iostream>

using namespace std;

// Default constructor
Supplier::Supplier()
{
    supplierID = 0;
    name = "";
    phone = "";
    email = "";
    address = "";
}

// Parameterized constructor
Supplier::Supplier(int id,
                   string name,
                   string phone,
                   string email,
                   string address)
{
    supplierID = id;
    this->name = name;
    this->phone = phone;
    this->email = email;
    this->address = address;
}

// Setters
void Supplier::setSupplierID(int id)
{
    supplierID = id;
}

void Supplier::setName(string name)
{
    this->name = name;
}

void Supplier::setPhone(string phone)
{
    this->phone = phone;
}

void Supplier::setEmail(string email)
{
    this->email = email;
}

void Supplier::setAddress(string address)
{
    this->address = address;
}

// Getters
int Supplier::getSupplierID() const
{
    return supplierID;
}

string Supplier::getName() const
{
    return name;
}

string Supplier::getPhone() const
{
    return phone;
}

string Supplier::getEmail() const
{
    return email;
}

string Supplier::getAddress() const
{
    return address;
}

// Display
void Supplier::displaySupplier() const
{
    cout << "Supplier ID: " << supplierID << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "Address: " << address << endl;
}