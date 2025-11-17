🔢 Scientific Calculator — DSA Training Project

Author: Durlabh Kaushal
College ID: 24CS038

📘 Project Overview

This project is a Scientific Calculator developed as part of my Data Structures & Algorithms (DSA) training.
The objective of this project is to use the concepts of stack, expression evaluation, and algorithm design to build a calculator capable of solving complex mathematical expressions efficiently.

🎯 Features

✔ Basic arithmetic operations (Addition, Subtraction, Multiplication, Division)
✔ Scientific operations (Power, Square Root, Logarithmic functions, Trigonometry)
✔ Expression evaluation using Stacks
✔ Support for Infix → Postfix conversion
✔ Error handling for invalid expressions
✔ Modular & clean code structure

🧠 DSA Concepts Used
1. Stack Data Structure

Used for evaluating postfix expressions

Used for converting infix expressions into postfix format

Handles operator precedence and associativity

2. Algorithmic Techniques

Infix to Postfix conversion (Shunting Yard Algorithm)

Postfix expression evaluation

Function-based modular design

Recursion for scientific operations where required

🧩 Technologies Used

Programming Language: C / C++ / Java / Python (tell me which one, and I’ll update this section)

Compiler/IDE: VS Code, CodeBlocks, GCC, etc.

Version Control: Git & GitHub

📂 Project Structure
📦 Scientific-Calculator-DSA
 ┣ 📁 src
 ┃ ┣ calculator.cpp
 ┃ ┣ stack.cpp
 ┃ ┣ stack.h
 ┃ ┗ utils.cpp
 ┣ 📁 assets
 ┣ 📄 README.md
 ┗ 📄 Training_Report.pdf (optional)

🧪 Sample Code Snippet
// Example: Evaluating a Postfix Expression using Stack
int evaluatePostfix(string exp) {
    stack<int> st;
    for (char ch : exp) {
        if (isdigit(ch)) st.push(ch - '0');
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
            switch(ch) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }
    return st.top();
}

📑 Training Report Summary

This project helped me achieve the following outcomes:

Understanding and applying stack-based expression evaluation

Strengthening problem-solving ability

Implementing algorithms with efficiency

Building a complete working mini-application using DSA concepts

🙏 Acknowledgements

I would like to express my gratitude to my faculty, mentors, and training coordinators for guiding me throughout the project duration.

📬 Contact

Name: Durlabh Kaushal
College ID: 24CS038

✨ Generate a more formal academic version
✨ Add badges, emojis, color themes, or screenshots
✨ Create a PDF ver
