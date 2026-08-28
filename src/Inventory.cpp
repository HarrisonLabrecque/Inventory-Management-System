#include "../include/Inventory.h"
#include <iostream>

using namespace std;


// Constructor
Inventory::Inventory(vector<Product>& products)
    : products(products)
{
}


// Add product
void Inventory::addProduct(const Product& product)
{
    products.push_back(product);

    cout << "Product added successfully.\n";
}


// Remove product
void Inventory::removeProduct(int id)
{
    for(auto it = products.begin();
        it != products.end();
        ++it)
    {
        if(it->getProductID() == id)
        {
            products.erase(it);

            cout << "Product removed successfully.\n";
            return;
        }
    }

    cout << "Product not found.\n";
}


// Update product
void Inventory::updateProduct(int id)
{
    for(auto& product : products)
    {
        if(product.getProductID() == id)
        {
            string name;
            double price;
            int quantity;

            cout << "Enter new name: ";
            cin >> ws;
            getline(cin, name);

            cout << "Enter new price: ";
            cin >> price;

            cout << "Enter new quantity: ";
            cin >> quantity;

            product.setName(name);
            product.setPrice(price);
            product.setQuantity(quantity);

            cout << "Product updated successfully.\n";

            return;
        }
    }

    cout << "Product not found.\n";
}


// Search product
void Inventory::searchProduct(const string& keyword) const
{
    bool found = false;

    for(const auto& product : products)
    {
        if(product.getName().find(keyword) != string::npos)
        {
            product.displayProduct();

            found = true;
        }
    }

    if(!found)
    {
        cout << "Product not found.\n";
    }
}


// Display products
void Inventory::displayProducts() const
{
    if(products.empty())
    {
        cout << "No products available.\n";
        return;
    }

    cout << "\n========== PRODUCTS ==========\n";

    for(const auto& product : products)
    {
        product.displayProduct();
        cout << endl;
    }
}