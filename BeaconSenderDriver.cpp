#include <iostream>
#include "BeaconSender.h"



int main()
{

BeaconSender *bs=new BeaconSender();
if (bs->StartBeacon()==false)
    {
       std::cout<<"error opening COM port";
       return 1;
    }

return 0;
}
