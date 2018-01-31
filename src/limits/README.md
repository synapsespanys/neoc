# neoc — An alternative implementation of the 'C Standard Library'

## 7.10 Sizes of integer types `<limits.h>`

The header `<limits.h>` defines several macros that expand to various limits and
parameters of the standard integer types. The macros, their meanings, and the
constraints (or restrictions) on their values are listed below:

- [x] The `CHAR_BIT` macro which expands to `8`.
- [x] The `SCHAR_MIN` macro which expands to `-127`.
- [x] The `SCHAR_MAX` macro which expands to `+127`.
- [x] The `UCHAR_MAX` macro which expands to `255`.
- [x] The `CHAR_MIN` macro which expands to `SCHAR_MIN` if the value of an
      object of type `char` is treated as a signed integer otherwise it
      expands to 0.
- [x] The `CHAR_MAX` macro which expands to `SCHAR_MAX` if the value of an
      object of type `char` is treated as a signed integer otherwise it
      expands to `UCHAR_MAX`.
- [x] The `MB_LEN_MAX` macro which expands to `1`.
- [x] The `SHRT_MIN` macro which expands to `-32767`.
- [x] The `SHRT_MAX` macro which expands to `+32767`.
- [x] The `USHRT_MAX` macro which expands to `65535U`.
- [x] The `INT_MIN` macro which expands to `-32767`.
- [x] The `INT_MAX` macro which expands to `+32767`.
- [x] The `UINT_MAX` macro which expands to `65535U`.
- [x] The `LONG_MIN` macro which expands to `-2147483647L`.
- [x] The `LONG_MAX` macro which expands to `+2147483647L`.
- [x] The `ULONG_MAX` macro which expands to `4294967295UL`.
- [x] The `LLONG_MIN` macro which expands to `-9223372036854775807LL`.
- [x] The `LLONG_MAX` macro which expands to `+9223372036854775807LL`.
- [x] The `ULLONG_MAX` macro which expands to `18446744073709551615ULL`.
