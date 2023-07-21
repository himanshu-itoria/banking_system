#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Customer.cpp"
#include <string>

enum class AccountType {
    SAVING_ACCOUNT,
    CURRENT_ACCOUNT,
    LOAN_ACCOUNT
};

class Account {
protected:
    int accountId;
    AccountType accountType;
    Customer customer;

public:
    Account(int id, AccountType type, const Customer& cust);
    int getAccountId() const;
    AccountType getAccountType() const;
    Customer getCustomer() const;
};


Account::Account(int id, AccountType type, const Customer& cust)
    : accountId(id), accountType(type), customer(cust) {
    // Initialize other fields if needed
}

int Account::getAccountId() const {
    return accountId;
}

AccountType Account::getAccountType() const {
    return accountType;
}

Customer Account::getCustomer() const {
    return customer;
}


#endif // ACCOUNT_H
