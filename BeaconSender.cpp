#include "BeaconSender.h"
#ifndef STRING
#define STRING
#include <string>
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>

BeaconSender::BeaconSender()

{
    // Initialise serialport
    frombeacon.open("myfile.txt");

}

BeaconSender::BeaconSender(std::string comport)
{
    //Initialise serialPort with option
}

bool BeaconSender::StartBeacon(){
    std::cout<<"starting Beacon!";
    std::string received;
    frombeacon>>received;
    std::cout<<received;
return true;
}

#endif
#endif