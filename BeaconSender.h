#include<string>
#include<fstream>
class BeaconSender{
    public:
       BeaconSender();
       BeaconSender(std::string comport);
       bool StartBeacon();
       bool StopBeacon();

    private:
      std::ifstream frombeacon;
      std::ofstream tobeacon;

};


