#ifndef CATEGORY_H
#define CATEGORY_H


#include <string>

class Category
{
    private:
        int categoryID;
        std::string categoryName;

    public:
        Category();
        Category(int id, std::string name);

        void setCategoryID(int id);
        void setCategoryName(std::string);

        int getCategoryID() const;
        std::string getCategoryName() const;

        void displayCategory() const;

};

#endif