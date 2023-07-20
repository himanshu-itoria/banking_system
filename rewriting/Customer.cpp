#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string phoneNumber;
    std::string address;

public:
    Customer(const std::string& fName, const std::string& lName, const std::string& email, const std::string& phone, const std::string& addr);

    // Getters for the fields
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getEmail() const;
    std::string getPhoneNumber() const;
    std::string getAddress() const;
};



Customer::Customer(const std::string& fName, const std::string& lName, const std::string& email, const std::string& phone, const std::string& addr)
    : firstName(fName), lastName(lName), email(email), phoneNumber(phone), address(addr) {
    
}

std::string Customer::getFirstName() const {
    return firstName;
}

std::string Customer::getLastName() const {
    return lastName;
}

std::string Customer::getEmail() const {
    return email;
}

std::string Customer::getPhoneNumber() const {
    return phoneNumber;
}

std::string Customer::getAddress() const {
    return address;
}


#endif 
