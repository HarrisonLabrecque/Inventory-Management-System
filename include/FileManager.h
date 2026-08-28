#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>

#include "Product.h"
#include "Supplier.h"
#include "User.h"
#include "Category.h"

class FileManager
{
    public:

        //Product database
        void  saveProducts(const std::vector<Product>& products);

        std::vector<Product> loadProducts();

        //Supplier database
        void saveSuppliers(const std::vector<Supplier>& suppliers);

        std::vector<Supplier> loadSuppliers();

        //User database
        void saveUsers(const std::vector<User>& users);

        std::vector<User> loadUsers();

        //Category database
        void saveCategories(const std::vector<Category>& categories);

        std::vector<Category> loadCategories();

        
};

#endif