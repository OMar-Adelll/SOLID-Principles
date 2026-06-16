# Interface Segregation Principle (ISP)

The **Interface Segregation Principle (ISP)** is one of the five SOLID principles of object-oriented design.  
It was introduced by **Robert C. Martin (Uncle Bob)**.

---

## Definition

> Clients should not be forced to depend on methods they do not use.

In simple words, a class should not be required to implement interfaces that contain methods it does not need.

---

## What Does That Mean?

Instead of creating one large interface with many methods,  
we split it into smaller and more specific interfaces.

This way, classes only implement what they actually use.

---

## Why ISP Is Important

### Reduces Unnecessary Implementation
Classes do not contain empty or unused methods.

### Improves Code Clarity
Each interface has a clear and specific purpose.

### Increases Flexibility
You can combine small interfaces in different ways.

### Makes Maintenance Easier
Changes in one interface do not affect unrelated classes.
