# Infix to Postfix Conversion and Evaluation (C)

This program converts an **infix expression** into a **postfix expression** and then **evaluates** the postfix expression using **stack**.  
---
To convert an infix mathematical expression into postfix form and evaluate the postfix expression using stack operations.
---

## Description
- Infix expression is the normal mathematical expression (example: `3+5*2`)
- Postfix expression does not use brackets (example: `352*+`)
- Stack is used to store operators and operands
- Operator precedence is maintained during conversion
---
## Algorithm
### Infix to Postfix Conversion
1. Read the infix expression
2. If operand is found, add it to postfix
3. If `(` is found, push it into stack
4. If `)` is found, pop elements until `(` is found
5. If operator is found:
   - Pop operators with higher or equal precedence
   - Push current operator
6. Pop remaining operators from stack

### Postfix Evaluation
1. Read postfix expression
2. If operand is found, push it into stack
3. If operator is found:
   - Pop two operands
   - Perform operation
   - Push result back
4. Final value in stack is the result



