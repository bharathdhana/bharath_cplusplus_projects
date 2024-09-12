#include "iomanip"
#include "iostream"
using namespace std;
// Function to deposit money into the account
int deposit(double &balance, bool accountCreated) {

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
  return 0;
}
int main() {
  double balance = 30000.0;
  bool accountCreated = true;
  cout << "Deposit Status:" << endl;
  cout << deposit(balance, accountCreated);
}