# Liskov Substitution Principle (LSP)

The **Liskov Substitution Principle (LSP)** is one of the five SOLID principles of object-oriented design.  
It was introduced by **Barbara Liskov** and defines a fundamental rule for safe and correct inheritance.

---

## Definition

> If a class `S` is a subclass of class `T`, then objects of type `T` should be replaceable with objects of type `S` without affecting the correctness of the program.

In other words, a derived class must be usable anywhere its base class is expected, without causing errors or unexpected behavior.

---

## Purpose of the Principle

The main goal of LSP is to ensure that inheritance is used correctly and that polymorphism works as intended.

When LSP is respected:

- Client code that depends on a base class does not need to change.
- New derived classes can be introduced safely.
- The system remains stable and predictable.

---

## Simply Put

If the parent class is expected in a certain place, the child class should be able to replace it and perform correctly without breaking anything.

In simple words:

> If the parent class is not available, the child class should be able to take its place and do everything properly without any negative side effects.

---

## Why LSP Is Important

- Prevents unexpected runtime errors  
- Ensures correct behavior in inheritance  
- Keeps polymorphism reliable  
- Improves code stability and maintainability  

---

## Summary

The Liskov Substitution Principle ensures that subclasses behave properly when used as their parent type.  
It guarantees safe inheritance and protects your system from hidden logical errors caused by incorrect overrides.