#ifndef USER_H
#define USER_H

#include <string>

class User
{
    private:

        int userID;
        std::string username;
        std::string password;
        std::string role;
    
    public:
        User();

        User(int id, std::string username,
        std::string password,
        std::string role);

        bool login(std::string username, std::string password);
        
        //setter method   
        void setUserID(int id);
        void setUserName(std::string username);
        void setPassword(std::string password);
        void setRole(std::string role);


        //getter method
        int getUserID() const;
        std::string getUserName() const;
        std::string getPassword() const;
        std::string getRole() const;




        void displayUser() const;
};


#endif