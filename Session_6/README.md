# 🧩 Session 06 — C++ Basics (In-Class Coding)

This session was an **interactive coding workshop**.  
Each concept was explained verbally while writing and running code live. Students actively participated by predicting outputs, completing missing lines, and solving the exercises step-by-step.

The class used one main file that contained multiple sections. Only **one section was uncommented at a time** for compilation and testing.

---

## 🗒️ 1. Comments in C++

Two comment styles were introduced:

- Single-line comments: `// ...`
- Multi-line comments: `/* ... */`

Students used comments to label sections and to temporarily disable code while testing.

---

## 🖨️ 2. Basic Output (cout) and Variables

Students practiced printing text using `cout` and `endl`, then defined variables of different types and printed them.

Covered concepts:
- printing multiple outputs
- formatting output with `<<`
- understanding that `bool` prints as `1` (true) and `0` (false)

---

## 🧠 3. Input (cin)

Basic input was introduced using `cin`:
- reading a value from the user
- printing it back to confirm correctness

This reinforced the idea of input/output flow in a program.

---

## 📐 4. Mini Problem — Rectangle Area

Students wrote a program that:
- reads `length` and `width`
- computes `area = length * width`
- prints the result

The focus was on:
- correct variable definition
- correct input sequence
- correct arithmetic expression

---

## 🧾 5. Mini Problem — Name and Age Sentence

Students wrote a program that reads:
- a `name`
- an `age`

and prints the sentence:
- `NAME is AGE years old.`

This was used to practice mixing strings and numbers in output.

---

## ➕ 6. Mini Problem — Sum, Average, Min, Max

Students wrote a program that reads two integers and prints:
- sum
- average (with correct decimal behavior)
- min
- max

The following idea was emphasized:
- average must use `2.0` (not `2`) to avoid integer division.

---

## 🔢 7. Arithmetic Operators: %, ++, --

Students practiced:
- modulo operator `%` for remainder
- increment `++`
- decrement `--`

The goal was to understand how these operators affect variable values during execution.

---

## 🔗 8. Logical Operators and Comparisons

Logical operators were explained and tested with examples:

- OR: `||`
- AND: `&&`
- NOT: `!`

Also covered:
- comparison operators such as `>` and `==`
- combining comparisons into a more complex expression
- understanding how `true/false` becomes `1/0` when printed

---

## ✅ 9. Divisibility Check Without Using if

A flowchart-style logic idea was implemented directly in C++:

Write a program that prints `1` if `c` is divisible by **both** `a` and `b`, otherwise prints `0`, without using conditional statements.

Students practiced using a boolean expression:

- `(c % a == 0) && (c % b == 0)`

This reinforced:
- modulo for divisibility
- boolean expressions as final outputs
- writing decision logic without `if`

---

## 🎯 End of Session

By the end of Session 06, students were able to:
- write and run small C++ programs,
- use `cout` and `cin` correctly,
- define variables and understand basic data types,
- solve beginner problems (area, formatting output, averages),
- use arithmetic and logical operators,
- express decision logic using boolean expressions (without `if`).

Next session: **Conditional Statements (if / else) and building decision-making programs**.
