#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

class Supplier
{
    private:
        int supplierID;
        std::string name;
        std::string phone;
        std::string email;
        std::string address;


    public:

        Supplier();

        Supplier(int id, std::string name, std::string phone, std::string email, std::string address);

        //setter methods
        void setSupplierID(int id);
        void setName(std::string name);
        void setPhone(std::string phone);
        void setEmail(std::string email);
        void setAddress(std::string address);


        //getter methods
        int getSupplierID() const;
        std::string getName() const;
        std::string getPhone() const;
        std::string getEmail() const;
        std::string getAddress() const;


        // Display supplier information
        void displaySupplier() const;



};

#endif