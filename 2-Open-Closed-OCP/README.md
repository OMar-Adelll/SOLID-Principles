# Open/Closed Principle (OCP)

## Definition

> **Software entities (classes, modules, functions) should be _open for extension_ but _closed for modification_.**

This principle was introduced by **Bertrand Meyer** and is one of the SOLID principles of object-oriented design.

---

## What Does That Mean?

### Open for Extension
You can add new behavior or features to the system.

### Closed for Modification
You should not change existing, tested, and working code.

Instead of editing old code, you extend it using techniques like inheritance, interfaces, or composition.

---

## Why Is OCP Important?

### Prevents Breaking Existing Features
Modifying old code may introduce unexpected bugs. OCP reduces that risk.

### Easier Maintenance
Stable code remains untouched, which makes the system safer to maintain.

### Reduces Bugs
New requirements are added without changing proven logic.

### Supports Scalability
The system becomes easier to expand as requirements grow.

---

## Simple Idea Example

Instead of modifying a class every time we add a new payment method:

- Cash  
- Credit Card  
- PayPal  

We create a common interface like `PaymentMethod` and implement new classes for each method.

When a new payment type is needed, we just add a new class without changing the existing ones.

---

## Summary

The Open/Closed Principle helps build flexible, stable, and scalable systems.  
It encourages extending behavior without modifying existing, reliable code.