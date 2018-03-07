#include <stdio.h>


#define VERSION 1.0

int main()
{
   prinf("ProjectX version %s\n", VERSION);
   func(3);
   return 0;
}


int func(int x)
{
   prinf("got number $d\n", x);
}
