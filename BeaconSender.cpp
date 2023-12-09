#include "BeaconSender.h"
#ifndef STRING
#define STRING
#include <string>
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>

BeaconSender::BeaconSender()//:
//frombeacon{std::ifstream("myfile.txt", std::ifstream::in)}
{
    // Initialise serialport
  
  //tobeacon=std::ofstream("myfile.txt", std::ifstream::out);
  

}

BeaconSender::BeaconSender(std::string comport):
frombeacon(comport)
{
    //Initialise serialPort with option
    //frombeacon.open(comport);
}

bool BeaconSender::StartBeacon(){
    std::cout<<"starting Beacon!";
    frombeacon.open("myfile.txt");
    serialib sp=serialib();
    
    std::string received;
    frombeacon>>received;
    std::cout<<received;
    frombeacon>>received;
    frombeacon.close();
    std::cout<<received;
return true;
}

bool BeaconSender::StopBeacon(){
     std::cout<<"stopping Beacon!";
     tobeacon.open("myfile.txt", std::ifstream::out);
     tobeacon<<"gnoynik";
     tobeacon.close();
     return true;

     
}

#endif
#endif