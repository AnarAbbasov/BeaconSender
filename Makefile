OBJFILE=./objs/
SRC_DIR=./

OUTPUT_DIR=./static_lib/

EXE_OUTPUT=./


$(EXE_OUTPUT)BeaconSenderDriver.exe: $(OBJFILE)BeaconSenderDriver.obj $(OUTPUT_DIR)libserialib.a $(OUTPUT_DIR)libBeaconSender.a
	g++ -o $(EXE_OUTPUT)BeaconSenderDriver.exe $(OBJFILE)BeaconSenderDriver.obj  -L$(OUTPUT_DIR) -lBeaconSender -lserialib

$(OUTPUT_DIR)libBeaconSender.a: $(OBJFILE)BeaconSender.obj
	ar -rcs  $(OUTPUT_DIR)libBeaconSender.a  $(OBJFILE)BeaconSender.obj

$(OUTPUT_DIR)libserialib.a: $(OBJFILE)serialib.obj
	ar -rcs  $(OUTPUT_DIR)libserialib.a  $(OBJFILE)serialib.obj


$(OBJFILE)BeaconSenderDriver.obj: $(SRC_DIR)BeaconSenderDriver.cpp
	g++ -c -g -o  $(OBJFILE)BeaconSenderDriver.obj $(SRC_DIR)BeaconSenderDriver.cpp



$(OBJFILE)BeaconSender.obj: $(SRC_DIR)BeaconSender.cpp
	g++ -fPIE -c -g -o $(OBJFILE)BeaconSender.obj $(SRC_DIR)BeaconSender.cpp 

$(OBJFILE)serialib.obj: $(SRC_DIR)serialib.cpp
	g++ -fPIC -c -g -o $(OBJFILE)serialib.obj $(SRC_DIR)serialib.cpp

clean:
	-rm $(OBJFILE)BeaconSender.obj
	-rm $(OBJFILE)BeaconSenderDriver.obj
	-rm $(OUTPUT_DIR)BeaconSender.a