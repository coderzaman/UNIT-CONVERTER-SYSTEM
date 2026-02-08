# Unit Converter System (C++)

A comprehensive command-line application developed as a Software Development I university project. This system provides a robust interface for converting various units across multiple categories, secure user authentication, and an interactive menu-driven navigation.

## 🚀 Features

### 🔐 User Authentication
* **Registration System:** Allows new users to create an account with a username, ID, and password.
* **Secure Login:** authenticates users against a local database (`users.txt`) before granting access to the converter tools.
* **Password Masking:** Hides password input with asterisks (*) for security.

### 🔄 Conversion Modules
1.  **Number System Conversion:**
    * Binary ↔ Decimal ↔ Octal ↔ Hexadecimal
    * Supports all inter-conversion combinations (e.g., Hex to Binary, Octal to Decimal).

2.  **Time Conversion:**
    * Converts between Days, Hours, Minutes, and Seconds.
    * Example: Calculates how many seconds are in a specific number of days.

3.  **Length Conversion:**
    * Supports Metric (Meter, Kilometer, Centimeter) and Imperial (Foot, Inch) units.
    * 20+ conversion directions (e.g., Meter to Inch, Feet to Centimeter).

4.  **Mass Conversion:**
    * Units: Kilogram, Gram, Ton, Pound, Carat.
    * Essential for scientific and commercial weight calculations.

5.  **Temperature Conversion:**
    * Celsius ↔ Fahrenheit ↔ Kelvin.
    * Accurate scientific formulas for temperature shifting.

## 🛠️ Technical Highlights
* **Language:** C++
* **File Handling:** Uses `fstream` to read/write user credentials to `users.txt`.
* **Standard Libraries:** `<iostream>`, `<windows.h>`, `<conio.h>`, `<vector>`, `<string>`.
* **Object-Oriented Programming (OOP):**
    * Utilizes Classes and Objects to modularize conversion logic (e.g., `class AllNumberSystem`, `class LengthConversionSystem`).
    * Modular functions for clean code architecture.
* **UI/UX:**
    * Interactive console menu with clear navigation.
    * Error handling for invalid inputs.

## 💻 How to Run
1.  **Clone the repository:**
    ```bash
    git https://github.com/coderzaman/UNIT-CONVERTER-SYSTEM.git
    ```
2.  **Compile the code:**
    Use any C++ compiler (like g++):
    ```bash
    g++ main.cpp -o ConverterApp
    ```
3.  **Run the executable:**
    ```bash
    ./ConverterApp
    ```

## 📸 Screenshots
#### **Time Conversion**
<img width="847" height="502" alt="image" src="https://github.com/user-attachments/assets/24bd2dd6-7851-4d4c-b8f6-bc6c9e3b0a49" />
<img width="753" height="712" alt="image" src="https://github.com/user-attachments/assets/514d8658-03a2-4858-bd79-54feb82a81ca" />
<img width="780" height="472" alt="image" src="https://github.com/user-attachments/assets/b30809c2-3e91-4cc0-b527-d44906fe4fc6" />

## 📜 License
This project was developed for academic purposes at the Department of Computer Science.
