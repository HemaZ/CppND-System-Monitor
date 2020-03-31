#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
 long lastIdle = 0;
 long lastActive = 0;
 long lastTotal  = 0;
};

#endif