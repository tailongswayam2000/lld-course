# Problem: The Over-Engineered Library

## Requirements Given to the Developer
1. Register a user with a name.
2. Borrow a book by ID (if available).
3. Return a book by ID.

## The Situation
A junior developer was asked to write a simple proof-of-concept for the above requirements. They wrote `library_system.cpp`. They violated KISS by adding massive class hierarchies, they violated DRY by copying lookup logic everywhere, and they violated YAGNI by adding transaction histories and templated interfaces that no one asked for.

## Your Task
Refactor `library_system.cpp`. Strip away the fat. 
- Collapse unnecessary base classes.
- Extract repeated hash map lookups.
- Delete features that aren't in the 3 core requirements.

Make it clean, readable, and simple. Use your standard `swayam/cp` build commands to test it.
