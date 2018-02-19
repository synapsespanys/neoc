# neoc — An alternative implemention of the 'C Standard Library'

## 7.13 Nonlocal jumps `<setjmp.h>`

The header `<setjmp.h>` defines the macro `setjmp`, and declares one function
and one type, for bypassing the normal function call and return discipline.

- [ ] The type declared is `jmp_buf` which is an array type suitable for holding
      the information needed to restore a calling environment. The environment
      of a call to the `setjmp` macro consists of information sufficient for a
      call to the `longjmp` function to return execution to the correct block
      and invocation of that block, were it called recursively. It does not
      include the state of the floating-point status flags, of open files, or of
      any other component of the abstract machine.

It is unspecified whether `setjmp` is a macro or an identifier declared with
external linkage. If a macro definition is suppressed in order to access an
actual function, or a program defines an external identifier with the name
`setjmp`, the behavior is undefined.

### 7.13.1 Save calling environment

- [ ] The `setjmp` macro

### 7.13.2 Restore calling environment

- [ ] The `longjmp` function
