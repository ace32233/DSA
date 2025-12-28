Checking Balanced Parentheses Using Stack in C

a.How the data structures are defined
=> A stack data structure is used to check whether the parentheses in an expression are balanced.
The stack is implemented using a character array, where each element stores an opening bracket such as (, {, or [.

Explanation:
=> stack[MAX] is used to store the bracket.
top keeps track of the current top position of the stack.
When topp is -1, the stack is empty.
The stack works on the first in, last Out (FILO) .

b.Description of the functions used
1.push(char value)
=> This function is used to insert an opening bracket into the stack.
It first checks whether the stack is full or not.
If there is free space aviable, the bracket is added and top is increased.
This function is called whenever an opening bracket is found in the expression.

2.pop()
=> This function is used to remove and return the top element from the stack.
It checks if the stack is empty or not.
If the stack is not empty, the top element is removed and returned.
This function is called when a closing bracket is found int he expression.

3.balance(char exp[])
=> This is the main logic function to find brackets.
It scans the input expression one character at a time using loop equal to lenght of expresssion.
Opening brackets are pushed onto the stack using push() function.
When a closing bracket appears, the function pop(), pops the top element and checks if it matches.
If a mismatch is found, the function returns 0 and the expression is unbalanced.
At the end, if the stack is empty, the expression is considered balanced.

c.Overview of the main()
=> The main() function manages the overall execution of the program.
It performs the following steps:
    1.declares a character array to store the input expression
    2.Asks the user to enter expression
    3.Calls the balance() function to check the parentheses
    4.Displays the result based on the returned value.
