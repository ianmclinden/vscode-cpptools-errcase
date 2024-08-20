#include <iostream>
#include "Values.h"

using namespace itest::Values;

int main(int argc, char **argv)
{
   // CanReadMe is defined. WillReadMe is not, should error squiggle
   std::cout << "Can read local ? " << (WillReadMe ? "true" : "false") << std::endl;
   return 0;
}