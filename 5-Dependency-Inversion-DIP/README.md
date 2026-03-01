# Dependency Inversion Principle (DIP)

The **Dependency Inversion Principle (DIP)** is one of the five SOLID principles of object-oriented design.  
It was introduced by **Robert C. Martin (Uncle Bob)**.

---

## Definition

> High-level modules should not depend on low-level modules.  
> Both should depend on abstractions.  
> Abstractions should not depend on details.  
> Details should depend on abstractions.

---

## What Does That Mean?

High-level modules contain the core business logic of the application.  
Low-level modules handle specific details like databases, files, APIs, or frameworks.

Instead of high-level classes directly depending on concrete implementations, both high-level and low-level parts should depend on abstractions (like interfaces).

This way, implementation details can change without affecting the main logic of the system.

---

## Why DIP Is Important

### Reduces Tight Coupling
Classes are not strongly connected to specific implementations.

### Improves Flexibility
You can replace one implementation with another without modifying high-level logic.

### Makes Testing Easier
It becomes simple to replace real implementations with mock objects during testing.

### Supports Clean Architecture
The core logic of the application remains independent from external tools and frameworks.

---

## Simply Put

The important part of your system should not depend on the small details.  
Instead, both should communicate through abstractions.

---

## Summary

The Dependency Inversion Principle helps build flexible, maintainable, and scalable systems.  
It protects your core logic from being tightly coupled to implementation details.