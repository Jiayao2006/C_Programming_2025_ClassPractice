# C Programming 2025 – Class Practice

Repository for in-class examples and incremental learning by week.

## Table of Contents
- [Week 1 – First Program & Compilation Basics](#week-1--first-program--compilation-basics)
- Week 2 – TBA
- Week 3 – TBA
- Week 4 – TBA

---

## Week 1 – First Program & Compilation Basics

### Source Code Example
```c
#include <stdio.h>

int main(){
	printf("Hello World!\n");
	printf("Hello Ryan Peh");
	return 0;
}
```

### What We Learned
| Topic | Key Points |
|-------|------------|
| `#include <stdio.h>` | Brings in the declaration of `printf`. Without it the compiler warns/errs. |
| `main` function | Entry point; returns `int` to the OS (0 = success). |
| `printf` | Prints text. `\n` inserts a newline. Without `\n`, the next output stays on same line until a newline appears or program ends. |
| Compilation command | `gcc "Week 1/main.c" -o main` compiles source into `main.exe` (on Windows). `-o` sets output file name. |
| Running program | After successful compile, run with `main` or `main.exe` in the same directory. |
| Recompiling | Any change to the `.c` file requires recompiling to update the `.exe`. Otherwise you run the old build. |
| Separation of roles | Source (`.c`) is human-readable; executable (`.exe`) is machine code produced by the compiler. |
| Newline behavior | First `printf` ends with `\n` so the next output starts on a new line. Add `\n` to the second if you want a trailing line break. |
| Common beginner issue | Forgetting `#include <stdio.h>` or not saving/recompiling before running. |

### Quick Reference
| Action | Command / Note |
|--------|----------------|
| Compile | `gcc "Week 1/main.c" -o main` |
| Run | `main` (Windows auto-appends `.exe`) |
| Clean rebuild (simple) | Re-run the compile command after saving changes |

### Optional Improvement
Add a newline to the last `printf` for cleaner output:
```c
printf("Hello Ryan Peh\n");
```

---

Future weeks will expand on: variables, data types, input (`scanf`), conditionals, loops, functions, arrays, pointers, and memory.
