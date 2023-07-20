#include <iostream>
#include <string>
#include <vector>
#include "Customer.cpp"

enum class AccountType {
    SAVING_ACCOUNT,
    CURRENT_ACCOUNT,
    LOAN_ACCOUNT
};


enum class LoanType {
    HOME_LOAN,
    CAR_LOAN,
    PERSONAL_LOAN,
    BUSINESS_LOAN
};





class Account {
protected:
    int accountId;
    AccountType accountType;
    Customer customer;


public:
    Account(int id, AccountType type, const Customer& cust);
    int getAccountId();
    AccountType getAccountType();
    Customer getCustomer();

};


class SavingAccount : public Account {
private:
    double balance;
    int transactionCount;
   

public:
    SavingAccount(int id, const Customer& cust);
    double getBalance();
    int getTransactionCount();

};


class CurrentAccount : public Account {
private:
    double balance;
    int transactionCount;
   

public:
    CurrentAccount(int id, const Customer& cust);
    double getBalance();
    int getTransactionCount();

};


class LoanAccount {
private:
    int loanAccountId;
    LoanType loanType;
    Account* associatedAccount;


public:
    LoanAccount(int id, LoanType type, Account* account);
    int getLoanAccountId();
    LoanType getLoanType();
    Account* getAssociatedAccount();

};


class BankingSystem {
private:
    std::vector<Customer> customers;
    std::vector<Account*> accounts;
    std::vector<LoanAccount> loanAccounts;


public:
    
    void openSavingAccount(const Customer& cust);
    void openCurrentAccount(const Customer& cust);
    void openLoanAccount(const Customer& cust, LoanType type, int associatedAccountId);

   
    void printPassbook(int accountId);
    double getMonthlyProfitLoss();
    double getTotalLoanAmount();


    std::string getCustomerFirstNameFromAccountNumber(int accountNumber);
};
