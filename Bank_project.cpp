#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Function to create an account
void createAccount(string &name, string &email, string &accountNumber,
                   string &phoneNumber, double &balance, 
bool &accountCreated) {
  cout << "\nEnter your name: ";
  cin >> name;
  cout << "Enter your email address: ";
  cin >> email;
  cout << "Enter your account number: ";
  cin >> accountNumber;
  cout << "Enter your phone number: ";
  cin >> phoneNumber;
  cout << "Enter initial balance: $";
  cin >> balance;
  accountCreated = true;
  cout << "\nAccount created successfully!\n";
}

// Function to view account details
void viewDetails(const string &name, const string &email,
                 const string &accountNumber, const string &phoneNumber,
                 double balance, bool accountCreated) {
  if (accountCreated) {
    cout << "\n*\n";
    cout << "*           Account Details              *\n";
    cout << "*\n";
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
  } else {
    cout << "\nNo account exists. Please create an account first.\n";
  }
}

// Function to check account balance
void checkBalance(const string &name, const string &email,
                  const string &accountNumber, const string &phoneNumber,
                  double balance, bool accountCreated) {
  if (accountCreated) {
    cout << "\n*\n";
    cout << "*           Account Details              *\n";
    cout << "*\n";
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
  } else {
    cout << "\nNo account exists. Please create an account first.\n";
  }
}

// Function to withdraw money from the account
void withdraw(double &balance, bool accountCreated) {
  if (accountCreated) {
    double amount;
    cout << "\nEnter the amount to withdraw: $";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "\nWithdrawal successful. Your new balance is: $" << fixed
           << setprecision(2) << balance << endl;
    } else {
      cout << "\nInvalid amount or insufficient funds. Withdrawal failed.\n";
    }
  } else {
    cout << "\nNo account exists. Please create an account first.\n";
  }
}

// Function to deposit money into the account
void deposit(double &balance, bool accountCreated) {
  if (accountCreated) {
    double amount;
    cout << "\nEnter the amount to deposit: $";
    cin >> amount;
    if (amount > 0) {
      balance += amount;
      cout << "\nDeposit successful. Your new balance is: $" << fixed
           << setprecision(2) << balance << endl;
    } else {
      cout << "\nInvalid amount. Deposit failed.\n";
    }
  } else {
    cout << "\nNo account exists. Please create an account first.\n";
  }
}

// Function to delete the account
void deleteAccount(string &name, string &email, string &accountNumber,
                   string &phoneNumber, double &balance, bool &accountCreated) {
  name = "";
  email = "";
  accountNumber = "";
  phoneNumber = "";
  balance = 0;
  accountCreated = false;
  cout << "\nAccount deleted successfully.\n";
}

// Function to display the ATM menu
void displayMenu() {
  cout << "\n*\n";
  cout << "*               ATM Menu                *\n";
  cout << "*\n";
  cout << "*  1. Create Account                    *\n";
  cout << "*  2. Check Balance                     *\n";
  cout << "*  3. Deposit                           *\n";
  cout << "*  4. Withdraw                          *\n";
  cout << "*  5. View Account Details              *\n";
  cout << "*  6. Delete Account                    *\n";
  cout << "*  7. Exit                              *\n";
  cout << "*\n";
}

int main() {
  string name, email, accountNumber, phoneNumber;
  double balance = 0;
  bool accountCreated = false;
  char choice;

  do {
    displayMenu();
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case '1':
      if (!accountCreated) {
        createAccount(name, email, accountNumber, phoneNumber, balance,
                      accountCreated);
      } else {
        cout << "\nAccount already exists!\n";
      }
      break;
    case '2':
      checkBalance(name, email, accountNumber, phoneNumber, balance,
                   accountCreated);
      break;
    case '3':
      deposit(balance, accountCreated);
      break;
    case '4':
      withdraw(balance, accountCreated);
      break;
    case '5':
      viewDetails(name, email, accountNumber, phoneNumber, balance,
                  accountCreated); // Changed to viewDetails
      break;
    case '6':
      if (accountCreated) {
        deleteAccount(name, email, accountNumber, phoneNumber, balance,
                      accountCreated);
      } else {
        cout << "\nNo account exists. Please create an account first.\n";
      }
      break;
    case '7':
      cout << "\nExiting program. Goodbye!\n";
      break;
    default:
      cout << "\nInvalid choice. Please try again.\n";
    }
  } while (choice != '7');
  return 0;
}