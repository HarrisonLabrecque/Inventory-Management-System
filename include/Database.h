#ifndef DATABASE_H
#define DATABASE_H

#include <vector>

#include "Product.h"
#include "Supplier.h"
#include "Category.h"
#include "User.h"
#include "FileManager.h"

class Database
{
private:
    std::vector<Product> products;
    std::vector<Supplier> suppliers;
    std::vector<Category> categories;
    std::vector<User> users;

    FileManager fileManager;

public:
    Database();

    void loadDatabase();
    void saveDatabase();

    std::vector<Product>& getProducts();
    std::vector<Supplier>& getSuppliers();
    std::vector<Category>& getCategories();
    std::vector<User>& getUsers();
};

#endif