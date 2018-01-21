# neoc — An alternative implementation of the 'C Standard Library'

## 7.2 Diagnostics `<assert.h>`

The header `<assert.h>` defines

- [x] The `assert` macro.
- [x] The `static_assert` macro which expands to `_Static_assert`.

and refers to another macro `NDEBUG`, which is not defined by `<assert.h>`. If
`NDEBUG` is defined as a macro name at the point in the source file where
`<assert.h>` is included, the `assert` macro is defined simply as

```C
#define assert(ignore) ((void)0)
```

The `assert` macro is redefined according to the current state of `NDEBUG` each
time that `<assert.h>` is included.

The `assert` macro is implemented as a macro, not as an actual function. If the
macro definition is suppressed in order to access an actual function, the
behavior is undefined.
