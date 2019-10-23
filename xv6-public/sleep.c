#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv)
{
    if(argc < 2){
      printf(2, "ERROR");
      exit();
    }
    int it;
    int time = atoi(argv[it]);
    for (it = 1; it < argc; it++) {
        sleep(time * 100);
    }

  exit();
}