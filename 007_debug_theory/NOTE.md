# GDB more feature
**attach debugger to running process**
> GDB can be attached to running program
```
gdb -p pid 
```
> after attach to running process, you may not see the source code you wrote.
> because program is likely in library function( such as sleep .. etc).
> So you need to check backtrace to check your code
```
gdb) bt
gdb) up // finish current function can return to caller function.
```

**customized GDB commands**
> you want to define your own command
```
gdb) define jhkim
gdb) print size
gdb) bt
gdb) end
```
