byacc -dv gram.y
flex -dl scan.l
#compile separate lex for debugging(REMOVED)
gcc -Ilib -DYYDEBUG=1 lex.yy.c y.tab.c -Llib -lutil -lfl
