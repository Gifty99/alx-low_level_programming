!#/bash/bin
gcc -c *.c*
ls
ar -rc liball.a *.o
ranlib liball.a
ar -t liball.a
