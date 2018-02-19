# neoc — An alternative implemention of the 'C Standard Library'

## 7.19 Common definitions `<stddef.h>`

The header `<stddef.h>` defines the following macros and declares the following
types. Some are also defined in other headers, as noted in their respective
subclauses.

- [ ] The `ptrdiff_t` type which is the signed integer type of the result of
      subtracting two pointers.
- [ ] The `size_t` type which is the unsigned integer type of the result of
      the sizeof operator.
- [ ] The `max_align_t` type which is an object type whose alignment is as great
      as is supported by the implementation in all contexts.
- [ ] The `wchar_t` type which is an integer type whose range of values can
      represent distinct codes for all members of the largest extended character
      set specified among the supported locales; the null character shall have
      the code value zero. Each member of the basic character set shall have a
      code value equal to its value when used as the lone character in an
      integer character constant if an implementation does not define
      `__STDC_MB_MIGHT_NEQ_WC__`.
- [ ] The `NULL` macro which expands to an implementation-defined null pointer
      constant.
- [ ] The `offsetof` macro which expands to an integer constant expression that
      has type `size_t`, the value of which is the offset in bytes, to the
      structure member (designated by member-designator), from the beginning of
      its structure (designated by type). The type and member designator shall
      be such that given "`static` _type_ `t;`" then the expression
      "`&(t.`_member-designator_`)`" evaluates to an address constant. (If the
      specified member is a bit-field, the behavior is undefined.)

The types used for `size_t` and `ptrdiff_t` should not have an integer
conversion rank greater than that of `signed long int` unless the implementation
supports objects large enough to make this necessary.
