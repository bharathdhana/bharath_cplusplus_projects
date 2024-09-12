#include <ctime>
#include <iomanip>
#include <iostream>    
#include <vector>
using namespace std;

class BankAccount {
public:
  string accountNumber;
  string accountHolderName;
  double balance;

public:
  BankAccount(const string &name) : accountHolderName(name), balance(0) {

    accountNumber = to_string(time(0));
  }

  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Deposit successful. New balance: " << balance << "\n";
    } else {
      cout << "Invalid deposit amount.\n";
    }
  }

  virtual void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "Withdrawal successful. New balance: " << balance << "\n";
    } else {
      cout << "Invalid withdrawal amount or insufficient funds.\n";
    }
  }

  double getBalance() const { return balance; }

  virtual void displayAccountDetails() const {
    cout << "Account Number: " << accountNumber << "\n";
    cout << "Account Holder: " << accountHolderName << "\n";
    cout << "Balance: " << balance << "\n";
  }

  string getAccountNumber() const { return accountNumber; }
};

class CheckingAccount : public BankAccount {
private:
  double overdraftLimit;

public:
  CheckingAccount(const string &name, double limit)
      : BankAccount(name), overdraftLimit(limit) {}

  void withdraw(double amount) override {
    if (amount > 0 && (balance + overdraftLimit) >= amount) {
      balance -= amount;
      cout << "Withdrawal successful. New balance: " << balance << "\n";
    } else {
      cout << "Invalid withdrawal amount or over overdraft limit.\n";
    }
  }

  void displayAccountDetails() const override {
    BankAccount::displayAccountDetails();
    cout << "Overdraft Limit: " << overdraftLimit << "\n";
  }
};

class SavingsAccount : public BankAccount {
private:
  double interestRate;
  int compoundFrequency;

public:
  SavingsAccount(const string &name, double rate, int frequency)
      : BankAccount(name), interestRate(rate), compoundFrequency(frequency) {}

  void addInterest() {
    double interest = balance * (interestRate / 100) / compoundFrequency;
    balance += interest;
  }

  void displayAccountDetails() const override {
    BankAccount::displayAccountDetails();
    cout << "Interest Rate: " << interestRate << "%\n";
    cout << "Compound Frequency: " << compoundFrequency << " times/year\n";
  }
};

class Bank {
private:
  vector<BankAccount *> accounts;

public:
  void createAccount() {
    string name;
    int type;
    double initialDeposit, overdraftLimit;
    double interestRate;
    int compoundFrequency;

    cout << "Enter account holder name: ";
    cin >> name;
    cout << "Enter initial deposit amount: ";
    cin >> initialDeposit;
    cout << "Select account type (1: Checking, 2: Savings): ";
    cin >> type;

    if (type == 1) {
      cout << "Enter overdraft limit: ";
      cin >> overdraftLimit;
      accounts.push_back(new CheckingAccount(name, overdraftLimit));
    } else if (type == 2) {
      cout << "Enter interest rate (%): ";
      cin >> interestRate;
      cout << "Enter compound frequency (times/year): ";
      cin >> compoundFrequency;
      accounts.push_back(
          new SavingsAccount(name, interestRate, compoundFrequency));
    }

    accounts.back()->deposit(initialDeposit);
  }

  BankAccount *findAccount(const string &accountNumber) {
    for (auto account : accounts) {
      if (account->getAccountNumber() == accountNumber) {
        return account;
      }
    }
    return nullptr;
  }

  void deposit(const string &accountNumber, double amount) {
    BankAccount *account = findAccount(accountNumber);
    if (account) {
      account->deposit(amount);
    } else {
      cout << "Account not found.\n";
    }
  }

  void withdraw(const string &accountNumber, double amount) {
    BankAccount *account = findAccount(accountNumber);
    if (account) {
      account->withdraw(amount);
    } else {
      cout << "Account not found.\n";
    }
  }

  void displayAccountDetails(const string &accountNumber) {
    BankAccount *account = findAccount(accountNumber);
    if (account) {
      account->displayAccountDetails();
    } else {
      cout << "Account not found.\n";
    }
  }
};

int main() {
  Bank bank;
  int choice;
  string accountNumber;
  double amount;

  while (true) {
    cout << "\nBank Management System\n";
    cout << "1. Create Account\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Display Account Details\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      bank.createAccount();
      break;
    case 2:
      cout << "Enter account number: ";
      cin >> accountNumber;
      cout << "Enter deposit amount: ";
      cin >> amount;
      bank.deposit(accountNumber, amount);
      break;
    case 3:
      cout << "Enter account number: ";
      cin >> accountNumber;
      cout << "Enter withdrawal amount: ";
      cin >> amount;
      bank.withdraw(accountNumber, amount);
      break;
    case 4:
      cout << "Enter account number: ";
      cin >> accountNumber;
      bank.displayAccountDetails(accountNumber);
      break;
    case 5:
      return 0;
    default:
      cout << "Invalid choice.\n";
    }
  }

  return 0;
}