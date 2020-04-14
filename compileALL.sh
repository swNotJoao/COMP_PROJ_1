byacc -dv minor.y
flex -dl minor.l
#compile separate lex for debugging(REMOVED)
gcc -Ilib -DYYDEBUG=1 lex.yy.c y.tab.c -Llib -lutil -lfl -o minor
