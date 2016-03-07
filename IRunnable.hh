#include <cstdio>
#include <cstdbool>
#include <iostream>

class IRunnable{
public:
  virtual bool run() = 0;
  virtual bool prepare(int size) = 0;


};
