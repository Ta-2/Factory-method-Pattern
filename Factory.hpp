#ifndef FACT_HPP
#define FACT_HPP

#include <iostream>
using namespace std;

class FactoryInterface{
public:
  virtual void func() = 0;
  virtual ~FactoryInterface(){};
};

class Factory {
public:
  virtual FactoryInterface *create () = 0;
};

#endif
