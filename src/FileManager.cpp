#include "FileManager.h"

#include <fstream>
#include <iostream>

using namespace std;


// =====================================================
// PRODUCTS
// =====================================================

void FileManager::saveProducts(
    const vector<Product>& products)
{
    ofstream file("data/products.txt");

    if(!file)
    {
        cout << "Error opening products.txt\n";
        return;
    }

    for(const auto& product : products)
    {
        file
            << product.getProductID() << ","
            << product.getName() << ","
            << product.getPrice() << ","
            << product.getQuantity() << ","
            << product.getCategoryID()
            << endl;
    }

    file.close();
}


vector<Product> FileManager::loadProducts()
{
    vector<Product> products;

    ifstream file("data/products.txt");

    if(!file)
    {
        return products;
    }

    int id;
    string name;
    double price;
    int quantity;
    int categoryID;

    char comma;

    while(file >> id >> comma)
    {
        getline(file, name, ',');

        file >> price >> comma;
        file >> quantity >> comma;
        file >> categoryID;

        products.push_back(
            Product(
                id,
                name,
                price,
                quantity,
                categoryID
            )
        );
    }

    file.close();

    return products;
}


// =====================================================
// SUPPLIERS
// =====================================================

void FileManager::saveSuppliers(
    const vector<Supplier>& suppliers)
{
    ofstream file("data/suppliers.txt");

    if(!file)
    {
        cout << "Error opening suppliers.txt\n";
        return;
    }

    for(const auto& supplier : suppliers)
    {
        file
            << supplier.getSupplierID() << ","
            << supplier.getName() << ","
            << supplier.getPhone() << ","
            << supplier.getEmail() << ","
            << supplier.getAddress()
            << endl;
    }

    file.close();
}


vector<Supplier> FileManager::loadSuppliers()
{
    vector<Supplier> suppliers;

    ifstream file("data/suppliers.txt");

    if(!file)
    {
        return suppliers;
    }

    int id;
    string name;
    string phone;
    string email;
    string address;

    char comma;

    while(file >> id >> comma)
    {
        getline(file, name, ',');

        getline(file, phone, ',');

        getline(file, email, ',');

        getline(file, address);

        suppliers.push_back(
            Supplier(
                id,
                name,
                phone,
                email,
                address
            )
        );
    }

    file.close();

    return suppliers;
}


// =====================================================
// CATEGORIES
// =====================================================

void FileManager::saveCategories(
    const vector<Category>& categories)
{
    ofstream file("data/categories.txt");

    if(!file)
    {
        cout << "Error opening categories.txt\n";
        return;
    }

    for(const auto& category : categories)
    {
        file
            << category.getCategoryID() << ","
            << category.getCategoryName()
            << endl;
    }

    file.close();
}


vector<Category> FileManager::loadCategories()
{
    vector<Category> categories;

    ifstream file("data/categories.txt");

    if(!file)
    {
        return categories;
    }

    int id;
    string name;

    char comma;

    while(file >> id >> comma)
    {
        getline(file, name);

        categories.push_back(
            Category(
                id,
                name
            )
        );
    }

    file.close();

    return categories;
}


// =====================================================
// USERS
// =====================================================

void FileManager::saveUsers(
    const vector<User>& users)
{
    ofstream file("data/users.txt");

    if(!file)
    {
        cout << "Error opening users.txt\n";
        return;
    }

    for(const auto& user : users)
    {
        file
            << user.getUserID() << ","
            << user.getUserName() << ","
            << user.getPassword() << ","
            << user.getRole()
            << endl;
    }

    file.close();
}


vector<User> FileManager::loadUsers()
{
    vector<User> users;

    ifstream file("data/users.txt");

    if(!file)
    {
        return users;
    }

    int id;
    string username;
    string password;
    string role;

    char comma;

    while(file >> id >> comma)
    {
        getline(file, username, ',');

        getline(file, password, ',');

        getline(file, role);

        users.push_back(
            User(
                id,
                username,
                password,
                role
            )
        );
    }

    file.close();

    return users;
}