# neoc — An alternative implemention of the 'C Standard Library'

## 7.11 Localization `<locale.h>`

The header `<locale.h>` declares two functions, one type, and defines several
macros.

- [ ] The `struct lconv` type which contains members related to the
      formatting of numeric values. The structure shall contain at least the
      following members, in any order. In the "C" locale, the members shall have
      the values as specified below:
  - [ ] `char *decimal_point = ".";`
  - [ ] `char *thousands_sep = "";`
  - [ ] `char *grouping = "";`
  - [ ] `char *mon_decimal_point = "";`
  - [ ] `char *mon_thousands_sep = "";`
  - [ ] `char *mon_grouping = "";`
  - [ ] `char *positive_sign = "";`
  - [ ] `char *negative_sign = "";`
  - [ ] `char *currency_symbol = "";`
  - [ ] `char frac_digits = CHAR_MAX;`
  - [ ] `char p_cs_precedes = CHAR_MAX;`
  - [ ] `char n_cs_precedes = CHAR_MAX;`
  - [ ] `char p_sep_by_space = CHAR_MAX;`
  - [ ] `char n_sep_by_space = CHAR_MAX;`
  - [ ] `char p_sign_posn = CHAR_MAX;`
  - [ ] `char n_sign_posn = CHAR_MAX;`
  - [ ] `char *int_curr_symbol = "";`
  - [ ] `char int_frac_digits = CHAR_MAX;`
  - [ ] `char int_p_cs_precedes = CHAR_MAX;`
  - [ ] `char int_n_cs_precedes = CHAR_MAX;`
  - [ ] `char int_p_sep_by_space = CHAR_MAX;`
  - [ ] `char int_n_sep_by_space = CHAR_MAX;`
  - [ ] `char int_p_sign_posn = CHAR_MAX;`
  - [ ] `char int_n_sign_posn = CHAR_MAX;`

The macros defined are:

- [ ] The `NULL` macro
- [ ] The `LC_ALL` macro
- [ ] The `LC_COLLATE` macro
- [ ] The `LC_CTYPE` macro
- [ ] The `LC_MONETARY` macro
- [ ] The `LC_NUMERIC` macro
- [ ] The `LC_TIME` macro

which expand to integer constant expressions with distinct values, suitable for
use as the first argument to the `setlocale` function. Additional macro
definitions, beginning with the characters `LC_` and an uppercase letter, may
also be specified by the implementation.

### 7.11.1 Locale control

- [ ] The `setlocale` function

### 7.11.2 Numeric formatting convention enquiry

- [ ] The `localeconv` function
