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
}

BeaconSender::BeaconSender(std::string comport)
{
    //Initialise serialPort with option
}

bool BeaconSender::StartBeacon(){
    std::cout<<"starting Beacon!";
return true;
}

#endif
#endif