#include "ncurses_display.h"
#include "system.h"
#include <iostream>
#include <string>
#include <vector>
int main() {
  System system;
  NCursesDisplay::Display(system);
  
}