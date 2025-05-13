# ASK_ME

## 📌 Overview
ASK_ME is a C++ console application designed to manage a question-and-answer system. Users can register, add questions, answer questions, and view stored data. The project uses text files (`user.txt` and `question.txt`) to store user information and questions persistently. It is built for educational purposes to practice object-oriented programming in C++.

---

## ✨ Features
- **User Management**: Register and manage user accounts.
- **Question Management**: Add, view, and answer questions.
- **Data Storage**: Save user data in `user.txt` and questions in `question.txt`.
- **Modular Design**: Organized into classes like `AppManager`, `QuestionManager`, and `UserManager` for clean code.

---

## ⚙️ Requirements
- **C++ compiler** (g++ or MSVC).
- **Operating System**: Windows, Linux, or macOS.
- **No external libraries** required.

---

## 🛠️ Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/tahaelbanna/ASK_ME.git
2. Navigate to the project directory:
   ```bash
   cd ASK_ME
3. Compile the project using g++:
   ```bash
   g++ Main.cpp AppManager.cpp Question.cpp QuestionManager.cpp User.cpp UserManager.cpp -o ASK_ME
4. Run the program:
   ```bash
   ./ASK_ME

---

##  🚀 Usage
- **Launch the program**:
- **Follow the console menu to**:
    Register a new user.
    Add a question.
    Answer existing questions.
    View user or question data.
-**User data is saved in user.txt, and questions are saved in question.txt**.
---

## 📂 Project Structure
 ```
ASK_ME/
Main.cpp                ->    Entry point  
AppManager.cpp/h        ->    Main application logic  
Question.cpp/h          ->    Question operations  
QuestionManager.cpp/h   ->    Manages questions  
User.cpp/h              ->    User operations  
UserManager.cpp/h       ->    Manages users  
question.txt            ->    Questions database  
user.txt                ->    User database
```


---

## 🤝 Contributing
-**Contributions are welcome! Follow these steps:**
 1. Fork the repository.
 2. Create a new branch:
    ```bash
    git checkout -b feature-branch
 3. Make your changes and commit:
    ```bash
    git commit -m "Add feature"
 4. Push to the branch:
    ```bash
    git push origin feature-branch
 5. Create a Pull Request on GitHub.

---

## 📧 Contact
**Taha Elbanna**  
GitHub: [@tahaelbanna](https://github.com/tahaelbanna)  
Email: [elbannataha@students.du.edu.eg](mailto:elbannataha@students.du.edu.eg)


