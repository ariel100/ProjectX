#include <stdio.h>


#define VERSION 1.3

int main()
{
   prinf("ProjectX version %s\n", VERSION);
   func1(10);
   func2(11);
   return 0;
}


void func(int x)
{
   prinf("func1: got number $d\n", x);
}

void func2(int x)
{
   prinf("func2: got number $d\n", x);
}
