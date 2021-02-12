#include <iostream>
#include "Factory.hpp"
using namespace std;

class Cake : public FactoryInterface{
public:
  void func (){ cout << "I am cake." << endl; }
};

class Cookie : public FactoryInterface{
public:
  void func (){ cout << "I am cookie." << endl; }
};

class cake_Factory : public Factory{
public:
  FactoryInterface *create (){ return new Cake(); }
};

class cookie_Factory : public Factory{
public:
  FactoryInterface *create (){ return new Cookie(); }
};

int main (){
  cake_Factory caf;
  cookie_Factory cof;

  FactoryInterface *fi1 = caf.create();
  FactoryInterface *fi2 = cof.create();

  fi1->func();
  fi2->func();

  return 0;
}
