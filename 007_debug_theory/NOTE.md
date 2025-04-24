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
gdb) define ditto
gdb) print size
gdb) bt
gdb) end
```
> you can edit .gdbinit file to define your customized commands
```
vi .gdbinit
define ditto
print size
bt
end
```
**Add python to GDB**
> you can use python API with GDB after building gdb with source code
```
git clone gdb.git
make --with-python // this is not correct
```
> using python in gdb
> May be using python is useful with automating script, and generate test cases.
```
gdb) pi
Python is not interactive.

gdb) python gdb.execute("start")
```
> you can write python script and source it from gdb
> online documentation about python and 
```
// python script
import gdb
gdb.execute("start")

for i in range(0,3):
        gdb.execute("next")
...

gdb) source python_script

```
