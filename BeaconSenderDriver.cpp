

#include <iostream>
#include "BeaconSender.h"



int main()
{

    BeaconSender *bs=new BeaconSender();
    bs->StartBeacon();
    bs->StopBeacon();
    //BeaconSender bs1=BeaconSender();
    //bs1.StartBeacon();
}
