// ChocolateFactory.cpp : Defines the entry point for the console application.
//

#include "ChocolateBoiler.h"

int main()
{
  ChocolateBoiler& boiler = ChocolateBoiler::getInstance();
  ChocolateBoiler& boiler2 = ChocolateBoiler::getInstance();

  return 0;
}

