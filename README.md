# Tourism Management System

### 📌 First Semester Project

This project is a **Tourism Management System** developed in C programming language. It is designed to manage travel agency details, popular tourist destinations, and user registration, login, and administration processes. This project is developed as part of the first-semester coursework to understand fundamental concepts in C programming, file handling, and basic user interaction in terminal applications.

---

## 🚀 Features

* **User Registration & Login**:

  * New users can register with personal details, create a unique username and a strong password.
  * Existing users can log in using their passport number and password.
  * Validation checks for strong password creation.

* **Admin Portal**:

  * Admin access with a secure login mechanism.
  * View registered users with detailed information like nationality, age, and passport number.
  * Display the number of tourists from different countries.

* **Tourist Destinations**:

  * Provides a list of the top tourist destinations in Nepal.

* **Travel Agencies**:

  * Displays information about popular travel agencies, their ratings, group size, and costs per day.

---

## 🏗️ Project Structure

```
📦 Tourism Management System
│
├── projectlogin.txt          # File to store user registration details
├── main.c                    # Main C source file
└── README.md                 # Project documentation (this file)
```

---

## 🛠️ Technologies Used

* **Programming Language:** C
* **Library Dependencies:**

  * `<stdio.h>` - Standard I/O operations
  * `<string.h>` - String handling
  * `<stdlib.h>` - Memory allocation, process control
  * `<stdbool.h>` - Boolean data type
  * `<ncurses.h>` - Enhanced user interface (colors and formatting)
  * `<math.h>` - Mathematical operations
  * `<ctype.h>` - Character handling
  * `<unistd.h>` - UNIX standard functions

---

## ⚡ How to Run the Project

1. **Compile the program:**

   ```bash
   gcc main.c -o tourism -lncurses
   ```

2. **Run the executable:**

   ```bash
   ./tourism
   ```

3. Follow the on-screen instructions to navigate the menu.

---

## 🔐 Admin Login Credentials

* **Username:** programmer\@123
* **Password:** pass123

---

## 🎯 Future Improvements

* Add features for booking tours directly from the system.
* Implement data encryption for user data storage.
* Integrate a database instead of text file storage.
* Improve UI with more interactive navigation.

---

## 👨‍💻 Developer Information

* **Name:** Prayash Mishra
* **Address:** Lamachaur-16, Pokhara
* **Occupation:** Student (Computer Engineering)
* **Contact:** [mishraprayash00@gmail.com](mailto:mishraprayash00@gmail.com)

Feel free to reach out for any feedback or collaboration ideas!

---

## 📜 License

This project is developed as part of an educational curriculum and is open for learning and development purposes.
