#include "processor.h"
#include "linux_parser.h"
// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
  long active, total;
  float percent = 0.0;
  active = LinuxParser::ActiveJiffies();
  total = LinuxParser::Jiffies();
  percent = (active - lastActive) / (total - lastTotal);
  lastTotal = total;
  lastActive = active;
  return percent;
}