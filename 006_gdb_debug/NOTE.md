# GDB useful command - backtrace
**GDB backtrace**
> note that important debugging information is
> backtrace
> * call stack
> * callee function's argument
```
// backtrace command show basically function call stack.

gdb) backtrace 
```

**GDB segmentation fault**
> how to dive into segmentation fault issue?
> what is segmentation fault ?
> * when program access illegal address, segmentation fault occurrs.
```

// to check how come I get here.
gdb) bt

// to check illegal value
gdb) ptype <variable>
gdb) print <variable>
```
