# 🧩 Session 11 — Arrays and Introduction to Recursion

This session introduced **arrays** as a solution to repetitive data storage problems and provided a first conceptual introduction to **recursion**.  
All topics and exercises were handled in an **interactive, practice-based manner**, with active student participation and conceptual guidance.

---

## 🔁 1. Review — Previous Session

The session started with a short review of:
- functions,
- loops,
- and structured program design.

This review prepared students for understanding why arrays are needed.

---

## 📦 2. Motivation — Why Do We Need Arrays?

A motivating question was discussed:

> If we want to store the scores of 30 students, should we write  
> `score1, score2, ..., score30`?

Problems with this approach were identified:
- cannot be used efficiently inside loops,
- code becomes long and unreadable,
- not scalable or maintainable.

This naturally led to the concept of **arrays**.

---

## 🧠 3. Arrays — Concept and Definition

An **array** was defined as:
- a collection of elements of the same type,
- stored in **contiguous memory locations**,
- accessed using an index.

Key points explained:
- array size is fixed,
- all elements share the same data type,
- indexing starts from **0**, not 1.

Examples were discussed to clarify how elements are stored and accessed.

---

## 🔢 4. Indexing and Memory Behavior

It was explained that:
- when an array name is printed directly, it refers to the **address of the first element** in memory,
- accessing individual elements requires indexing.

To work with all elements, a `for` loop was introduced as the standard method.

---

## 🔁 5. Traversing Arrays

Two ways of iterating through arrays were practiced:

### 1️⃣ Using a for Loop
- access elements using indices,
- full control over position.

### 2️⃣ Using for-each Loop
- simpler syntax,
- no explicit index,
- suitable when only values are needed.

Both approaches were demonstrated with examples.

---

## 📘 6. In-Class Array Exercises

All exercises were solved **interactively**, with students contributing logic and corrections.

---

### ✅ Exercise 1 — Count Even Numbers
Given the array:

{ 1, 2, 3, 6, 7, 8 }

Write a program that counts how many elements are **even**.

This exercise was solved using a **for-each loop**, reinforcing:
- value-based traversal,
- modulo operation.

---

### ✅ Exercise 2 — Print Array in Reverse Order
Using the same array, write a program that prints the elements **from last to first**.

This exercise reinforced:
- index-based traversal,
- understanding array boundaries.

---

## 🔁 7. Introduction to Recursion

The concept of **recursion** was introduced conceptually.

A recursive function was explained as:
- a function that calls itself,
- a way to solve problems by reducing them into smaller subproblems.

Two essential parts of recursion were emphasized:

- **Base case** — stops the recursion  
- **Recursive case** — moves toward the base case  

The importance of a correct stopping condition was discussed to avoid infinite recursion.

---

## 🔢 8. Recursive Exercise — Countdown

### In-Class Practice
Write a recursive program that:
- reads a number,
- prints a countdown from that number to zero.

This problem was solved conceptually in class to illustrate:
- how recursive calls work,
- how the base case stops execution,
- how function calls are stacked and resolved.

---

## 🎯 End of Session

By the end of Session 11, students were able to:
- understand why arrays are needed,
- define and traverse arrays,
- use `for` and `for-each` loops appropriately,
- reason about memory and indexing,
- understand the core idea of recursion,
- identify base and recursive cases,
- and follow recursive execution step-by-step.

Next session: **More recursion examples and deeper array applications**.
