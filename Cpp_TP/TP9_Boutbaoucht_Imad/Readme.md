# 💰 C++ Banking System Project

This project is a simple yet robust C++ application that simulates a banking system with different types of bank accounts. It demonstrates key object-oriented programming (OOP) principles including inheritance, polymorphism, encapsulation, and abstraction.

---

## 📁 Project Structure

```
.
├── main.cpp
├── Account.cpp / Account.h
├── Savings_Account.cpp / Savings_Account.h
├── Checking_Account.cpp / Checking_Account.h
├── Trust_Account.cpp / Trust_Account.h
├── Account_Util.cpp / Account_Util.h
├── Makefile
└── README.md
```

---

## 🧹 Features

- Object-Oriented Design
  - Base class: `Account`
  - Derived classes: `Savings_Account`, `Checking_Account`, `Trust_Account`
- Account Operations
  - Deposit funds
  - Withdraw funds
  - Display account info
- Batch operations using utility functions on vectors of accounts
- Abstract class usage and function overriding
- Makefile for easy compilation and cleaning

---

## 🛠️ Getting Started

### 📦 Requirements

- A C++ compiler like `g++`
- [Make](https://www.gnu.org/software/make/) utility (optional, but recommended for convenience)

### ▶️ To compile the project:

Open a terminal (or Command Prompt on Windows) and run:

```bash
make
```

### 🧹 To clean up compiled files:

```bash
make clean
```

---

## 🏃‍♂️ Running the Program

After successful compilation, execute the program:

```bash
./main.exe
```

Or on Unix-based systems:

```bash
./main
```

---

## 📌 Sample Output

```plaintext
=== Accounts =====================
Account display: John Doe: $1000
Account display: Jane Doe: $2000
Depositing $500 to John Doe
Withdrawing $200 from Jane Doe
...
```

---

## 🚀 Future Improvements

- Add user interaction via console or GUI
- File-based persistence (save/load accounts)
- Password-protected accounts
- Transaction history

---

## 🤝 Contributing

Feel free to fork the repository and submit pull requests. Any contributions are welcome!

---

## 📜 License

This project is open-source and free to use under the MIT License.

---

## 👤 Author

**Iboutbaoucht**  
[GitHub Profile](https://github.com/IBoutbaoucht/)

---

