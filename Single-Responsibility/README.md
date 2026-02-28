# Single Responsibility Principle (SRP)

The **Single Responsibility Principle** was introduced by 
**Robert C. Martin (Uncle Bob)** as part of the *Clean Code* philosophy.

It states that:

> A class should have only one responsibility and only one reason to change.

Instead of creating one large class that handles many tasks, we split the system into multiple small classes, where each class focuses on doing one specific job well.

---

## Why SRP Matters

When a class has more than one responsibility, any change in one behavior may affect the others.  
This increases bugs, makes testing harder, and reduces code clarity.

By following SRP, we reduce complexity and make the system easier to maintain and extend.

---

## Pros of Single Responsibility

### 1- Good Testing
When a class has fewer functionalities, it becomes easier to write unit tests.  
Each test focuses on one behavior only.

### 2- Lower Coupling
Each class handles one job, which reduces dependencies between different parts of the system.

### 3- Easier to Understand
A class that does one thing is easier to read, understand, and modify.
    
### 4- Organized Project Structure
Large classes are divided into smaller ones, making the project cleaner and better structured.

### 5- Better Maintainability
When requirements change, you only modify the class responsible for that specific behavior.

### 6- Improved Reusability
Small focused classes can be reused in other parts of the project without modification.

---

## Simple Example

Instead of creating one class that:

- Student class
- GPA Calculator class
- Student Printer class

We create three separate classes:

- `student`  
- `GPA_Calculator`  
- `student_printer`  

Each class has one clear responsibility.  
If the printing logic changes, we only modify `student_printer`.

---

## Summary

The Single Responsibility Principle encourages writing small, focused, and maintainable classes.  
It reduces complexity, improves clarity, and makes your software easier to scale and maintain over time.