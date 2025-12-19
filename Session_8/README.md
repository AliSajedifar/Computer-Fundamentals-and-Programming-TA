# 🧩 Session 08 — Loops, Conditions, and Practice with Numbers

This session was fully **practice-oriented and interactive**.  
All topics were explained conceptually while writing and running code in class.  
Students actively participated by predicting outputs, modifying logic, and completing exercises step-by-step.

---

## 🔀 1. Conditional Structure — if / else if / else

The `if / else if / else` structure was reviewed and practiced through comparison problems.

### In-Class Practice
- Read two numbers from the user.
- Compare them and print:
  - `x > y`
  - `x < y`
  - or `x = y`

The focus was on:
- condition evaluation order,
- clarity of logical branches,
- readable output.

---

## 🔄 2. while Loop — Basic Repetition

The `while` loop was used to print numbers from **1 to 5**.

Key ideas:
- loop condition is checked before each iteration,
- loop variable (index) must be updated correctly,
- understanding when and why the loop stops.

---

## ♾️ 3. Infinite Loop and break

An **infinite loop** using `while (true)` was introduced.

### In-Class Practice
- Repeatedly compare two numbers.
- Ask the user whether to continue (`y/n`).
- Exit the loop using `break` when the user chooses to stop.

Concepts emphasized:
- what makes a loop infinite,
- why infinite loops can be dangerous,
- how `break` provides a controlled exit.

---

## 🎯 4. Number Guessing Game (Random Numbers)

A number guessing game was implemented using:
- `rand()` for generating random numbers,
- `srand(time(0))` for random seed initialization.

### Game Logic
- Generate a secret number between 0 and 100.
- Read guesses from the user.
- Provide hints:
  - “Too high”
  - “Too low”
- Count the number of attempts.
- End the game when the correct number is guessed.

---

## 🔢 5. Digit Processing — Printing Digits

Students practiced processing digits of a number using a loop.

### Task
- Read a number.
- Print its digits **from last to first**.

Key concepts:
- modulo (`%`) for extracting digits,
- division (`/`) for removing digits,
- handling zero and negative numbers correctly.

Example:
- Input: 1234  
- Output: 4321

---

## 🔁 6. Reverse a Number

A complete number reversal algorithm was implemented.

### Task
- Read a number.
- Build the reversed value digit by digit.
- Preserve the sign of the original number.

Example:
- Input: 12030  
- Output: 3021

The difference between:
- simply printing digits,
- and constructing a new reversed number  
was clearly explained.

---

## 🎯 End of Session

All topics and problems in this session were solved **interactively**, with students actively involved in:
- loop reasoning,
- condition design,
- digit manipulation,
- and understanding program flow.

This session strengthened students’ ability to combine **conditions**, **loops**, and **numeric logic** in real C++ programs.
