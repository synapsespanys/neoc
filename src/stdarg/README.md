# neoc — An alternative implemention of the 'C Standard Library'

## 7.16 Variable arguments `<stdarg.h>`

The header `<stdarg.h>` declares a type and defines four macros, for advancing
through a list of arguments whose number and types are not known to the called
function when it is translated.

A function may be called with a variable number of arguments of varying types.
Its parameter list contains one or more parameters. The rightmost parameter
plays a special role in the access mechanism, and will be designated _parmN_ in
this description.

- [ ] The type declared is `va_list` which is a complete object type suitable
      for holding information needed by the macros `va_start`, `va_arg`,
      `va_end`, and `va_copy`. If access to the varying arguments is desired,
      the called function shall declare an object (generally referred to as `ap`
      in this subclause) having type `va_list`. The object `ap` may be passed as
      an argument to another function; if that function invokes the `va_arg`
      macro with parameter `ap`, the value of `ap` in the calling function is
      indeterminate and shall be passed to the `va_end` macro prior to any
      further reference to `ap`.

### 7.16.1 Variable argument list access macros

The `va_start` and `va_arg` macros described in this subclause shall be
implemented as macros, not functions. It is unspecified whether `va_copy` and
`va_end` are macros or identifiers declared with external linkage. If a macro
definition is suppressed in order to access an actual function, or a program
defines an external identifier with the same name, the behavior is undefined.
Each invocation of the `va_start` and `va_copy` macros shall be matched by a
corresponding invocation of the `va_end` macro in the same function.

- [ ] The `va_arg` macro
- [ ] The `va_copy` macro
- [ ] The `va_end` macro
- [ ] The `va_start` macro
