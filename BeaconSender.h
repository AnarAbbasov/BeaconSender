#include<string>
#include<fstream>
#include "serialib.h"
class BeaconSender{
    public:
       BeaconSender();
       BeaconSender(std::string comport);
       bool StartBeacon();
       bool StopBeacon();

    private:
      serialib serial=serialib();
     

};


