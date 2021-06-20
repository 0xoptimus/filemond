#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main() {
  int iprocid = fork();

  if(iprocid < 0) {
    cout << "some error occured: can not initiate file monitor" << endl;
  } else if(iprocid == 0) {
    cout << "Start Monitor" << endl;
  } else {
    cout << "Acts as watchdog" << endl;
    while(true) {
      int iwstatus = 0;
      waitpid(iprocid, &iwstatus, 0);
      if(WIFEXITED(iwstatus)) {
        cout << "Graceful shutdown of file monitor" << endl;
        break;
      }
    }
  }
}
