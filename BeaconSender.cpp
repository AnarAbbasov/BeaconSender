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

BeaconSender::BeaconSender(std::string comport)

{
    //Initialise serialPort with option
    //frombeacon.open(comport);
}

bool BeaconSender::StartBeacon(){
    std::cout<<"starting Beacon!";
     

    
    char errorOpening = serial.openDevice("/dev/ttyUSB0", 9600);
     if (errorOpening!=1) return errorOpening;
    printf ("Successful connection to %s\n","/dev/ttyUSB0");


     // Create the string
    char buffer[15] = "hello\n";
    char rbuffer[205];

    // Write the string on the serial device
    this->serial.writeString(buffer);
    printf ("String sent: %s", buffer);

    // Read the string
    this->serial.readString(rbuffer, '\n', 204, 2000);
    printf("String read: %s\n", rbuffer);

return true;
}

bool BeaconSender::StopBeacon(){
     
     return true;

     
}

#endif
#endif