# doc_2 — Infix to Postfix Conversion + Evaluation (Stack in C)

## (a) Data structure definition
This program uses stacks for two different tasks:

1) **Operator stack** (during conversion)
- Stores operators like `+ - * /` and parentheses `(` `)`
- Implemented using an array and `top` index.

2) **Operand stack** (during postfix evaluation)
- Stores integer values (operands and intermediate results)
- Implemented using an array and `top` index.

## (b) Functions implemented
*(Function names may vary slightly depending on your code; the roles are as follows.)*

### `int precedence(char op)`
- **Purpose:** Return the priority of an operator (e.g., `*` > `+`).

### `void pushOp(char op)` / `char popOp(void)`
- **Purpose:** Push/pop operators during infix→postfix conversion.

### `void infixToPostfix(char infix[], char postfix[])`
- **Purpose:** Convert an infix expression (e.g., `3+5*2`) to postfix (e.g., `352*+`).
- **Logic:** Uses precedence rules and an operator stack to reorder operators correctly.

### `void pushVal(int v)` / `int popVal(void)`
- **Purpose:** Push/pop integer values during postfix evaluation.

### `int evalPostfix(char postfix[])`
- **Purpose:** Evaluate the postfix expression using an operand stack.
- **Logic:** When an operator is found, pop two operands, apply the operation, and push the result back.

## (c) `main()` organization overview
Typical `main()` flow:
1. Read the infix expression from the user.
2. Convert infix → postfix and print the postfix string.
3. Evaluate postfix and print the final answer.

## (d) Sample output (complete run)
```text
Enter infix expression: 3+5*2
Postfix expression: 352*+
Result: 13
```
