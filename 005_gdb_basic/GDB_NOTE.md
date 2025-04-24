# GDB basic
**GDB basics**
> compile with debug symbol included
```
gcc -g prog.c -o prog
```
**GDB command box**
```
// Start program
gdb) r
gdb) start
// Stop the gdb
gdb) q

// Clear the screan
gdb) ctrl + L

// Execute C program next line
gdb) next

// Step into function
gdb) step

// Where am I in gdb
gdb) list
```
**GDB quick start**
> quick checking command
> start program.
```
gdb --silent ./prog
gdb) start
gdb) list 
gdb) n ( next line )

```

**GDB useful command - Variable**
> Variable command
```
// You can print and derefernce pointer in GDB.
gdb) print struct->root // print value of struct->root
gdb) print *struct.root // print actual member value of struct

// Dive into variable structure
// checkout variable type. it print variable type.
list_t l = {.root = NULL};
gdb) whatis list_t
type = struct list


// You can check member field in detail using ptype command
gdb) ptype list_t
type = struct list {
    node_t *root;
}

// You can check variable type with symbol name
gdb) whatis l
gdb) ptype l

// check current scope for variable during function execution
gdb) info scope func

// display certain value everytime program stops
gdb) display arr[0]
gdb) display &arr[2]
gdb) display var

// display information of display setting
gdb) info display

// delete display option
gdb) undisplay 2 // number from info display

```
**GDB useful command - Breakpoint**
> Breakpoint
```
// basic break point
gdb) breakpoints
gdb) tbreak line_number
gdb) continue
gdb) info breakpoint
gdb) delete 2 // delete breakpoint


// conditional break point
gdb) break if i > 442
gdb) break if i > 442 && i < 500

// watchpoint of variable and breakpoint
// whenever var value is changed, program stops at that point and
// display before / after value of val.
gdb) watch var

// when gdb hit the breakpoint, you can define command to execute
gdb) commands
gdb) print size
gdb) bt
gdb) end

```

**GDB TUI(Text User Interface)**
> GDB with TUI
```
gdb --tui ./prog
gdb) focus src // change focused window
gdb) focus cmd 
gdb) layout src/reg/asm ( add windows for register, source, assembly code ).
```


**GDB useful command - Basic**
> useful command
> redirection, refresh screen .. etc
```
// refresh kind of command
gdb) refresh ( or Ctrl + L ).

// Redirect console output to file or other terminal
// 
other terminal: tty
/dev/pts/2

// The output log will be redirect to console /dev/pts/2
gdb) tty /dev/pts/2

// The output log will be redirect to file
gdb --tui ./prog
gdb) run > output.log

// return from the function
// after you breakpoint in some function, and you want to
// return from that function, use finish command
gdb) finish

// reload symbol table
gdb) file my_new_elf

```

**GDB useful command - navigating**
> navigating to certain location of line .. etc
```
gdb) advance (symbol or line)  // run until PC meets to certain symbol
gdb) until (symbol or line)  // run until PC meets certain symbol
```
> Call function from GDB
```
gdb) start
gdb) list func
gdb) call func(45,4) // this will directly call function from nowhere.
```

**GDB useful command - memory**
> display memory contents
```
gdb) x/4h 0x20000000 // print 4byte from 0x20000000
gdb) x/4h &priv.data // you can print with symbol.
```
