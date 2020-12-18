#pragma once

#include <string>
#include <iostream>

class Char {
public:
  int health;
  int attack;
  int crit;
  std::string name;
  std::string convo(std::string context);

  Char(int health, int attack, int crit, std::string name);
  Char();
};


// v These are the names if anyone was wondering v
/*
dad
yourself(via input)
maybe pets(probably a K9 dog)
other people on the explorer team(betray you)
enemies:
  bokoblins
  lizalfos
  hinox
  stone talus
  guardians
  all of them can have MALICE infront of their name that makes them 2x for powerful but we will only encounter those twords the end.
*/