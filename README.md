# 🚀 C Programming Kickstarter

Welcome! This repository is designed as a hands-on **kickstarter for learning C programming**. Whether you are completely new to coding or transitioning from another language, the projects and examples here will guide you from basic syntax to understanding how memory works under the hood.

---

## 🎯 Who Is This For?
* **Absolute Beginners** looking for simple, well-commented examples.
* **Students** studying computer science fundamentals (pointers, memory allocation, data structures).
* **Developers** coming from high-level languages (like Python or JavaScript) who want to learn low-level programming.

---

## 📂 Repository Structure

The folders are organized progressively. Start from the top and work your way down:

| Folder | Topic | What You Will Learn |
| :--- | :--- | :--- |
| `01-basics/` | **Hello World & Variables** | Data types, `printf`/`scanf`, and basic math operations. |
| `02-control-flow/` | **Logic & Loops** | `if/else` statements, `switch` cases, `for` and `while` loops. |
| `03-functions/` | **Modular Code** | Writing reusable functions, scope, and header files (`.h`). |
| `04-arrays-strings/` | **Data Collections** | Working with arrays and null-terminated character strings. |
| `05-pointers/` | **Memory & Pointers** | Memory addresses, dereferencing, and pointer arithmetic. |
| `06-mini-projects/` | **Capstone Practice** | Small console apps (e.g., Calculator, Guessing Game, To-Do List). |

---

## 🛠️ Prerequisites & Setup

To run the code in this repository, you will need a C compiler installed on your machine.

1. **Check if you have GCC installed:**
   ```bash
   gcc --version
   ```
   *(If not installed: use **MinGW** on Windows, **Xcode Command Line Tools** on macOS, or `sudo apt install build-essential` on Linux).*

2. **Clone this repository:**
   ```bash
   git clone https://github.com
   cd your-repo-name
   ```

---

## ▶️ How to Compile and Run

Navigate into any folder and use `gcc` to compile the `.c` file into an executable:

```bash
# Example: Running the first program
cd 01-basics
gcc hello_world.c -o hello_world
./hello_world
```
*(Note: On Windows, run `hello_world.exe` instead of `./hello_world`)*

---

## 💡 How to Get the Most Out of This Repo
* **Don't just copy-paste:** Type the code out manually to build muscle memory for C's strict syntax (don't forget your semicolons `;`!).
* **Break things on purpose:** Change variable types, remove a `&` in `scanf`, or push an array out of bounds to see what compiler warnings or runtime errors look like.
* **Read the comments:** Every file contains inline comments explaining *why* a specific line of code is written that way.

---

## 🤝 Contributing & Feedback
Found a bug, a typo, or want to add a beginner-friendly challenge? Feel free to open an **Issue** or submit a **Pull Request**!
