# neoc — An alternative implemention of the 'C Standard Library'

## 7.8 Format conversion of integer types `<inttypes.h>`

The header `<inttypes.h>` includes the header `<stdint.h>` and extends it with
additional facilities provided by hosted implementations.

It declares functions for manipulating greatest-width integers and converting
numeric character strings to greatest-width integers, and it declares

- [ ] The `imaxdiv_t` type which is a structure type of the value returned by
      the `imaxdiv` function. For each type declared in `<stdint.h>`, it defines
      corresponding macros for conversion specifiers for use with the formatted
      input/output functions.

### 7.8.1 Macros for format specifiers

Each of the following object-like macros in this section expands to a character
string literal containing a conversion specifier, possibly modified by a length
modifier, suitable for use within the format argument of a formatted input/
output function when converting the corresponding integer type. These macro
names have the general form of `PRI` (character string literals for the
`fprintf` and `fwprintf` family) or `SCN` (character string literals for the
`fscanf` and `fwscanf` family), followed by the conversion specifier, followed
by a name corresponding to a similar type name in [7.20.1](../stdint/README.md#7.20.1-integer-types).
In these names, _N_ represents the width of the type as described in [7.20.1](../stdint/README.md#7.20.1-integer-types).
For example, `PRIdFAST32` can be used in a format string to print the value of
an integer of type int_fast32_t.

The `fprintf` macros for signed integers are:

- [ ] `PRId`_N_
- [ ] `PRIdLEAST`_N_
- [ ] `PRIdFAST`_N_
- [ ] `PRIdMAX`
- [ ] `PRIdPTR`
- [ ] `PRIi`_N_
- [ ] `PRIiLEAST`_N_
- [ ] `PRIiFAST`_N_
- [ ] `PRIiMAX`
- [ ] `PRIiPTR`

The `fprintf` macros for unsigned integers are:

- [ ] `PRIo`_N_
- [ ] `PRIoLEAST`_N_
- [ ] `PRIoFAST`_N_
- [ ] `PRIoMAX`
- [ ] `PRIoPTR`
- [ ] `PRIu`_N_
- [ ] `PRIuLEAST`_N_
- [ ] `PRIuFAST`_N_
- [ ] `PRIuMAX`
- [ ] `PRIuPTR`
- [ ] `PRIx`_N_
- [ ] `PRIxLEAST`_N_
- [ ] `PRIxFAST`_N_
- [ ] `PRIxMAX`
- [ ] `PRIxPTR`
- [ ] `PRIX`_N_
- [ ] `PRIXLEAST`_N_
- [ ] `PRIXFAST`_N_
- [ ] `PRIXMAX`
- [ ] `PRIXPTR`

The `fscanf` macros for signed integers are:

- [ ] `SCNd`_N_
- [ ] `SCNdLEAST`_N_
- [ ] `SCNdFAST`_N_
- [ ] `SCNdMAX`
- [ ] `SCNdPTR`
- [ ] `SCNi`_N_
- [ ] `SCNiLEAST`_N_
- [ ] `SCNiFAST`_N_
- [ ] `SCNiMAX`
- [ ] `SCNiPTR`

The `fscanf` macros for unsigned integers are:

- [ ] `SCNo`_N_
- [ ] `SCNoLEAST`_N_
- [ ] `SCNoFAST`_N_
- [ ] `SCNoMAX`
- [ ] `SCNoPTR`
- [ ] `SCNu`_N_
- [ ] `SCNuLEAST`_N_
- [ ] `SCNuFAST`_N_
- [ ] `SCNuMAX`
- [ ] `SCNuPTR`
- [ ] `SCNx`_N_
- [ ] `SCNxLEAST`_N_
- [ ] `SCNxFAST`_N_
- [ ] `SCNxMAX`
- [ ] `SCNxPTR`

For each type that the implementation provides in `<stdint.h>`, the
corresponding `fprintf` macros shall be defined and the corresponding `fscanf`
macros shall be defined unless the implementation does not have a suitable
`fscanf` length modifier for the type.

### 7.8.2 Functions for greatest-width integer types

- [ ] The `imaxabs` function
- [ ] The `imaxdiv` function
- [ ] The `strtoimax` and `strtoumax` functions
- [ ] The `wcstoimax` and `wcstoumax` functions
