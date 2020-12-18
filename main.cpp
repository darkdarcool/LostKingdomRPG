#include <unistd.h>
#include "util.hpp"
#include "random.h"
#include "char.cpp"
/*
std::string black = "\033[0;30m";
std::string red = "\033[0;31m";
std::string green = "\033[0;32m";
std::string orange = "\033[0;33m";
std::string blue = "\033[0;34m";
std::string magenta = "\033[0;35m";
std::string cyan = "\033[0;36m";
std::string gray = "\033[0;90m";
std::string bright_red = "\033[0;91m";
std::string bright_green = "\033[0;92m";
std::string yellow = "\033[0;93m";
std::string bright_blue = "\033[0;94m";
std::string bright_magenta = "\033[0;95m";
std::string bright_cyan = "\033[0;96m";
*/
std::string white = "\033[0;97m";
std::string clear = "\033[2J\033[u";
Char you(100,5,5,"");
Char boboklins(80,6,4,"Boboklins");
void initbattle(Char, bool malace, int ecrit);
int main() {
  std::cout << "\033c";
  char normal[] = "\x1b[0;39m";
  char black[] = "\x1b[0;30m";
  char red[] = { 0x1b, '[', '0', ';', '3', '1', 'm', 0    };
  char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0  };
  char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
  char blue[] = { 0x1b, '[', '0', ';', '3', '4', 'm', 0   };
  char purple[] = { 0x1b, '[', '0', ';', '3', '5', 'm', 0 };
  char cyan[] = { 0x1b, '[', '0', ';', '3', '6', 'm', 0   };
  char Lgray[] = { 0x1b, '[', '0', ';', '3', '7', 'm', 0  };
  char Dgray[] = { 0x1b, '[', '0', ';', '3', '8', 'm', 0  };
  char Bred[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0   };
  //                          ^ change them to a 1 
  std::string name; 
  unsigned int microsecond = 1000000;
  std::cout << blue;
  slow_print("Welcome to this text advenure! Please enter in your name!\n", 50); 
  std::cout << normal;
  std::cin >> name;
  usleep(3 * microsecond);
  std::cout << blue;
  slow_print("Welcome to this text adventure ", 50);
  std::cout << name;
  slow_print("! My name is darkdarcool, and I am the maker of this game!", 50);
  usleep(2 * microsecond);
  slow_print("\nAre you ready to start?\n[y/n]\n", 75);
  std::string readyUp;
  std::cin >> readyUp;
  you.name=name;
  if (readyUp == "y") {
    std::cout << red;
    slow_print("While ");
    std::cout << name;
    slow_print(" was playing on his nintendo switch, he heared his dad coming in. Saying he needed help with something. You think, why the heck would my dad want anything with me? All he has ever done was take advantage of you. \"Hi son, I uhh, have some thing to ask you\". \"What do you want creepo\" ", 50);
    std::cout << name;
    slow_print(" said. \"Well, as you know, I'm an explorer, and you are super good with computers. And on my team we need a computer guy. \". \" Oh I get it, you only want my skills?\". \"Yes\" your Dad says. Well, at least he was honest and straight with you and cut to the chase. You think you'll agree AS LONG as you go some place that's exiting.  ", 50);
    usleep(2 * microsecond);
    std::cout << "\033c";
    std::cout << cyan;
    slow_print("\"Ok, I'll go, as long as its someplace exiting.\" ", 50);
    std::cout << name;
    slow_print(" said. \"We would be going to the Lost Kingdom of Cookie Land. Told to be full of the most delicous cookies, a and cookie shaped gold.\". Damn. He is bringing you to the lost Kingdom of Cookie Land, only told in tales by really old autistic people??  ", 50);
    usleep(3 * microsecond);
    std::cout << "\033c";
    slow_print("\"Well, I guess I can go. But on one condition, I get to bring my K9 dog.\" Wait, what it your dogs name?\n", 50);
    std::string dogName;
    std::cout << normal;
    std::cin >> dogName;
    if (name == dogName) {
      std::cout << red;
      slow_print("ERROR, PET NAME CAN NOT BE THE SAME AS YOUR NAME", 50);
      while (true) {
        slow_print("\nPlease enter you pet's name that is not your own name.\n", 50);
        std::cin >> dogName;
        if (dogName == name) {
          slow_print("ERROR;\n", 50);
        }
        else {
          break;
        }
      }
    }
    std::cout << cyan;
    std::cout << "\033c";
    slow_print("{Your dog's name is ", 50);
    std::cout << dogName;
    slow_print("}", 50);
    usleep(2 * microsecond);
    std::cout << "\033c";
    slow_print("You pack a basic baseball bat (low range and damage.), and 5 bandages for the trip", 50);
    char weaponList[] = {"(Basic/Low range) Bat"};
    char  bandageCount = 5;
    char medKitCount = 0;
    char coins = 0;
    char xp = 0;
    // ^~~ These are just our def statements that can be upgraded.
    slow_print("Once you think your ready and you say goodbye to your family, you embark on your journey with you dad.", 50);
    slow_print("The first thing you do is get into a black car, and drive away // editor note: like your being kidnapped. //. After a while you arrive at an airport. It looks pretty abandoned. But when you go inside...... it still lookes pretty abandoned. But when walking through, you go into a room that looks really advanced. \"This is a battle simulation for some of the enimeis we are going to encounter while we are there.\"", 50);
    usleep(2 + microsecond);
    std::cout << "\033c";
    slow_print("\"With your bat, you can kill them! I think the farther in the temples we go, the more powerful they become. Wait are you waiting for GET IN THERE!! \" your dad says. Then you step in, and it all starts\n", 50);
    // Just put the battle stuff here, I will build context around it.
    initbattle(boboklins, false, 3);
    // Well, this is embarresing.
  }
  else if (readyUp == "n") {
    printf("Ending...\n");
    usleep(1 * microsecond);
  }
  else {
    std::cout << red;
    while (true) {
      slow_print("Please enter y or n\n", 50);
      std::cin >> readyUp;
      if (readyUp == "y") {
        break;
      }
      else if (readyUp == "n") {
        std::cout << normal;
        std::cout << "Ending...";
        std::cout << "Ended";
        usleep(5000 * microsecond);
        std::cout << "How are you this patient??";
      }
      else {
        return 0;
      }
    }
  }
}
void initbattle(Char emob, bool malace, int ecrit) {
  int admg;
  int eadmg;
  int acrit, eacrit;
  admg = pickrandint(you.attack-2, you.attack);
  if (malace == false) {
    eadmg=pickrandint(emob.attack-2,emob.attack);
  }
  else {
    eadmg = pickrandint(emob.attack-2,emob.attack)*2;
  }
  admg += pickrandint(0, you.crit);
  eadmg += pickrandint(0, ecrit);
  slow_print("Enemy: " + emob.name + "\n\nHealth: " + std::to_string(emob.health) + "\nAttack: "+std::to_string(emob.attack) + "\nCritical Hit: " + std::to_string(ecrit), 35);
  std::cout << "\n\n";
  slow_print("You: " + you.name + "\n\nHealth: " + std::to_string(you.health) + "\nAttack: "+std::to_string(you.attack) + "\nCritical Hit: " + std::to_string(you.crit), 35);
}  