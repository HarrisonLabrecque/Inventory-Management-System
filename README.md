# Inventory Management System

## Description

The **Inventory Management System** is a C++ console-based application designed to manage products, suppliers, categories, and users.

The program uses **Object-Oriented Programming (OOP)** and **file handling** to create a simple database system. Information can be added, viewed, updated, deleted, saved, and loaded using text files.

This project was created to practice C++ classes, CRUD operations, vectors, file I/O, and multi-file project organization.

---

## Features

### Product Management

* Add a product
* Display all products
* Search for a product
* Update product information
* Delete a product
* Track product quantity
* Assign products to categories

### Supplier Management

* Add a supplier
* Display suppliers
* Delete a supplier
* Store supplier contact information

### Category Management

* Add a category
* Display categories
* Delete categories

### User Management

* Add users
* Display users
* Delete users
* Store usernames, passwords, and roles
* User login functionality

### Database Management

* Save information to text files
* Load information from text files
* Maintain product, supplier, category, and user data

---

## Technologies Used

* **C++**
* **C++17**
* **Object-Oriented Programming**
* **STL Vectors**
* **File Input/Output**
* **VS Code**
* **MSYS2 UCRT64**
* **G++**
* **GDB**

---

## Classes

The project contains the following main classes:

### Product

Stores information about an inventory product.

```text
Product ID
Name
Price
Quantity
Category ID
```

### Supplier

Stores supplier information.

```text
Supplier ID
Name
Phone
Email
Address
```

### Category

Stores product category information.

```text
Category ID
Category Name
```

### User

Stores information about system users.

```text
User ID
Username
Password
Role
```

The `User` class also includes a login function.

### Inventory

Handles product management and CRUD operations.

```text
Add Product
Remove Product
Update Product
Search Product
Display Products
```

### Database

Acts as the main data storage manager.

It maintains collections of:

```text
Products
Suppliers
Categories
Users
```

The `Database` class works with the `FileManager` class to save and load information.

### FileManager

Handles file input and output.

The following files are used to store information:

```text
products.txt
suppliers.txt
categories.txt
users.txt
```

---

## CRUD Operations

The system uses CRUD operations to manage inventory data.

| Operation | Function                            |
| --------- | ----------------------------------- |
| Create    | Add new records                     |
| Read      | Display and search records          |
| Update    | Modify existing product information |
| Delete    | Remove records                      |

---

## Project Structure

```text
Inventory Management System/
│
├── main.cpp
│
├── include/
│   ├── Product.h
│   ├── Supplier.h
│   ├── Category.h
│   ├── User.h
│   ├── Inventory.h
│   ├── Database.h
│   └── FileManager.h
│
├── src/
│   ├── Product.cpp
│   ├── Supplier.cpp
│   ├── Category.cpp
│   ├── User.cpp
│   ├── Inventory.cpp
│   ├── Database.cpp
│   └── FileManager.cpp
│
├── data/
│   ├── products.txt
│   ├── suppliers.txt
│   ├── categories.txt
│   └── users.txt
│
└── .vscode/
    ├── tasks.json
    └── launch.json
```

---

## How to Compile

The project uses **G++ with C++17**.

From the project directory, run:

```powershell
C:\msys64\ucrt64\bin\g++.exe -std=c++17 -g -I".\include" ".\main.cpp" ".\src\Product.cpp" ".\src\Supplier.cpp" ".\src\Category.cpp" ".\src\User.cpp" ".\src\Inventory.cpp" ".\src\Database.cpp" ".\src\FileManager.cpp" -o ".\InventoryManagementSystem.exe"
```

---

## How to Run

After compiling the program, run:

```powershell
.\InventoryManagementSystem.exe
```

The main menu will appear:

```text
============================================
       INVENTORY MANAGEMENT SYSTEM
============================================
1. Product Management
2. Supplier Management
3. Category Management
4. User Management
5. Save Database
6. Load Database
0. Exit
============================================
Enter choice:
```

---

## VS Code Build

The project includes a `tasks.json` file for automatically compiling the program.

To build the project:

```text
Ctrl + Shift + B
```

Select:

```text
Build Inventory Management System
```

To run the debugger:

```text
F5
```

The program uses **GDB** for debugging.

---

## File Storage

The program uses text files as a simple database.

### Products

```text
data/products.txt
```

Example:

```text
101,Laptop,899.99,10,1
102,Keyboard,49.99,25,2
```

### Suppliers

```text
data/suppliers.txt
```

Example:

```text
201,ABC Supplies,555-1234,supplier@email.com,123 Main Street
```

### Categories

```text
data/categories.txt
```

Example:

```text
1,Electronics
2,Accessories
```

### Users

```text
data/users.txt
```

Example:

```text
1,admin,password,Administrator
```

---

## Program Design

The program separates responsibilities between multiple classes.

```text
                 main.cpp
                    |
              Main Menu
                    |
       +------------+------------+
       |            |            |
    Inventory    Database      User
       |            |
    Products   +----+----+-------+
               |    |    |
            Product Supplier
               |
           Category
               |
         FileManager
               |
          Text Files
```

This structure keeps the program organized and makes it easier to maintain and expand.

---

## Learning Objectives

This project demonstrates:

* C++ classes and objects
* Encapsulation
* Constructors
* Getters and setters
* Vectors
* CRUD operations
* File input/output
* Data persistence
* Multi-file C++ projects
* Header and source files
* Functions
* Menus
* Basic database design
* VS Code build configuration
* GDB debugging

---

## Future Improvements

Possible improvements include:

* Add complete login authentication
* Add role-based permissions
* Add low-stock warnings
* Add supplier/product relationships
* Add inventory reports
* Add product sorting
* Add input validation
* Add transaction history
* Replace text files with an SQL database
* Create a graphical user interface

---

## Author

**Harrison Labrecque**

C++ Inventory Management System
