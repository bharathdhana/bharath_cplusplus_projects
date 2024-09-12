#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void createAccount(string &name, string &email, string &accountNumber,
                   string &phoneNumber, double &balance, bool &accountCreated) {
  cout << "\nEnter your name: ";
  cin >> name;
  cout << "\nEnter your email address: ";
  cin >> email;
  cout << "\nEnter your account number: ";
  cin >> accountNumber;
  cout << "\nEnter your phone number: ";
  cin >> phoneNumber;
  cout << "\nEnter initial balance: $";
  cin >> balance;
  accountCreated = true;
  cout << "\nAccount created successfully!\n";
};
int main() {
  string name, email, accountNumber, phoneNumber;
  bool accountCreated = true;
  double balance;
  createAccount(name, email, accountNumber, phoneNumber, balance,
                accountCreated);
  return 0;
}
