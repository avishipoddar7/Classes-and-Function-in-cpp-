
# 📚 C++ Object-Oriented Programming (OOP) Examples  

This repository contains a collection of **simple yet powerful C++ programs** designed to introduce and demonstrate the **fundamental concepts of Object-Oriented Programming (OOP)**.  

Each file focuses on a **specific principle** of OOP, providing clear, practical, and beginner-friendly examples. These programs are great for students, educators, or anyone looking to strengthen their understanding of OOP in C++.  

---

## 🔑 What are Classes and Objects?  

- **Class**: A class is a **blueprint** or **template** for creating objects.  
  It defines properties (data/attributes) and behaviors (methods/functions) that the objects will have.  

  👉 Example: A `Car` class may define attributes like `brand`, `model`, and `year`, and behaviors like `drive()` or `brake()`.  

- **Object**: An object is an **instance** of a class.  
  It represents a real-world entity created using the class blueprint, with its own **unique data**.  

  👉 Example: A `Car` object could be `"Tesla Model S, 2024"` which is one specific instance of the `Car` class.  

Together, **classes** provide the structure, and **objects** bring them to life.  

---

## 📂 Programs Included  

### 🔹 `exp11a.cc` → **The Student Class**  
- Introduces the **basic structure of a class and object**.  
- Defines a `Student` class with public member variables (`name`, `branch`, `result`).  
- Demonstrates how to **create an object, assign values, and access properties**.  

---

### 🔹 `exp11b.cc` → **Managing Car Data with Object Arrays**  
- Explains how to use **arrays of objects**.  
- Defines a `Car` class and manages multiple car records using a **dynamic array of objects**.  
- Prompts the user for car details, stores them, and displays the list.  
- Demonstrates **handling multiple instances of a class efficiently**.  

---

### 🔹 `exp11c.cc` → **Constructors and Object Initialization**  
- Highlights the use of **constructors** in C++.  
- Defines a `Box` (or `Area`) class whose constructor takes dimensions and **immediately calculates volume**.  
- Ensures objects are always **initialized with valid data** at the time of creation.  

---

### 🔹 `exp11d.cc` → **A Simple Calculator with Methods**  
- Demonstrates **methods (functions inside a class)**.  
- The `Calculator` class includes operations like **addition, subtraction, multiplication, and division**.  
- Provides a **menu-driven program** that allows the user to perform calculations interactively.  
- Shows how **object behavior is defined by methods**.  

---

### 🔹 `exp11e.cc` → **Defining Methods Outside a Class**  
- Explores the flexibility of **defining class methods outside the class declaration**.  
- Defines a `Reverse` class with two methods:  
  - `inputArray()` → accepts user input.  
  - `reverseArray()` → prints the array in reverse order.  
- Separates **class interface** (declaration) from **implementation**, following good programming practices.  

---

## 🎯 Key Learning Outcomes  

By exploring these examples, you will:  
✔ Understand how to **define and instantiate classes and objects**.  
✔ Learn to manage **collections of objects** using arrays.  
✔ Use **constructors** for clean and safe object initialization.  
✔ Implement **methods to define object behavior**.  
✔ Practice separating **class definitions from method implementations**.  

---

## 🚀 Repository Structure  

cpp-oop-examples/
│── README.md # Project documentation
│── exp11a.cc # The Student Class
│── exp11b.cc # Managing Car Data with Object Arrays
│── exp11c.cc # Constructors and Object Initialization
│── exp11d.cc # Calculator with Methods
│── exp11e.cc # Defining Methods Outside a Class

---

