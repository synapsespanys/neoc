### CMakeLists.txt -- for neoc
 #
 #      Copyright © 2018-NOW Synapse Research Innovation
 #      Created 14-Jan-2018 by Srikanth Anantharam
 ##

 # add the libneoc header install targets
install(FILES
  assert.h
  ctype.h
  errno.h
  iso646.h
  limits.h
  stdbool.h
  stdnoreturn.h
  DESTINATION include
)
