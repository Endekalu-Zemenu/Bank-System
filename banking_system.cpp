#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct client {
  int accountNumber;
  int accountPass;
  double initialAmount;
  double withdraw;
  double deposit;
};

void display() {
  int choice, x;

  client client1;
  //=> File to store transaction info
  fstream file;
  //=> File to read the last account balance
  fstream file2;

  //=> Transaction
  file.open("transaction.xls", ios::app);

  //=> Balance
  file2.open("balance.txt", ios::in);

  //=> Stores the last balance to x
  file2 >> x;
  
  client1.initialAmount = x;

  //=> First line for the transaction
  file << "Account balance: $" << client1.initialAmount << endl;

  file2.close();
  file2.open("balance.txt", ios::out);

  do {
    cout << "1. Check balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
      case 1:
        cout << "Your current balance is: $" << client1.initialAmount << endl;
        break;
      case 2:
        cout << "Enter your deposit amount: $";
        cin >> client1.deposit;
        client1.initialAmount = client1.initialAmount + client1.deposit;
        cout << "Deposit successful. Your new balance is: $" << client1.initialAmount << endl;
        file << "Deposit: $" << client1.deposit << "  Balance: $" << client1.initialAmount << endl;
        break;
      case 3:
        cout << "Enter withdraw amount: ";
        cin >> client1.withdraw;

        if(client1.withdraw > client1.initialAmount) {
          cout << "Withdraw failed." << endl;
        } else {
          client1.initialAmount = client1.initialAmount - client1.withdraw;
          cout << "Withdrawal successful. Your new balance is: " << client1.initialAmount << endl;
          file << "Withdraw: $" << client1.withdraw << "  Balance: $" << client1.initialAmount << endl;
        }
        break;
      case 4:
        cout << "Thank you for using our service." << endl;
        file2 << client1.initialAmount;
    }
  } while(choice != 4);
}

int main() {
  int acc, pass;
  client client1;

  client1.accountNumber = 8888;
  client1.accountPass = 2222;

  do {
    cout << "Enter your account number: ";
    cin >> acc;
    cout << "Enter your password or to exit enter 546: ";
    cin >> pass;

    if((acc == client1.accountNumber) && (pass == client1.accountPass)) {
      display();
      break;
    } else {
      cout << "Incorrect password or account number." << endl;
    }

  } while(pass != 546);


  return 0;
}
