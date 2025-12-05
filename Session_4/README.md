# 🧩 Session 04 — Algorithm Exercises & Introduction to C++ Development Tools

This session included:
- a brief review of what an algorithm is,
- why flowcharts are useful,
- answering students’ questions from the previous session,
- several interactive problem-solving activities,
- and an introduction to the tools required for writing and running C++ programs.

---

## 🔁 1. Quick Recap

The session began with a short recap of:
- the definition of an **algorithm**,  
- the purpose of using **flowcharts** to visualize logic,  
- and clarifying any questions students had from Session 03.

The goal was to reinforce conceptual understanding before moving to new exercises.

---

## 🧠 2. In-Class Interactive Algorithm Exercises

These problems were solved **collaboratively** with students.  
The focus was on reasoning and understanding algorithmic structure rather than just giving solutions.  
Students participated in designing the steps and identifying patterns.

---

### ✅ Exercise 1 — Greatest Common Divisor (GCD)
Write an algorithm that reads two numbers and computes their **GCD**.  
The **Euclidean Algorithm** was explained to illustrate how repeated remainders lead to the solution.

---

### ✅ Exercise 2 — Reverse a Number
Write an algorithm that reads a number and prints its **reverse** (digit order reversed).  
Students practiced identifying how division and modulo operations extract digits.

---

### ✅ Exercise 3 — Check if a Number Is Palindromic
Write an algorithm that checks whether the input number is **symmetric** (palindrome).  
This was solved using the logic developed in the previous exercise (reversing the number).

---

### ✅ Exercise 4 — Compute a^b Without Using the Power Operator
Write an algorithm that reads **a** and **b** and computes **a to the power of b** using repeated multiplication.  
The goal was to recognize iterative patterns and loop-based computation.

---

## 🖥️ 3. Introduction to C++ Development Requirements

At the end of the session, the following question was addressed:

### **“What do we need to write and run a C++ program?”**

Students learned that three components are required:

1. **A code editor** — a place to write the program.  
2. **A compiler** — explained as the tool that translates C++ into machine code.  
3. **An environment for running and debugging programs** — error messages, build tools, output window, etc.

These three needs are all provided together in an **IDE (Integrated Development Environment)**.

---

## 🧰 4. Overview of Popular C++ IDEs

The following IDEs were introduced, along with their pros and cons:

- **Visual Studio** — powerful but heavy, Windows-only.  
- **VS Code** — lightweight, extensible, needs manual configuration.  
- **CLion** — very powerful, but paid.  
- **Code::Blocks** — lightweight, free, simple, easy to install.

### Why Code::Blocks Was Chosen
Because it is:
- free,  
- complete,  
- beginner-friendly,  
- easy to configure,  
- includes everything needed for class exercises.

---

## ⚙️ 5. What Is MinGW?

MinGW was explained as:
- a **Windows port of GCC (GNU Compiler Collection)**,
- providing the C++ compiler that Code::Blocks uses to compile programs.

In short:  
MinGW = the compiler + supporting tools that allow C++ code to be compiled on Windows.

---

## 📦 6. What Is an SDK? How Is It Different from an IDE?

Students learned:

- **SDK (Software Development Kit)**  
  Includes tools, libraries, headers, and compilers needed for building software.

- **IDE (Integrated Development Environment)**  
  A software application that combines:  
  editor + compiler integration + debugger + project management + error display.

### Example  
Android developers install:
- an **SDK** (tools + libraries),  
- an **IDE** (Android Studio) that uses the SDK.

Similarly:
- MinGW can be considered part of the SDK layer,  
- while Code::Blocks is the IDE that uses it.

---

## 🎯 End of Session

Session 04 strengthened:
- conceptual understanding of algorithms,  
- flowchart reasoning,  
- interactive problem solving,  
- and provided a first introduction to the practical tools needed to write C++ programs.

Next session: installing Code::Blocks, writing our first C++ program, and understanding compilation step-by-step.
