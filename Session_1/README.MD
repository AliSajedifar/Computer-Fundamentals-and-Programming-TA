# 🧩 Session 01 — From Binary to Number Systems

This session introduces:
- why computers use binary,
- low-level vs high-level languages,
- how number systems work,
- and how to convert numbers between different bases.

---

## 🔌 1. Why Do Computers Use Binary?

Computers operate using electrical signals. Each circuit can be in one of two states:

- ON → 1  
- OFF → 0  

Everything — text, images, sound, programs — is ultimately stored as a sequence of **bits** (0s and 1s).

Example: the number 13 is stored as:

00001101

---

## 🧠 2. Why Don’t Humans Program in Binary?

Binary is:
- hard to read,  
- error-prone,  
- extremely long.

Therefore, multiple layers of languages were created between humans and hardware.

---

## 🏗️ 3. Layers of Programming Languages (Low → High Level)

Level 1 — Machine Code → raw 0/1 executed directly  
Level 2 — Assembly → short mnemonics like "MOV AL, 61h"  
Level 3 — C / C++ → closer to hardware, but readable  
Level 4 — Python → high-level, hides hardware details  

As we move upward:
- writing code becomes easier,  
- but low-level control decreases.

---

## ⚙️ 4. Why Start With C++?

C++ helps students understand:
- memory usage,
- data types,
- low-level I/O,
- how software interacts with hardware.

High-level languages hide these concepts, making C++ ideal for foundational learning.

---

## 🔢 5. Why Learn Binary?

Understanding binary helps explain:
- how numbers are stored,
- why 1 + 1 = 10₂,
- how overflow happens,
- how the CPU interprets data.

---

## 📘 Number Systems and Conversions

---

## 🔹 Section 1 — Convert From Base r to Base 10

A number (aₙ aₙ₋₁ … a₁ a₀)ᵣ expands as:

aₙ rⁿ + aₙ₋₁ rⁿ⁻¹ + ... + a₁ r + a₀

### Example 1  
Convert (1011)₂:

1 × 2³ = 8  
0 × 2² = 0  
1 × 2¹ = 2  
1 × 2⁰ = 1  

Result: (1011)₂ = (11)₁₀

### Example 2  
(256)₈ = 2×8² + 5×8¹ + 6×8⁰ = 174₁₀

### Example 3  
(A5)₁₆ = 10×16¹ + 5×16⁰ = 165₁₀

### Practice  
(1110)₂ → 14₁₀  
(23)₄ → 11₁₀  
(57)₈ → 47₁₀  
(1C)₁₆ → 28₁₀  
(10.2)₃ → 3.666₁₀  

---

## 🔹 Section 2 — Convert From Base 10 to Base r

Method:
- Integer part → repeated division  
- Fractional part → repeated multiplication  

### Example 1  
Convert 13.375₁₀ to base 2

Integer part:  
13 ÷ 2 = 6 r1  
6 ÷ 2 = 3 r0  
3 ÷ 2 = 1 r1  
1 ÷ 2 = 0 r1  

→ 1101

Fractional part:  
0.375 × 2 = 0.75 → 0  
0.75 × 2 = 1.5 → 1  
0.5 × 2 = 1.0 → 1  

→ .011

Final: 1101.011₂

### Example 2  
25.625₁₀ = 31.5₈

### Example 3  
255₁₀ = FF₁₆

### Practice  
7.5₁₀ → 111.1₂  
20.625₁₀ → 24.5₈  
10.75₁₀ → 1010.11₂  
50₁₀ → 1212₃  
12.5₁₀ → C.8₁₆  

---

## 🔹 Section 3 — Addition & Subtraction in Non-Decimal Bases

### General Rules
- Addition: if sum ≥ base → carry 1  
- Subtraction: if top digit < bottom digit → borrow 1  

---

### Example 1 — Binary Addition

   1011  
 + 1101  
 -------  
  11000  

Carry explanation:  
1+1=0 carry1  
1+0+1=0 carry1  
0+1+1=0 carry1  
1+1(carry)=0 carry1 → final carry  

Final: (11000)₂

---

### Example 2 — Binary Subtraction (Correct)

   1001  
 - 0111  
 -------  
   0010  

Borrowing required in columns.  
Final: (0010)₂ = 2₁₀

---

### Example 3 — Octal Addition (Proper Carry Explanation)

Compute (56)₈ + (23)₈

Step 1 (units place):  
6 + 3 = 9 → in base 8: write 1, carry 1

Step 2 (next column):  
5 + 2 + carry 1 = 8 → in base 8: write 0, carry 1

Final result with carry:

   1 (carry)  
   5 6  
 + 2 3  
 -------  
   1 0 1  

(101)₈

---

### Practice  
(111)₂ + (101)₂ = 1100₂  
(1001)₂ − (0111)₂ = 0010₂  
(25)₈ + (13)₈ = 40₈  
(64)₈ − (32)₈ = 32₈  
(2A)₁₆ − (F)₁₆ = 1B₁₆  

---

## 🎯 End of Session

This session covered:
- binary as the language of computers,  
- levels of programming languages,  
- conversions between different bases,  
- addition & subtraction in binary, octal, and hexadecimal.

