#include "../include/Database.h"


Database::Database()
{
    loadDatabase();
}


void Database::loadDatabase()
{
    products = fileManager.loadProducts();

    suppliers = fileManager.loadSuppliers();

    categories = fileManager.loadCategories();

    users = fileManager.loadUsers();
}


void Database::saveDatabase()
{
    fileManager.saveProducts(products);

    fileManager.saveSuppliers(suppliers);

    fileManager.saveCategories(categories);

    fileManager.saveUsers(users);
}


std::vector<Product>& Database::getProducts()
{
    return products;
}


std::vector<Supplier>& Database::getSuppliers()
{
    return suppliers;
}


std::vector<Category>& Database::getCategories()
{
    return categories;
}


std::vector<User>& Database::getUsers()
{
    return users;
}