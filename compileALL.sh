make -C lib
byacc -dv gram.y
flex -dl scan.l
gcc -g -c -Ilib lex.yy.c y.tab.c -Llib -lutil
