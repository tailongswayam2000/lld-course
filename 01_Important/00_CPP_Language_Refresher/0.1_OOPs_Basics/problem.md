# Exercise: The Bank Account

## Your Task
To brush up on your C++ class syntax and encapsulation, you will implement a simple `BankAccount` class.

Open `main.cpp`. The main function is already written and is testing your class, but the class itself is empty/broken.

### Requirements:
1. **Encapsulation**: The account `balance` must be completely hidden (private) from the outside world. It should be a `double`.
2. **Constructor**: The account should be initialized with an `accountNumber` (string) and an initial `balance`.
3. **Public API (Abstraction)**:
   - `void deposit(double amount)`: Adds to the balance. Only allow positive amounts.
   - `bool withdraw(double amount)`: Deducts from the balance. Only allow if amount is positive AND there are sufficient funds. Return `true` if successful, `false` otherwise.
   - `double getBalance()`: Returns the current balance.

Implement the class inside `main.cpp` so that it successfully compiles and runs against the tests in the `main()` function!
