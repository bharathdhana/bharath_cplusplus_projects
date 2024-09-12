#include <iomanip>
#include <iostream>
using namespace std;

void createAccount(string &name, string &email, string &accountNumber,
                   string &phoneNumber, double &balance,
                   bool &accountCreated){};
int main() {
  bool accountCreated = true;
  if (accountCreated) {
    double amount, balance = 25000.0;
    cout << "\nEnter the amount to withdraw:$";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
      balance = balance - amount;
      cout << "\nWithdrawal successful. Your new balance is: $" << fixed
           << setprecision(2) << balance << endl;
    } else {
      cout << "\nInvalid amount or insufficient funds. Withdrawal failed.\n";
    }
  } else {
    cout << "\nNo account exists. Please create an account first.\n";
  }
}