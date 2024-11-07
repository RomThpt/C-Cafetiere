# ☕ Coffee Machine Control Program ☕

This program simulates the operation of a coffee machine using C. You can turn the machine on or off, select different coffee options, check stock levels, add coffee, and manage maintenance. Perfect for practicing your C programming skills!

---

## 📑 Table of Contents
- ⚙️ [Features](#features)
- 📋 [Requirements](#requirements)
- 🚀 [How to Run](#how-to-run)
- 🔍 [Usage](#usage)
- 🧩 [Code Overview](#code-overview)
- 📜 [License](#license)

---

## ⚙️ Features

- ✅ **Turn Coffee Machine ON/OFF**: Power the machine up or shut it down.
- ☕ **Coffee Selection**:
  - **Option 1**: Café Allongé (Lighter coffee)
  - **Option 2**: Café Fort (Stronger coffee)
- 🔧 **Maintenance Mode**:
  - Check coffee stock levels
  - Add coffee stock
  - View sales (feature placeholder)
  - Exit maintenance mode
- 💡 **Clear Terminal Interface**: Ensures a clean and easy-to-read user experience.

---

## 📋 Requirements

- **C Compiler** (e.g., GCC)
- **Windows OS** (uses `windows.h` for sleep functionality)

---

## 🚀 How to Run

1. **Clone the repository**:
```bash
   git clone https://github.com/yourusername/coffee-machine-program.git
   cd coffee-machine-program
```
2.	**Compile the program:**
```console
gcc main.c -o coffee_machine
```

3.	**Run the executable:**
```console
./coffee_machine
```


## 🔍 Usage

1.	**Main Menu Options**:
	-	1: Turn the coffee machine on.
	-	2: Turn the coffee machine off.
	-	3: Select your coffee type (if the machine is on).
	-	4: Quit the program.
	-	5: Enter maintenance mode.
2.	**Maintenance Mode**:
	-	1: View coffee stock.
	-	2: Add coffee to stock.
	-	3: View sales (feature placeholder).
  - 4: Exit maintenance mode.
3.	Coffee Selection:
   - After selecting coffee, the program simulates the coffee preparation process with a 10-second delay.

## 🧩 Code Overview

- `allumer`: Turns the coffee machine on.
- `eteindre`: Turns the coffee machine off.
- `cafe_select`: Displays coffee options and allows user to select a type.
- `maintenance`: Provides maintenance functionalities such as checking stock and adding more coffee.
- `mise_en_page`: Manages the main menu interface, allowing users to control the coffee machine’s state.
- `main`: Starts the program with an initial state for status and stocks.

## 📜 License

This project is open-source and available under the MIT License. See LICENSE for more details.

## Happy brewing! ☕😊
