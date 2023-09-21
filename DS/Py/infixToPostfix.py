def infix_to_postfix(expression):
    # Define the precedence of operators
    precedence = {
        '+': 1,
        '-': 1,
        '*': 2,
        '/': 2,
        '^': 3
    }

    def has_higher_precedence(op1, op2):
        return precedence[op1] > precedence[op2]

    def is_operator(char):
        return char in "+-*/^"

    stack = [] 
    postfix = [] # 3421-*+
    for char in expression:
        if char.isalnum():  # Operand
            postfix.append(char)
        elif char == '(':  # Left parenthesis
            stack.append(char)
        elif char == ')':  # Right parenthesis
            while stack and stack[-1] != '(':
                postfix.append(stack.pop())
            stack.pop()  # Remove the left parenthesis
        elif is_operator(char):  # Operator
            while (stack and is_operator(stack[-1]) and has_higher_precedence(stack[-1], char)):
                postfix.append(stack.pop())
            stack.append(char)

    # Pop any remaining operators from the stack to postfix
    while stack:
        postfix.append(stack.pop())

    return ''.join(postfix)

# Example usage:
infix_expression = "3 + 4 * (2 - 1)"
postfix_expression = infix_to_postfix(infix_expression)
print("Infix Expression:", infix_expression)
print("Postfix Expression:", postfix_expression)


