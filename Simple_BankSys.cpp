#include <iostream>
using namespace std;

class Account {
protected:
  int acc_no;
  string name;
  double balance;
  void getData() {
    cout << "\nEnter the account number: ";
    cin >> acc_no;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the balance: ";
    cin >> balance;
  }
};

class Withdraw : public Account {
public:
  void withdraw() {
    getData();
    cout << "Withdrawal amount: ";
    double amount;
    cin >> amount;
    if (balance < amount) {
      cout << "Insufficient balance";

    } else {
      balance = balance - amount;
      cout << "Balance after withdrawal: " << balance << endl;
    }
  }
};

class Deposit : public Account {
public:
  void deposit() {
    getData();
    cout << "Deposit amount: ";
    double amount;
    cin >> amount;
    if (amount > 0) {
      balance = balance + amount;
      cout << "Balance after Deposit: " << balance << endl;

    } else {
      cout << "Insufficient balance";
    }
  }
};

int main() {
  Withdraw w;
  w.withdraw();
  Deposit d;
  d.deposit();
}