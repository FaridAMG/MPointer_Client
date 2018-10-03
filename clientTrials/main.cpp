#include <iostream>
#include "TCPClient.h"
#include "jsonBuilder.h"

int main() {

  jsonBuilder jsb = jsonBuilder();

  json js1 = jsb.addMPointerValue(368,3);
  std::string js1S = js1.dump();
  std::cout<< js1S << std::endl;

  json js2 = jsb.copyMPointer(32,12);
  std::string js2S = js2.dump();
  std::cout<< js2S << std::endl;

  json js3 = jsb.createMPointer("integer");
  std::string js3S = js3.dump();
  std::cout<< js3S << std::endl;

  json js4 = jsb.deleteMPointer(15);
  std::string js4S = js4.dump();
  std::cout<< js4S << std::endl;

  json js5 = jsb.sortMPointerDir("bogosort");
  std::string js5S = js5.dump();
  std::cout<< js5S << std::endl;

  json js6 = jsb.startGCThread();
  std::string js6S = js6.dump();
  std::cout<< js6S << std::endl;


    //---TCPCLIENT----

    TCPClient tcpc = TCPClient();

    tcpc.setup("127.0.0.1",1234);
    tcpc.Send(js2S);

    string response = tcpc.receive();

    if(response != ""){
        std::cout << "server response...:"<< response << std::endl;
    }

    std::cout << "...Client trial over..." << std::endl;

    return 0;
}