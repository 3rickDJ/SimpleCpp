#include <iostream>
using namespace std;

class Instrument {
public:
  virtual void MakeSound() { cout << "Instrument playing...\n"; }
};

class Accordion : public Instrument {
public:
  void MakeSound() { cout << "An accordion is playing...\n"; }
};

int main() {
  Instrument *i1 = new Accordion();
  i1->MakeSound();

  Accordion *i2 = new Accordion();
  i2->MakeSound();
}
