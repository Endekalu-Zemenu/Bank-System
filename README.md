# Bank-System

# Simple Banking System

This is a simple banking system implemented in C++ that allows users to check their balance, deposit money, and withdraw money. The system stores transaction information in a file (`transaction.xls`) and maintains the account balance in another file (`balance.txt`).

## How to Use

1. Clone the repository or download the code files.

2. Compile the code using a C++ compiler. For example:
   ```
   g++ banking_system.cpp -o banking_system
   ```

3. Run the executable file generated:
   ```
   ./banking_system
   ```

4. Follow the instructions provided by the program to interact with the banking system.

## Features

- **Check Balance**: Allows users to check their current account balance.
- **Deposit Money**: Enables users to deposit money into their account.
- **Withdraw Money**: Allows users to withdraw money from their account, provided they have sufficient balance.
- **Exit**: Terminates the program and saves the current balance to the `balance.txt` file.

## Usage Notes

- The default account number is `8888` and the default password is `2222`.
- To exit the program, enter `546` as the password.
- Transaction information is stored in the `transaction.xls` file.
- The program maintains the account balance in the `balance.txt` file.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify it as needed.

## Contribution

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
