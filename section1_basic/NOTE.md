# Section 1: Basic 
**Environment setup**
> install gdb
```
sudo apt-get install gdb
```

# Debugging type
**Compile time vs Run-time debugging**
> Compile time
> * static analysis, compiler error, ..etc
> Runtime
> * Memory leak, performance issue, or assert

# Add compiler warning option
**Compiler warning is useful for compile time debugging**
> compiler warning option
```
// Simple warning all
gcc -Wall prog.c -o prog

// conversion
// check unintended type casting( float -> int )
gcc -Wconversion prog.c -o prog // casting rule

// -Werror
// treat warning as error
gcc -Werror -Wconversion prog.c -o prog
```

**Runtime debugging**
> printf debugging
> print out important information on console.
> Q1. too many printf and even I don't know where printf comes from.
> printf -> not printing all, start reducing 
> cons of printf : need to do modify
>
> if you need to use printf, try add DEBUG constant to on/off debugging console.
> Q2. How to analize printf information efficiently ? 
```

#define DEBUG   1

#if DEBUG
    printf("debugging information\n");
#endif


```
