#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int ticket = 50;  // Default Value

  if(argc == 2){
    ticket = atoi(argv[1]);
  }

  printf(1, "Process ID: %d\nOriginal Ticket Count: %d\n", getpid(), getticket());

  if (setticket(ticket) < 0) {
	  printf(2, "Error setting ticket value\n");
	  exit();
  }

  printf(1, "New Ticket Count: %d\n", getticket());
  exit();
}
