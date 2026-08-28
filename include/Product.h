#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
private:
    int productID;
    std::string name;
    double price;
    int quantity;
    int categoryID;

public:
    // Constructors
    Product();
    Product(int id,
            std::string name,
            double price,
            int quantity,
            int categoryID);

    // Setters
    void setProductID(int id);
    void setName(std::string name);
    void setPrice(double price);
    void setQuantity(int quantity);
    void setCategoryID(int id);

    // Getters
    int getProductID() const;
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
    int getCategoryID() const;

    // Display
    void displayProduct() const;
};

#endif