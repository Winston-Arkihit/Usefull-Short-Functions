# Usefull-Short-Functions
Some usefull short functions for C, that can help to programmers not to write a lot of stupid short functions

## Header_Only.h

`Header_Only.h` is a small header-only library with simple helper functions and macros.

### My_assert(condition)

Checks condition in internal code.

If condition is false, it prints:
- failed condition;
- file name;
- line number.

Then it stops program with `abort()`.

Example:

```c
My_assert(stack != NULL);
My_assert(stack->all_data != NULL);
```

Use it when wrong condition means programmer mistake, not normal user input mistake.
