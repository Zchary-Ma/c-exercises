# c learning

## repo description

```
.
├── README.md
├── a.out  // default gcc compiled file
├── main.bak.c 
├── makefile
├── makefile.bak //  awesome makefile from online 
├── package.json
└── src
    ├── 840 // post-graduate entrance examination 840 code
    ├── Algorithms 
    ├── DS // basic data-struture implementation
    ├── Enums // enums
    ├── Utility // utility function
    ├── class 
    ├── examples // example code from online resource or book
    └── main.c // entrance (might be deleted in future)
    
```

## About compiler flags

By default, gcc and clang are pretty quiet about compilation warnings and errors, which can be very useful information.
Explicitly using stricter compiler flags is recommended. Here are some recommended defaults:

`-Wall -Wextra -Werror -O2 -std=c99 -pedantic`

## Notes

1. operators always yield 0 or 1 `printf("%d \n", 2==3); // 0`.
2. use `;` to act as the body (**null statement**).
3. use `extern` to referring to external variables outside function.
4. use `static` to make external variables private to source file.static can apply both to global (to the compilation
   unit) variables,functions, and function-local variables.
5. Typedefs `typedef` can be used to create type aliases.
6. can declare pointers to structs (`struct rectangle *my_rec_ptr = &my_rec;`).
7. headers usually includes `#define`, `struct`, `typedef` and function prototype.
8. string is char array ends with `'\0'`

## Q&A

> 1. permmision denied while executing built file

solution: `chmod -R 777 ./build`

> 2. how to write header file like a pro

- **self-contained** — all necessary types are defined by including relevant headers if need be.
- **idempotent** — compilations don't break even if it is included multiple times.
- **minimal** — it doesn't define anything that is not needed by code that uses the header to access the facilities
  defined by the header.

## reference

1. [learn x in y minutes](https://learnxinyminutes.com/docs/c/)
2. [makefile](https://makefiletutorial.com)
3. [GenericMakefile](https://github.com/mbcrawfo/GenericMakefile)
4. [how-write-good-c-main-function](https://opensource.com/article/19/5/how-write-good-c-main-function)
