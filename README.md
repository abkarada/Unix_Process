# Unix Process in C

A low-level exploration of Unix process management using the C programming language. This project serves as a foundational toolkit for understanding how processes are created, managed, and interacted with at the system call level on Unix-based systems.

## 🚀 Features

- ✅ Process creation with `fork()`
- 🔁 Parent-child synchronization using `wait()`, `waitpid()`
- 🧠 Zombie and orphan process simulation
- 🧵 Basic multithreading via `pthread` (optional extensions)
- 📁 File descriptor inheritance
- 📡 Interprocess Communication (IPC) via `pipe()`
- 🕳️ Error handling and debugging techniques
- 📜 Shell-like command execution (experimental)

## 📂 Directory Structure

├── src/
│ ├── fork_example.c
│ ├── zombie_demo.c
│ ├── pipe_communication.c
│ ├── exec_replacement.c
│ └── ...
├── include/
│ └── utils.h
├── Makefile
└── README.md


## 🔧 Build Instructions

To compile all examples:
```bash
make all

gcc -o fork_example src/fork_example.c

Run Examples

./module

📘 Educational Value
This project is ideal for:

Systems programming learners

Operating systems students

Engineers transitioning from high-level to low-level development

Security researchers understanding process-level attack surfaces

🔬 Dependencies
GCC or Clang

Unix-like environment (Linux, BSD, macOS)

POSIX-compliant C library (glibc, musl, etc.)

| Concept                | Description                              |
| ---------------------- | ---------------------------------------- |
| `fork()`               | Creates a child process                  |
| `exec*()`              | Replaces process memory with new program |
| `wait()` / `waitpid()` | Synchronize with child process           |
| `pipe()`               | Enables unidirectional communication     |
| File Descriptors       | Handle inheritance and redirection       |
| Signals                | Handling interruptions and zombie states |


👨‍💻 Author
Abdurrahman Karadağ
Systems Engineer in Progress — Building from bootloader to burst protocols.

"The fork is mightier than the thread."
— A systems programmer
