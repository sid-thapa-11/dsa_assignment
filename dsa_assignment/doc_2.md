Program Documentation: Infix to Postfix Conversion and Evaluation

Program Name: Infix to Postfix Converter and Evaluator Language: C Author: Siddharth Thapa Course: COMP202 

(a) Explanation of Data Structures The program uses stack data structures implemented using arrays.

Operator Stack (for conversion) char stack[MAX]; int top = -1; a. Stores operators and parentheses during infix → postfix conversion. b. top keeps track of the last inserted operator.
Evaluation Stack (for postfix evaluation) int evalStack[MAX]; int t = -1; a. Stores operands (numbers) during postfix evaluation. b. Used to perform arithmetic operations step by step. Both stacks follow LIFO (Last In First Out) principle.
(b) Description of Functions

push(char x) Pushes an operator onto the operator stack.

pop() Removes and returns the top element from the operator stack.

peek() Returns the top element without removing it.

precedence(char op) Determines operator priority: a. + - → 1 b.* / → 2 c.^ → 3 Used to decide order of operations during conversion.

infixToPostfix(char infix[], char postfix[]) Purpose: Converts infix expression into postfix form.

Logic: a. If operand → add to postfix. b. If ( → push to stack. c. If ) → pop until ( found. d. If operator → pop operators of higher or equal precedence before pushing. e. At end, pop remaining operators.

evaluatePostfix(char postfix[]) Purpose: Evaluates the postfix expression.
Logic: a. If digit → push to evaluation stack. b. If operator → pop two operands. c. Perform operation. d. Push result back. e. Final stack value is result.

(c) Overview of main() The main() function performs: a. Takes infix input from user. b. Calls infixToPostfix() to convert expression. c. Displays postfix result. d. Calls evaluatePostfix() to compute value. e. Prints evaluation result.

(d) Sample Output Input (3+5)*2

Output Postfix Expression: 35+2* Evaluation Result: 16

Conclusion The program demonstrates: a. Stack application in expression conversion b. Stack-based arithmetic evaluation c. Operator precedence handling

Time complexity for both processes is O(n).