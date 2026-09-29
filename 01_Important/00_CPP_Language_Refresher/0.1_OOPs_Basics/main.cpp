#include <iostream>
#include <string>

using namespace std;

// TODO: Implement the BankAccount class here
class BankAccount {
    // 1. Add private variables (balance, accountNumber)
   private:
    string accountNumber;
    float balance;

   public:
    // 2. Add public constructor
    BankAccount(string accNo, float initialBalance) : accountNumber(move(accNo)), balance(initialBalance) {}
    // 3. Add public methods: deposit, withdraw, getBalance
    void deposit(float amount) {
        if (amount > 0)
            this->balance += amount;
    }

    bool withdraw(float amount) {
        if (amount <= this->balance && amount > 0) {
            this->balance -= amount;
            return true;
        }
        return false;
    }

    float getBalance() const { return this->balance; }
};

// --- DO NOT MODIFY BELOW THIS LINE ---
int main() {
    // This code will not compile until you implement the class above!

    BankAccount myAccount("ACC123", 100.0);

    cout << "Initial Balance: $" << myAccount.getBalance() << endl;  // Should be 100

    myAccount.deposit(50.0);
    cout << "After $50 deposit: $" << myAccount.getBalance() << endl;  // Should be 150

    myAccount.deposit(-20.0);                                              // Should be ignored
    cout << "After invalid deposit: $" << myAccount.getBalance() << endl;  // Should be 150

    bool success = myAccount.withdraw(200.0);
    cout << "Tried to withdraw $200. Success: " << (success ? "Yes" : "No") << endl;  // Should be No

    success = myAccount.withdraw(30.0);
    cout << "Tried to withdraw $30. Success: " << (success ? "Yes" : "No") << endl;  // Should be Yes
    cout << "Final Balance: $" << myAccount.getBalance() << endl;                    // Should be 120

    return 0;
}
