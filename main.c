#include <stdio.h>


#define VERSION 1.3

void main()
{
   prinf("ProjectX version %s\n", VERSION);
   func1(110);
   func2(110);
}


void func(int x)
{
   prinf("func1: got number $d\n", x);
}

void func2(int x)
{
   prinf("func2: got number $d\n", x);
}
