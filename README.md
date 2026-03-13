# OSW-CS25B2029

## File Manager Application in C

This project is a **simple File Manager simulation written in C**.
It allows users to create files, create folders, list them, delete files, and rename files using a menu-driven interface.

---

# Folder Structure

```
OSW-CS25B2029
│
├── FileManagment.c
├── README.md
├── LICENSE
└── .gitignore
```

---

# Language Used

Programming Language:

* **C**

Libraries Used:

* `stdio.h` – used for input and output operations
* `stdlib.h` – used for general utility functions
* `string.h` – used for string manipulation (`strcpy`, `strcmp`)

---

# Feature Description

The file manager provides the following features:

### 1. Create File

Allows the user to create a new file by entering the file name.

### 2. Create Folder

Allows the user to create a new folder by entering the folder name.

### 3. List Files and Folders

Displays all the files and folders currently stored in the system.

### 4. Delete File

Removes a file from the list of stored files.

### 5. Rename File

Allows the user to rename an existing file.

### 6. Exit

Terminates the program.

---

# Dependencies

To run this project you need:

* A **C compiler (GCC recommended)**
* A system capable of running C programs
  (Linux / Windows / macOS)

---

# How to Build

1. Open terminal or command prompt.
2. Navigate to the project folder.
3. Compile the program using:

```
gcc FileManagment.c -o filemanager
```

This will create an executable file named **FileManagment**.

---

# How to Use

1. Run the program:

```
./filemanager
```

2. A menu will appear:

```
1. Create File
2. Create Folder
3. List
4. Delete File
5. Rename File
6. Exit
```

3. Enter the corresponding number to perform the operation.

---

# Author

**Vaishnav**

Project submitted for **Open Source Contest 2026**.


