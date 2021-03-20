# c learning

## About compiler flags

By default, gcc and clang are pretty quiet about compilation warnings and errors, which can be very useful information. Explicitly using stricter compiler flags is recommended. Here are some recommended defaults:

`-Wall -Wextra -Werror -O2 -std=c99 -pedantic`

## Notes

1. operators always yield 0 or 1 `printf("%d \n", 2==3); // 0`.
2. use `;` to act as the body (**null statement**).
3. use `extern` to referring to external variables outside function.
4. use `static` to make external variables private to source file.static can apply both to global (to the compilation unit) variables,functions, and function-local variables.
5. Typedefs `typedef` can be used to create type aliases.
6. can declare pointers to structs (`struct rectangle *my_rec_ptr = &my_rec;`).

## reference

1. [learn x in y minutes](https://learnxinyminutes.com/docs/c/)
