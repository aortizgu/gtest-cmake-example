#include "bar.h"
#include "foo.h"
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout<<"Hola"<<std::endl;
    Bar bar;
    Foo foo(bar);
    foo.baz(true);
    foo.baz(false);
}
