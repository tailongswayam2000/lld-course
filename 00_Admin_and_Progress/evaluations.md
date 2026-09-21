# Evaluations

This file contains feedback on code submissions, problem-solving approaches, and exams.

*(Evaluations will be appended here as modules are completed).*

## 0.1 OOPs Basics (BankAccount)
**Result:** Did not compile ❌

**Feedback:**
1. **Access Modifiers:** In C++, `class` members default to `private`! Because you didn't add the `public:` keyword before your constructor, the compiler treated the constructor, `deposit`, `withdraw`, and `getBalance` as private, which is why `main()` couldn't access them.
2. **Missing Return Statements:** Your `withdraw()` method promises to return a `bool`, but you forgot to actually `return true;` or `return false;`. This causes undefined behavior in C++.
3. **Data Types:** The requirement asked for `amount` to be a `double`, but you used `int` for `deposit(int amount)` and `withdraw(int amount)`. While it works, it truncates decimal deposits!

Try adding the `public:` keyword, fixing the return statements in `withdraw`, and changing `amount` to `double`. Then compile again!
