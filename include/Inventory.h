#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <string>
#include "Product.h"

class Inventory
{
private:
    std::vector<Product>& products;

public:
    Inventory(std::vector<Product>& products);

    void addProduct(const Product& product);
    void removeProduct(int id);
    void updateProduct(int id);
    void searchProduct(const std::string& keyword) const;
    void displayProducts() const;
};

#endif