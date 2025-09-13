✍️ String Editor with Undo/Redo

A lightweight C++ class (cls_my_string) that implements Undo and Redo functionality for string operations, built on top of the STL stack container.

✨ Features

📥 Set string values (Value property with getter/setter)

⏮ Undo → go back to the previous string state

⏭ Redo → reapply undone changes

🧹 Automatic Redo reset on new input (like text editors)

📂 Project Structure
├── cls_my_string.h   # Undo/Redo string editor
└── main.cpp          # Example usage

🏗 Class Overview
🔹 cls_my_string

A class that keeps track of string states in a stack-based undo/redo system.

📌 Private Members

_list → stack of active string states.

_list2 → stack of redo states.

📌 Public Members

string get_Value() → returns current value (top of _list).

void set_value(string value) → sets a new value, clears redo history.

void undo() → move current state to _list2, go back one step.

void redo() → move last undone state back to _list.

__declspec(property(...)) string Value → allows obj.Value as property syntax (MSVC specific).

🚀 Example Usage
#include <iostream>
#include "cls_my_string.h"

using namespace std;

int main() {
    cls_my_string editor;

    editor.Value = "Hello";
    editor.Value = "Hello World!";
    editor.Value = "Hello World!!!";

    cout << "Current: " << editor.Value << endl; // Hello World!!!

    editor.undo();
    cout << "After Undo: " << editor.Value << endl; // Hello World!

    editor.undo();
    cout << "After Undo: " << editor.Value << endl; // Hello

    editor.redo();
    cout << "After Redo: " << editor.Value << endl; // Hello World!

    editor.Value = "New Text";
    cout << "After New Input: " << editor.Value << endl; // New Text

    editor.redo(); // nothing happens, redo stack cleared
    cout << "After Redo: " << editor.Value << endl; // New Text

    return 0;
}

📌 Sample Output
Current: Hello World!!!
After Undo: Hello World!
After Undo: Hello
After Redo: Hello World!
After New Input: New Text
After Redo: New Text

🛠 Compilation
g++ main.cpp -o string_editor
./string_editor

🎯 Learning Goals

Practicing stack operations (push, pop, top)

Implementing Undo/Redo patterns (common in text editors)

Using property syntax in C++ (via __declspec)
