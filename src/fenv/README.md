# neoc — An alternative implementation of the 'C Standard Library'

## 7.6 Floating-point environment `<fenv.h>`

The header `<fenv.h>` defines several macros, and declares types and functions
that provide access to the floating-point environment. The floating-point
environment refers collectively to any floating-point status flags and control
modes supported by the implementation. A floating-point status flag is a system
variable whose value is set (but never cleared) when a floating-point exception
is raised, which occurs as a side effect of exceptional floating-point
arithmetic to provide auxiliary information. A floating-point control mode is a
system variable whose value may be set by the user to affect the subsequent
behavior of floating-point arithmetic.

The floating-point environment has thread storage duration. The initial state
for a thread's floating-point environment is the current state of the
floating-point environment of the thread that creates it at the time of
creation.

Certain programming conventions support the intended model of use for the
floating-point environment:

- a function call does not alter its caller's floating-point control modes,
  clear its caller's floating-point status flags, nor depend on the state of
  its caller's floating-point status flags unless the function is so documented;
- a function call is assumed to require default floating-point control modes,
  unless its documentation promises otherwise;
- a function call is assumed to have the potential for raising floating-point
  exceptions, unless its documentation promises otherwise.

--------------------------------------------------------------------------------

- [ ] The `fenv_t` type represents the entire floating-point environment.
- [ ] The `fexcept_t` type represents the foating-point status flags
      collectively, including any status the implementation associates with the
      flags.
--------------------------------------------------------------------------------

Each of the following macros are defined if and only if the implementation
supports the floating-point exception by means of the functions in
[7.6.2](#7.6.2-floating-point-exceptions). Additional implementation-defined
floating-point exceptions, with macro definitions beginning with `FE_` and an
uppercase letter, may also be specified by the implementation. The defined
macros expand to integer constant expressions with values such that bitwise ORs
of all combinations of the macros result in distinct values, and furthermore,
bitwise ANDs of all combinations of the macros result in zero.

- [ ] The `FE_DIVBYZERO` macro
- [ ] The `FE_INEXACT` macro
- [ ] The `FE_INVALID` macro
- [ ] The `FE_OVERFLOW` macro
- [ ] The `FE_UNDERFLOW` macro

--------------------------------------------------------------------------------

- [ ] The `FE_ALL_EXCEPT` macro is simply the bitwise OR of all floating-point
      exception macros defined by the implementation. If no such macros are
      defined, `FE_ALL_EXCEPT` shall be defined as `0`.
--------------------------------------------------------------------------------

Each of the following macros is defined if and only if the implementation
supports getting and setting the represented rounding direction by means of the
`fegetround` and `fesetround` functions. Additional implementation-defined
rounding directions, with macro definitions beginning with `FE_` and an
uppercase letter, may also be specified by the implementation. The defined
macros expand to integer constant expressions whose values are distinct
nonnegative values.

- [ ] The `FE_DOWNWARD` macro
- [ ] The `FE_TONEAREST` macro
- [ ] The `FE_TOWARDZERO` macro
- [ ] The `FE_UPWARD` macro

--------------------------------------------------------------------------------

- [ ] The `FE_DFL_ENV` macro represents the default floating-point environment
       — the one installed at program startup — and has type "pointer to
      const-qualified `fenv_t`". It can be used as an argument to `<fenv.h>`
      functions that manage the floating-point environment.
--------------------------------------------------------------------------------

Additional implementation-defined environments, with macro definitions beginning
with `FE_` and an uppercase letter, and having type "pointer to const-qualified
`fenv_t`", may also be specified by the implementation.

### 7.6.1 The `FENV_ACCESS` pragma

The `FENV_ACCESS` pragma provides a means to inform the implementation when a
program might access the floating-point environment to test floating-point
status flags or run under non-default floating-point control modes. The pragma
shall occur either outside external declarations or preceding all explicit
declarations and statements inside a compound statement. When outside external
declarations, the pragma takes effect from its occurrence until another
`FENV_ACCESS` pragma is encountered, or until the end of the translation unit.
When inside a compound statement, the pragma takes effect from its occurrence
until another `FENV_ACCESS` pragma is encountered (including within a nested
compound statement), or until the end of the compound statement; at the end of a
compound statement the state for the pragma is restored to its condition just
before the compound statement. If this pragma is used in any other context, the
behavior is undefined. If part of a program tests floating-point status flags,
sets floating-point control modes, or runs under non-default mode settings, but
was translated with the state for the `FENV_ACCESS` pragma "off", the behavior
is undefined. The default state ("on" or "off") for the pragma is
implementation-defined. (When execution passes from a part of the program
translated with `FENV_ACCESS` "off" to a part translated with `FENV_ACCESS`
"on", the state of the floating-point status flags is unspecified and the
floating-point control modes have their default settings.)

### 7.6.2 Floating-point exceptions

- [ ] The `feclearexcept` function
- [ ] The `fegetexceptflag` function
- [ ] The `feraiseexcept` function
- [ ] The `fesetexceptflag` function
- [ ] The `fetestexcept` function

### 7.6.3 Rounding

- [ ] The `fegetround` function
- [ ] The `fesetround` function

### 7.6.4 Environment

- [ ] The `fegetenv` function
- [ ] The `feholdexcept` function
- [ ] The `fesetenv` function
- [ ] The `feupdateenv` function
