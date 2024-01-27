# 42_libunit

**42_libunit** is a straightforward testing framework for C projects, designed to facilitate the creation of robust test routines and ensure bug-free code. It's particularly suited for educational purposes and small to medium-sized projects, offering a simple yet effective approach to unit testing in C.

## Features

- **Sequential Test Execution:** Run your tests one after the other, allowing for systematic and organized testing.
- **Signal Handling:** Capable of catching segmentation faults (SIGV) and bus errors (BUSE), providing insights into potential issues in your code.

## Getting Started

### Setting Up Your Test Environment

1. **Create a `tests` Directory:**
   This will contain all your test cases, organized in subdirectories for each function or routine you're testing.

   Example Structure:
   ```
   framework
   [project-to-test]
   tests/
   └── ft_isint/
       ├── 01_test_all_chars_are_digits.c
       └── launcher.c
   ```

2. **Write Your Test Cases:**
   Write test cases for each function, calling the function with various inputs and checking for expected outputs.

   Example Test Case (`test1.c`):
   ```c
   #include "../[project-to-test]/include/header.h"

   int test_all_chars_are_digits(void) {
       char *str = "1234567890";
       if (ft_isint(str))
           return (0);
       else
           return (-1);
   }
   ```

3. **Create a Launcher:**
   Each routine requires a `launcher.c` file. This will initialize, run, and clean up your tests.

   Example Launcher (`launcher.c`):
   ```c
   #include "../framework/include/libunit.h"

   void ft_isint_launcher(t_passed *statuses) {
       t_routine *routine = NULL;
       testlist_load(&routine, "ft_isint", "All chars are digits.", &test_all_chars_are_digits);
       testlist_run(&routine, statuses);
       testlist_clear(&routine);
   }
   ```

4. **Set Up the Main Test Runner (`main.c`):**
   This is where all test routines are launched.

   Example `main.c`:
   ```c
   #include "../framework/include/libunit.h"

   int main(void) {
       t_passed res;
       res.passed = 0;
       res.total = 0;
       ft_isint_launcher(&res);

       if (res.total == 0)
           return (ft_printf("No tests were launched\n"), 0);
       ft_printf("\n%d/%d tests checked\n", res.passed, res.total);
       if (res.passed == res.total)
           return (OK);
       return (KO);
   }
   ```

### Compiling and Running Your Tests

When using `42_libunit` for real projects, you'll typically be testing specific functions from your codebase. For instance, let's assume you're testing the `ft_isint` function from the `fancy_integers` project. This project contains a single file named `ft_isint.c` where the `ft_isint` function is implemented.

1. **Compile the Framework:**
   Run `make` in the directory of the `42_libunit` framework to compile it and generate the `libunit.a` archive.

   ```bash
   make
   ```

2. **Compile Your Tests with the Project File:**
   Compile your tests along with the project file (`ft_isint.c` from `fancy_integers`). Ensure you link the `libunit.a` archive during compilation.

   ```bash
   gcc -L[path_to_libunit] -lunit -o my_test main.c my_test_launcher.c [path_to_fancy_integers]/ft_isint.c
   ```

   Alternatively, you can directly link the archive:

   ```bash
   gcc -o my_test main.c my_test_launcher.c [path_to_fancy_integers]/ft_isint.c [path_to_libunit]/libunit.a
   ```

3. **Run Your Tests:**
   Execute the compiled test program to see the results.

   ```bash
   ./my_test
   ```

In this scenario, `ft_isint.c` from the `fancy_integers` project is compiled together with your tests, allowing you to directly test the `ft_isint` function. This approach is typical when using `42_libunit` to test specific functions within a larger project, ensuring that each component functions correctly in isolation.

## Outputs

### Example output for previous setup

```txt
[ft_isint]:[All chars are digits.]:[OK]

1/1 tests checked
```

### More failure types

```txt
[OK test]:[OK status test]:[OK]
[KO test]:[KO status test]:[KO]
[SIGV test]:[SEGV status test]:[SIGSEGV]
[BUSE test]:[BUSE status test]:[SIGBUS]

1/4 tests checked
```

### More tests
```txt
[ft_isint]:[All chars are digits.]:[OK]
[ft_isint]:[One character is letter.]:[OK]
[ft_isint]:[One character is symbol.]:[OK]
[ft_isint]:[One non printable characters.]:[OK]
[ft_isint]:[String is empty.]:[OK]
[ft_isint]:[Input is null.]:[OK]
[ft_atoi]:[Input is empty.]:[OK]
[ft_atoi]:[Input is empty.]:[SIGSEGV]
[ft_atoi]:[Conversion stops at first letter.]:[OK]
[ft_atoi]:[Literal abc conversion.]:[OK]
[ft_atoi]:[Number with zero in the beginning]:[OK]
[ft_itoa]:[Handle zero.]:[OK]
[ft_itoa]:[Handle MAX_INT.]:[OK]
[ft_itoa]:[Handle MIN_INT.]:[OK]
[ft_substr]:[NULL test]:[SIGSEGV]
[ft_substr]:[Valid test]:[OK]
[ft_substr]:[Overflow index test]:[OK]
[ft_substr]:[Overflow len test]:[KO]
[ft_substr]:[Empty string test]:[OK]

16/19 tests checked
make: *** [Makefile:74: test] Error 255
```

## Authors

`42_libunit` is a project developed with passion by two coding enthusiasts from School 42 Vienna:

- **Javid Khasizada** - [GitHub@khasizadaj](https://github.com/khasizadaj)
- **Vitalii Frants** - [GitHub@LuckyIntegral](https://github.com/LuckyIntegral)