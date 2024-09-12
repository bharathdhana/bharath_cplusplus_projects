#include <iostream>
using namespace std;

void checkBalance(string& name, string& email, string& accountNumber, string& phoneNumber, double balance, bool accountCreated) {}

int main() {
  string name, email, accountNumber, phoneNumber;
  double balance = 0;
  bool accountCreated = false;
  char choice;
  
  do {
    // displayMenu();
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case '1':
      if (!accountCreated) {
        // createAccount(name, email, accountNumber, phoneNumber, balance,
        // accountCreated);*/
      } else {  
        cout << "\nAccount already exists!\n";
      }
      break;
    case '2':
         checkBalance(name, email, accountNumber, phoneNumber, balance,
                   accountCreated);
    
      break;
    case '3':
      // deposit(balance, accountCreated);
      break;
    case '4':
      // withdraw(balance, accountCreated);
      break;
    case '5':
      /*  viewDetails(name, email, accountNumber, phoneNumber, balance,
       * accountCreated);*/
      break;
    case '6':
      if (accountCreated) {
        // deleteAccount(name, email, accountNumber, phoneNumber, balance,
        // accountCreated);
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
    break;

  } while (choice != '7');

  return 0;
}
// Fix the bug