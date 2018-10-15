#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int
main(int argc, char *argv[])
{
  int n;
  n = settickets(1);
  printf(0, "%d\n", n);
  exit();
}
