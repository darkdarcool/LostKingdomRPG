#include "util.hpp"

void slow_print(const std::string& message, unsigned int millis_per_char) {
  for (const char c : message) {
    // flush is used to make sure the console is empty
    std::cout << c << std::flush;

    // Ask the thread to sleep for at least n millis.
    std::this_thread::sleep_for(std::chrono::milliseconds(millis_per_char));
  }
}