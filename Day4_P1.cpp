#include "iomanip"
#include "iostream"
using namespace std;

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

  } else
    cout << "\nNo account exists. Please create an account first.\n";
}
int main() {
  checkBalance("John Doe", "qpmzj@example.com", "123456789", "555-1234",
               1000.00, true);
}