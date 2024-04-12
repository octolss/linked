#include <iostream>
#include <stack>
#include <string>

bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') || (open == '[' && close == ']') || (open == '{' && close == '}');
}

void filter(std::stack<std::string>& Stack) {
while (!Stack.empty()) {
    std::string expression = Stack.top();
    std::stack<char> parenthesesStack;

    bool properlyClosed = true;
    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            parenthesesStack.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (parenthesesStack.empty() || !isMatchingPair(parenthesesStack.top(), ch)) {
                properlyClosed = false;
                break;
        }
        parenthesesStack.pop();
        }
    }

    if (properlyClosed && parenthesesStack.empty()) {
        std::cout << "Parentheses in \"" << expression << "\" are properly closed." << std::endl;
    } else {
        std::cout << "Parentheses in \"" << expression << "\" are not properly closed." << std::endl;
    }

    Stack.pop();
}
}

int main() {
    std::stack<std::string> Romka;

    Romka.push("([{}])");
    Romka.push("([)]");
    Romka.push("{}");
    Romka.push("[]");

    filter(Romka);

    return 0;
}