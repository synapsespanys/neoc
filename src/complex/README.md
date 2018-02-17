# neoc — An alternative implementation of the 'C Standard Library'

## 7.3 Complex arithmetic `<complex.h>`

### 7.3.1 Introduction

The header `<complex.h>` defines macros and declares functions that support
complex arithmetic.

Implementations that define the macro `__STDC_NO_COMPLEX__` need not provide
this header nor support any of its facilities.

Following macros are defined:

- [ ] The `complex` macro which expands to `_Complex`.
- [ ] The `_Complex_I` macro which expands to a constant expression of type
      `const float _Complex`, with the value of the imaginary unit.
- [ ] The `imaginary` macro which expands to `_Imaginary`.
- [ ] The `_Imaginary_I` macro which expands to a constant expression of type
      `const float _Imaginary`, with the value of the imaginary unit.
- [ ] The `I` macro which expands either to `_Imaginary_I` or `_Complex_I`. If
      `_Imaginary_I` is not defined, `I` shall expand to `_Complex_I`.

### 7.3.2 Conventions

Values are interpreted as radians, not degrees. An implementation may set
`errno` but is not required to.

### 7.3.3 Branch cuts

Some of the functions below have branch cuts, across which the function is
discontinuous. For implementations with a signed zero (including all IEC 60559
implementations) that follow the specifications of annex G, the sign of zero
distinguishes one side of a cut from another so the function is continuous
(except for format limitations) as the cut is approached from either side. For
example, for the square root function, which has a branch cut along the negative
real axis, the top of the cut, with imaginary part `+0`, maps to the positive
imaginary axis, and the bottom of the cut, with imaginary part `−0`, maps to the
negative imaginary axis.

Implementations that do not support a signed zero (see annex F) cannot
distinguish the sides of branch cuts. These implementations shall map a cut so
the function is continuous as the cut is approached coming around the finite
endpoint of the cut in a counter clockwise direction. (Branch cuts for the
functions specified here have just one finite endpoint.) For example, for the
square root function, coming counter clockwise around the finite endpoint of
the cut along the negative real axis approaches the cut from above, so the cut
maps to the positive imaginary axis.

### 7.3.4 The `CX_LIMITED_RANGE` pragma

The usual mathematical formulas for complex multiply, divide, and absolute value
are problematic because of their treatment of infinities and because of undue
overflow and underflow. The `CX_LIMITED_RANGE` pragma can be used to inform the
implementation that (where the state is "on") the usual mathematical formulas
are acceptable. The pragma can occur either outside external declarations or
preceding all explicit declarations and statements inside a compound statement.
When outside external declarations, the pragma takes effect from its occurrence
until another `CX_LIMITED_RANGE` pragma is encountered, or until the end of the
translation unit. When inside a compound statement, the pragma takes effect from
its occurrence until another `CX_LIMITED_RANGE` pragma is encountered (including
within a nested compound statement), or until the end of the compound statement;
at the end of a compound statement the state for the pragma is restored to its
condition just before the compound statement. If this pragma is used in any
other context, the behavior is undefined. The default state for the pragma is
"off".

### 7.3.5 Trigonometric functions

- [ ] The `cacos` functions
- [ ] The `casin` functions
- [ ] The `catan` functions
- [ ] The `ccos` functions
- [ ] The `csin` functions
- [ ] The `ctan` functions

### 7.3.6 Hyperbolic functions

- [ ] The `cacosh` functions
- [ ] The `casinh` functions
- [ ] The `catanh` functions
- [ ] The `ccosh` functions
- [ ] The `csinh` functions
- [ ] The `ctanh` functions

### 7.3.7 Exponential and logarithmic functions

- [ ] The `cexp` functions
- [ ] The `clog` functions

### 7.3.8 Power and absolute-value functions

- [ ] The `cabs` functions
- [ ] The `cpow` functions
- [ ] The `csqrt` functions

### 7.3.9 Manipulation functions

- [ ] The `carg` functions
- [ ] The `cimag` functions
- [ ] The `CMPLX` macros
- [ ] The `conj` functions
- [ ] The `cproj` functions
- [ ] The `creal` functions
