# Evaluations

This file contains feedback on code submissions, problem-solving approaches, and exams.

*(Evaluations will be appended here as modules are completed).*

## 0.1 OOPs Basics (BankAccount)
**Result:** Passed with Distinction 🌟

**Review & Feedback:**
- **Improvements applied:**
  - ✅ Constructor member initializer list with `std::move(accNo)` correctly used.
  - ✅ Type consistency updated (`float amount`).
  - ✅ `const` qualifier properly added to `getBalance() const`.
- **Bonus C++ Gotcha (`-Wreorder`):**
  - In C++, member variables are always initialized in the order they are **declared in the class**, regardless of their order in the initializer list.
  - In your declaration: `balance` is declared before `accountNumber`. But in the initializer list, you wrote `accountNumber(...), balance(...)`.
  - To avoid undefined behavior when one member depends on another during initialization, always match the initializer list order with the declaration order:
    ```cpp
    BankAccount(string accNo, float initialBalance) 
        : balance(initialBalance), accountNumber(move(accNo)) {}
    ```

