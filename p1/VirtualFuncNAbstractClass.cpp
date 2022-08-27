#include <iostream>
using namespace std;

class Instrument {
public:
  virtual void MakeSound() = 0 ;
};

class Accordion : public Instrument {
public:
  void MakeSound() { cout << "An accordion is playing...\n"; }
};

class Piano : public Instrument {
public:
  void MakeSound() { cout << "A piano is playing...\n"; }
};

int main() {
  Instrument *i1 = new Accordion();
  /* i1->MakeSound(); */

  Instrument *i2 = new Piano();
  /* i2->MakeSound(); */
  Instrument* instruments[2]= {i1,i2};
  for (int i =0; i<2;i++)
      instruments[i]->MakeSound();
}
