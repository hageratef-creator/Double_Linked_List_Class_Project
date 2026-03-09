# Double Linked List & Data Structures Implementation Project

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Data Structures](https://img.shields.io/badge/Data%20Structures-Linked%20List%20%7C%20Dynamic%20Array%20%7C%20Stack%20%7C%20Queue-green)
![OOP](https://img.shields.io/badge/Paradigm-OOP-orange)
![Status](https://img.shields.io/badge/Status-Learning%20Project-brightgreen)

---

## Overview
This project is a practical implementation from the **Data Structures course** and represents **Level 1 of Data Structures applications** within **Course 13 of the Programming Roadmap** designed by Dr. Mohammed Abu-Hadhoud.

The goal of this project is to build fundamental data structures from scratch using **C++**, focusing on understanding how these structures work internally rather than relying on built-in libraries.

---

## Project Idea
The project demonstrates how complex data structures can be built step by step starting from foundational structures and then building higher-level abstractions on top of them.

### 1. Doubly Linked List
- Implemented completely from scratch as a reusable class.
- Supports insertion, deletion, traversal, and searching operations.
- Demonstrates how nodes are connected using **previous** and **next** pointers.

### 2. Queue Implementation
- Built using the **Doubly Linked List** class.
- Demonstrates the **FIFO (First In, First Out)** principle.

### 3. Stack Implementation
- Built on top of the existing structure.
- Demonstrates the **LIFO (Last In, First Out)** principle.

This layered design highlights the importance of **abstraction, modular design, and code reusability**.

---

## New Additions (Dynamic Array Based Structures)

As part of expanding this project and deepening my understanding of **Data Structures**, I added new implementations based on a custom **Dynamic Array**.

### 1. `clsMyDynamicArr`
A custom **dynamic array implementation** created from scratch.

Features include:
- Dynamic memory allocation
- Flexible resizing
- Basic array manipulation operations

This class serves as a **foundation for building higher-level data structures**.

### 2. `clsMyQueueArr`
A **Queue implementation based on the dynamic array**.

- Maintains the **FIFO (First In, First Out)** behavior.
- Uses `clsMyDynamicArr` internally to store and manage elements.

### 3. `clsMyStackArr`
A **Stack implementation built on top of the array-based structure**.

- Demonstrates the **LIFO (Last In, First Out)** principle.
- Reuses previously implemented structures to show how complex systems can be layered.

These implementations demonstrate how **advanced data structures can be built by composing simpler ones**.

---

## Features
- Implementation of **Doubly Linked List from scratch**
- Custom **Dynamic Array implementation**
- Queue built using **Linked List**
- Queue built using **Dynamic Array**
- Stack built using **existing data structures**
- Clean **Object-Oriented Design**
- Reusable and modular data structure classes

---

## Concepts Covered
- Doubly Linked Lists
- Dynamic Arrays
- Stack (LIFO)
- Queue (FIFO)
- Object-Oriented Programming (OOP)
- Data Abstraction
- Code Reusability
- Layered Data Structure Design

---

## Project Structure

Double_Linked_List_Class_Project
│
├── clsDblLinkedList.h # Doubly Linked List implementation
├── clsMyQueue.h # Queue implementation using Doubly Linked List
├── clsMyStack.h # Stack implementation using Doubly Linked List
│
├── clsMyDynamicArr.h # Custom Dynamic Array implementation
├── clsMyQueueArr.h # Queue implementation based on Dynamic Array
├── clsMyStackArr.h # Stack implementation based on Dynamic Array
│
├── main.cpp # Main program to test and demonstrate all structures
│
└── README.md # Project documentation


This structure separates **Linked List based** and **Array based** implementations to improve **readability, modularity, and maintainability**.

---

## Learning Purpose

The purpose of this project is to strengthen my understanding of **Data Structures implementation in C++** by building them manually from scratch instead of relying on built-in libraries.

Through this project, I focused on:

- Understanding how fundamental data structures work internally
- Practicing **Object-Oriented Programming (OOP)** in real implementations
- Building complex data structures by composing simpler ones
- Improving code organization, abstraction, and reusability
- Strengthening problem-solving and algorithmic thinking

This project is a **practical application of Course 13 (Data Structures)** in the programming roadmap designed by **Dr. Mohammed Abu-Hadhoud**, where the goal is to implement core data structures manually to gain a deeper understanding of how they work internally.

---

## Key Learning Outcome
Through this project I practiced:

- Designing reusable **data structure classes**
- Understanding **memory management**
- Building complex structures **on top of simpler ones**
- Applying **Object-Oriented Programming principles** to data structures

---

⭐ This project represents an important milestone in my journey toward mastering **Data Structures and Algorithms in C++**.
