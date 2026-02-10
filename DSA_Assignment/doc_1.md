# doc_1 — Checking Balanced Parentheses (Stack in C)

## (a) Data structure definition
This program uses a **stack** to store **opening brackets** while scanning an input expression.

**Stack representation**
- `char stack[MAX]` stores bracket characters: `(`, `{`, `[`
- `int top` stores the index of the current top element
  - `top = -1` means **empty stack**

This follows **FILO/LIFO** behavior: the last opening bracket seen must be the first one matched by a closing bracket.

## (b) Functions implemented
### `void push(char value)`
- **Purpose:** Insert an opening bracket into the stack.
- **Key behavior:** Increments `top` and stores `value` in `stack[top]` (after checking overflow).

### `char pop(void)`
- **Purpose:** Remove and return the top bracket from the stack.
- **Key behavior:** Returns `stack[top]` and decrements `top` (after checking underflow).

### `int balance(char exp[])`
- **Purpose:** Check whether the brackets in `exp` are balanced.
- **How it works:**
  1. Scan characters in `exp` left to right.
  2. If an opening bracket is found → `push()`.
  3. If a closing bracket is found → `pop()` and verify it matches the correct opening type.
  4. If a mismatch occurs or the stack is empty when trying to pop → **unbalanced**.
  5. After scanning completes, if the stack is empty → **balanced**.

## (c) `main()` organization overview
Typical `main()` flow:
1. Declare a character array for the input expression.
2. Read the expression from the user.
3. Call `balance(expression)`.
4. Print whether the expression is **Balanced** or **Not Balanced**.

## (d) Sample output (complete run)
```text
Enter an expression: (a+b)*{c+[d-e]}
Balanced Parentheses

Enter an expression: (a+b]*c
Not Balanced Parentheses
```
