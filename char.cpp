#include "char.hpp"
Char::Char(int health, int attack, int crit, std::string name) {
  this-> health = health, this-> attack = attack, this-> crit = crit;
  this-> name = name;
}
class Dad : public Char {
  Dad() : Char() {
    Char(5, 5, 5, "Dad");
  }  
};
class Bokoblin : public Char {
  Bokoblin() : Char() {
    Char(10, 5, 5, "Bokoblin");
  }
};
class MaliceBokoblin : public Char {
  MaliceBokoblin() : Char() {
    Char(20, 10, 10, "Malice Bokoblin");
  }
};
class Lizalfos : public Char {
  Lizalfos() : Char() {
    Char(15, 10, 10, "Lizalfos");
  }
};
class MaliceLizalfos : public Char {
  MaliceLizalfos() : Char() {
    Char(30, 20, 20, "Malice Lizalfos");
  }
};
class Hinox : public Char {
  Hinox() : Char() {
    Char(50, 40, 40, "Hinox");
  }
};
class MaliceHinox : public Char {
  MaliceHinox() : Char() {
    Char(100, 80, 80, "Malice Hinox");
  }
};
class DroneGuardian : public Char {
  DroneGuardian() : Char() {
    Char(1500, 200, 50, "SkyWatcher Guardian");
  }
};
class Guardian : public Char {
  Guardian() : Char() {
    Char(2000, 200, 50, "Guardian");
  }
};
class MaliceGuardian : public Char {
  MaliceGuardian() : Char() {
    Char(4000, 400, 100, "Guardian");
  }
};
class GroundGuardian : public Char {
  GroundGuardian() : Char() {
    Char(2000, 200, 50, "Ground Guardian");
  }
};
class MaliceGroundGuardian : public Char {
  MaliceGroundGuardian() : Char() {
    Char(4000, 400, 100, "Malice Ground Guardian");
  }
};
class StoneTalus : public Char {
  StoneTalus() : Char() {
    Char(5000, 100, 100, "Stone Talus");
  }
};
class MaliceStoneTalus : public Char {
  MaliceStoneTalus() : Char() {
    Char(10000, 200, 200, "Malice Stone Talus");
  }
};