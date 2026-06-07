# Collatz Conjecture Calculator

> *"Mathematics may not be ready for such problems."* — Paul Erdős

An terminal based calculator that visualizes the **Collatz Conjecture** (3n+1 problem) — one of the most famous unsolved problems in mathematics.

---

## What is the Collatz Conjecture?

Pick any positive integer. Apply two rules repeatedly:

| Condition | Operation |
|-----------|-----------|
| `n` is even | `n = n / 2` |
| `n` is odd | `n = 3n + 1` |

**The Conjecture:** No matter what number you start with, the sequence will always eventually reach **1**.

Sounds trivial. Nobody has proven it.

---

## Features

- Enter any positive integer and instantly compute its Collatz sequence
- Displays the full sequence from start down to `1`
- Shows total step count to reach `1`
- Runs entirely in the browser — zero dependencies

---

## Build & Run

**Prerequisites:** GCC must be installed on your machine.

**Windows**
```bash
gcc -o main main.c
./main.exe
```

**Linux / macOS**
```bash
gcc -o main_linux main_linux.c
./main_linux
```

> If `gcc` is not found: install [MinGW](https://www.mingw-w64.org/) on Windows, or run `sudo apt install gcc` on Linux.

---