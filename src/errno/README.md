# neoc — An alternative implementation of the 'C Standard Library'

## 7.5 Errors `<errno.h>`

The header `<errno.h>` defines several macros, all relating to the reporting of
error conditions.

The macros are

- [x] `EDOM`
- [x] `EILSEQ`
- [x] `ERANGE`

which expand to integer constant expressions with type `int`, distinct positive
values, and which are suitable for use in `#if` preprocessing directives; and

- [x] `errno`

which expands to a modifiable lvalue that has type `int` and thread local
storage duration, the value of which is set to a positive error number by
several library functions. If a macro definition is suppressed in order to
access an actual object, or a program defines an identifier with the name
`errno`, the behavior is undefined.

The value of `errno` in the initial thread is zero at program startup (the
initial value of `errno` in other threads is an indeterminate value), but is
never set to zero by any library function.

Additional macro definitions, beginning with `E` and a digit or `E` and an
uppercase letter, may also be specified by the implementation.

## K.3.2 Errors `<errno.h>`

The header `<errno.h>` defines a type.

- [x] `errno_t` which is of type int.
