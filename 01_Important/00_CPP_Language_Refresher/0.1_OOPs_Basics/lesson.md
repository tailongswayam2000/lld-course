# Module 0.1: OOPs Basics (C++)

Before we design complex systems, let's refresh the core building blocks of Object-Oriented Programming in C++.

## 1. Classes and Objects
A **class** is a blueprint. An **object** is a specific instance of that blueprint.
```cpp
class Car {
public:
    string brand;
    void honk() { cout << "Beep!" << endl; }
};

int main() {
    Car myCar; // myCar is an Object
    myCar.brand = "Toyota";
    myCar.honk();
}
```

## 2. Encapsulation
Encapsulation is the bundling of data and the methods that operate on that data, restricting direct access to some of the object's components. This prevents external code from putting the object into an invalid state.
- **`public`**: Accessible from anywhere.
- **`private`**: Accessible only from within the class itself.
- **`protected`**: Accessible within the class and its derived classes (children).

```cpp
class User {
private:
    int age; // Hidden from the outside
public:
    // Getter
    int getAge() { return age; }
    
    // Setter with validation
    void setAge(int newAge) {
        if (newAge > 0) age = newAge;
    }
};
```

## 3. Abstraction
Abstraction means hiding the complex reality while exposing only the necessary parts. You don't need to know *how* the engine works to drive a car; you just use the steering wheel and pedals.
In C++, this is often achieved using classes where the complex logic is hidden inside private methods, and only a simple public API is exposed.

## 4. Constructors and Destructors
- **Constructor (`ClassName()`)**: Called automatically when an object is created. Used to initialize state.
- **Destructor (`~ClassName()`)**: Called automatically when an object is destroyed (goes out of scope). Used to clean up resources (like closing files or freeing raw memory).

```cpp
class DatabaseConnection {
public:
    // Constructor
    DatabaseConnection() {
        cout << "Connecting to DB..." << endl;
    }
    
    // Destructor
    ~DatabaseConnection() {
        cout << "Disconnecting from DB..." << endl;
    }
};
```
