#include <iostream>
#include <string>

#include "Product.h"
#include "Supplier.h"
#include "Category.h"
#include "User.h"
#include "Inventory.h"
#include "Database.h"

using namespace std;


// =====================================================
// PRODUCT FUNCTIONS
// =====================================================

void addProduct(Inventory& inventory)
{
    int id;
    string name;
    double price;
    int quantity;
    int categoryID;

    cout << "\nEnter Product ID: ";
    cin >> id;

    cout << "Enter Product Name: ";
    cin >> ws;
    getline(cin, name);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Category ID: ";
    cin >> categoryID;

    Product product(
        id,
        name,
        price,
        quantity,
        categoryID
    );

    inventory.addProduct(product);
}


void searchProduct(Inventory& inventory)
{
    string keyword;

    cout << "\nEnter Product Name: ";
    cin >> ws;
    getline(cin, keyword);

    inventory.searchProduct(keyword);
}


void updateProduct(Inventory& inventory)
{
    int id;

    cout << "\nEnter Product ID: ";
    cin >> id;

    inventory.updateProduct(id);
}


void deleteProduct(Inventory& inventory)
{
    int id;

    cout << "\nEnter Product ID: ";
    cin >> id;

    inventory.removeProduct(id);
}


void productMenu(Inventory& inventory)
{
    int choice;

    do
    {
        cout << "\n================================\n";
        cout << "         PRODUCT MENU\n";
        cout << "================================\n";
        cout << "1. Add Product\n";
        cout << "2. View Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product\n";
        cout << "5. Delete Product\n";
        cout << "0. Back\n";
        cout << "================================\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addProduct(inventory);
                break;

            case 2:
                inventory.displayProducts();
                break;

            case 3:
                searchProduct(inventory);
                break;

            case 4:
                updateProduct(inventory);
                break;

            case 5:
                deleteProduct(inventory);
                break;

            case 0:
                cout << "Returning to main menu...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 0);
}


// =====================================================
// SUPPLIER FUNCTIONS
// =====================================================

void addSupplier(Database& database)
{
    int id;
    string name;
    string phone;
    string email;
    string address;

    cout << "\nEnter Supplier ID: ";
    cin >> id;

    cout << "Enter Supplier Name: ";
    cin >> ws;
    getline(cin, name);

    cout << "Enter Phone: ";
    getline(cin, phone);

    cout << "Enter Email: ";
    getline(cin, email);

    cout << "Enter Address: ";
    getline(cin, address);

    Supplier supplier(
        id,
        name,
        phone,
        email,
        address
    );

    database.getSuppliers().push_back(supplier);

    cout << "Supplier added successfully.\n";
}


void displaySuppliers(Database& database)
{
    const auto& suppliers = database.getSuppliers();

    if(suppliers.empty())
    {
        cout << "\nNo suppliers found.\n";
        return;
    }

    cout << "\n========== SUPPLIERS ==========\n";

    for(const auto& supplier : suppliers)
    {
        supplier.displaySupplier();
        cout << endl;
    }
}


void deleteSupplier(Database& database)
{
    int id;

    cout << "\nEnter Supplier ID: ";
    cin >> id;

    auto& suppliers = database.getSuppliers();

    for(auto it = suppliers.begin();
        it != suppliers.end();
        ++it)
    {
        if(it->getSupplierID() == id)
        {
            suppliers.erase(it);

            cout << "Supplier deleted successfully.\n";
            return;
        }
    }

    cout << "Supplier not found.\n";
}


void supplierMenu(Database& database)
{
    int choice;

    do
    {
        cout << "\n================================\n";
        cout << "        SUPPLIER MENU\n";
        cout << "================================\n";
        cout << "1. Add Supplier\n";
        cout << "2. View Suppliers\n";
        cout << "3. Delete Supplier\n";
        cout << "0. Back\n";
        cout << "================================\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addSupplier(database);
                break;

            case 2:
                displaySuppliers(database);
                break;

            case 3:
                deleteSupplier(database);
                break;

            case 0:
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 0);
}


// =====================================================
// CATEGORY FUNCTIONS
// =====================================================

void addCategory(Database& database)
{
    int id;
    string name;

    cout << "\nEnter Category ID: ";
    cin >> id;

    cout << "Enter Category Name: ";
    cin >> ws;
    getline(cin, name);

    Category category(id, name);

    database.getCategories().push_back(category);

    cout << "Category added successfully.\n";
}


void displayCategories(Database& database)
{
    const auto& categories = database.getCategories();

    if(categories.empty())
    {
        cout << "\nNo categories found.\n";
        return;
    }

    cout << "\n========== CATEGORIES ==========\n";

    for(const auto& category : categories)
    {
        category.displayCategory();
        cout << endl;
    }
}


void deleteCategory(Database& database)
{
    int id;

    cout << "\nEnter Category ID: ";
    cin >> id;

    auto& categories = database.getCategories();

    for(auto it = categories.begin();
        it != categories.end();
        ++it)
    {
        if(it->getCategoryID() == id)
        {
            categories.erase(it);

            cout << "Category deleted successfully.\n";
            return;
        }
    }

    cout << "Category not found.\n";
}


void categoryMenu(Database& database)
{
    int choice;

    do
    {
        cout << "\n================================\n";
        cout << "        CATEGORY MENU\n";
        cout << "================================\n";
        cout << "1. Add Category\n";
        cout << "2. View Categories\n";
        cout << "3. Delete Category\n";
        cout << "0. Back\n";
        cout << "================================\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addCategory(database);
                break;

            case 2:
                displayCategories(database);
                break;

            case 3:
                deleteCategory(database);
                break;

            case 0:
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 0);
}


// =====================================================
// USER FUNCTIONS
// =====================================================

void addUser(Database& database)
{
    int id;
    string username;
    string password;
    string role;

    cout << "\nEnter User ID: ";
    cin >> id;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    cout << "Enter Role: ";
    cin >> role;

    User user(
        id,
        username,
        password,
        role
    );

    database.getUsers().push_back(user);

    cout << "User added successfully.\n";
}


void displayUsers(Database& database)
{
    const auto& users = database.getUsers();

    if(users.empty())
    {
        cout << "\nNo users found.\n";
        return;
    }

    cout << "\n========== USERS ==========\n";

    for(const auto& user : users)
    {
        user.displayUser();
        cout << endl;
    }
}


void deleteUser(Database& database)
{
    int id;

    cout << "\nEnter User ID: ";
    cin >> id;

    auto& users = database.getUsers();

    for(auto it = users.begin();
        it != users.end();
        ++it)
    {
        if(it->getUserID() == id)
        {
            users.erase(it);

            cout << "User deleted successfully.\n";
            return;
        }
    }

    cout << "User not found.\n";
}


void userMenu(Database& database)
{
    int choice;

    do
    {
        cout << "\n================================\n";
        cout << "          USER MENU\n";
        cout << "================================\n";
        cout << "1. Add User\n";
        cout << "2. View Users\n";
        cout << "3. Delete User\n";
        cout << "0. Back\n";
        cout << "================================\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addUser(database);
                break;

            case 2:
                displayUsers(database);
                break;

            case 3:
                deleteUser(database);
                break;

            case 0:
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 0);
}


// =====================================================
// MAIN MENU
// =====================================================

void mainMenu()
{
    cout << "\n";
    cout << "============================================\n";
    cout << "       INVENTORY MANAGEMENT SYSTEM\n";
    cout << "============================================\n";
    cout << "1. Product Management\n";
    cout << "2. Supplier Management\n";
    cout << "3. Category Management\n";
    cout << "4. User Management\n";
    cout << "5. Save Database\n";
    cout << "6. Load Database\n";
    cout << "0. Exit\n";
    cout << "============================================\n";
}


// =====================================================
// MAIN
// =====================================================

int main()
{
    Database database;

    // Inventory uses the product vector
    // owned by Database.
    Inventory inventory(database.getProducts());

    int choice;

    do
    {
        mainMenu();

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                productMenu(inventory);
                break;

            case 2:
                supplierMenu(database);
                break;

            case 3:
                categoryMenu(database);
                break;

            case 4:
                userMenu(database);
                break;

            case 5:
                database.saveDatabase();

                cout << "\nDatabase saved successfully.\n";
                break;

            case 6:
                database.loadDatabase();

                cout << "\nDatabase loaded successfully.\n";
                break;

            case 0:
                database.saveDatabase();

                cout << "\nDatabase saved.\n";
                cout << "Thank you for using the Inventory Management System.\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while(choice != 0);

    return 0;
}