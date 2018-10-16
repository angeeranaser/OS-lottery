#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int
main(int argc, char *argv[])
{

  struct pstat st;
  int pid = getpid();
  int i;
  getpinfo(&st);

  for (i = 0; i < NPROC; i++) {
    if (st.inuse[i]) {
      if (st.pid[i] == pid) {
	printf(1, "--- PROCESS INFORMATION ---\n");
	printf(1, "inuse: %d\npid: %d\ntickets: %d\nticks: %d\n", st.inuse[i], st.pid[i], st.tickets[i], st.ticks[i]);
      }
    }
  }

  exit();

}
