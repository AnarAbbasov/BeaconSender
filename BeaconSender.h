#include<string>
class BeaconSender{
    public:
       BeaconSender();
       BeaconSender(std::string comport);
       bool StartBeacon();
       bool StopBeacon();



};


