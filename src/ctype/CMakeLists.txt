### CMakeLists.txt -- for neoc
 #
 #      Copyright © 2018-NOW Synapse Research Innovation
 #      Created 14-Jan-2018 by Srikanth Anantharam
 ##

# add the ctype library targets
add_library( ctype OBJECT
  isalnum.c
  isalpha.c
  isblank.c
  iscntrl.c
  isdigit.c
  isgraph.c
  islower.c
  isprint.c
  ispunct.c
  isspace.c
  isupper.c
  isxdigit.c
  tolower.c
  toupper.c
)
