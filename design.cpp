// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <string>
// #include <cstdlib>



// using namespace std;

// enum class ac_type{
//     saving,
//     current,
//     loan
// };

// enum class loan_type{
//     home,
//     car,
//     personal,
//     business
// };





// class customer{
// private:
//     string name;
//     string last_name;
//     string address;
//     string phone_no;
//     string email_address;

// public:
//     customer (const string &name,const string &last_name, const string &address,const string &phone_no, const string &email_address)
//     : name(name), last_name(last_name), address(address), phone_no(phone_no), email_address(email_address){}

//     string firstName()
//     {
//         return name;
//     }

// };

// class cust_info{
//     private:
//     vector<customer> customer;
//     unordered_map<string, ac_type> accounts;
//     int customerIdCounter = 1;

//     int getCustomerId(const string& name) {
//         int num = 1;
//         for (char c :name) {
//             num = num * 2 + c - 'A' + 1;
//         }
//         return num;
//     }

//     void printPassbook(const string& accountNumber) {
    
//     }

//     double getMonthlyProfitLoss() {
        
//         return 0.0;
//     }

//     double getTotalLoanAmount() {
    
//         return 0.0;
//     }
// };
// class Account {
// private:
//     string accountNumber;
//     ac_type type;
//     double balance;
//     cust_info customer;

    
//     double calculateInterest(double balance, double interestRate) {
//         return balance * (interestRate / 100.0) / 12;
//     }

// public:
//     Account(const std::string& accountNumber, ac_type type, const cust_info& customer, double initialBalance)
//         : accountNumber(accountNumber), type(type), customer(customer), balance(initialBalance) {}

//     string getAccountNumber() const {
//         int a = rand();
//         return to_string(a);
//         //return accountNumber;
//     }

//     ac_type getAccountType() const {
//         return type;
//     }

//     double getBalance() const {
//         return balance;
//     }

//     cust_info getCustomer() const {
//         return customer;
//     }

   
//     void deposit(double amount) {
//         balance += amount;
//     }

    
//     bool withdraw(double amount) {
       
//         return false;
//     }

    
//     double calculateLoanInterest(double interestRate) {
        
//         return 0.0;
//     }
// };






// int main()
// {
//     cout << "Welcome to Inito Services";

//     return 0;
// }
