#include <stdio.h>


#define VERSION 1.2

int main()
{
   prinf("ProjectX version %s\n", VERSION);
   func1(3);
   func2(5);
   return 0;
}


int func(int x)
{
   prinf("func1: got number $d\n", x);
}

int func2(int x)
{
   prinf("func2: got number $d\n", x);
}
