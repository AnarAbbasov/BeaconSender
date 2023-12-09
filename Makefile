OBJFILE=./objs/
SRC_DIR=./

OUTPUT_DIR=./static_lib/

EXE_OUTPUT=./


$(EXE_OUTPUT)BeaconSenderDriver.exe: $(OBJFILE)BeaconSenderDriver.obj $(OBJFILE)serialib.obj $(OUTPUT_DIR)libBeaconSender.a
	g++ -o $(EXE_OUTPUT)BeaconSenderDriver.exe $(OBJFILE)BeaconSenderDriver.obj $(OBJFILE)serialib.obj -L$(OUTPUT_DIR) -lBeaconSender

$(OUTPUT_DIR)libBeaconSender.a: $(OBJFILE)BeaconSender.obj
	ar -rcs  $(OUTPUT_DIR)libBeaconSender.a  $(OBJFILE)BeaconSender.obj


$(OBJFILE)BeaconSenderDriver.obj: $(SRC_DIR)BeaconSenderDriver.cpp
	g++ -c -g -o  $(OBJFILE)BeaconSenderDriver.obj $(SRC_DIR)BeaconSenderDriver.cpp



$(OBJFILE)BeaconSender.obj: $(SRC_DIR)BeaconSender.cpp
	g++ -c -g -o $(OBJFILE)BeaconSender.obj $(SRC_DIR)BeaconSender.cpp 

$(OBJFILE)serialib.obj: $(SRC_DIR)serialib.cpp
	g++ -c -g -o $(OBJFILE)serialib.obj $(SRC_DIR)serialib.cpp

clean:
	-rm $(OBJFILE)BeaconSender.obj
	-rm $(OBJFILE)BeaconSenderDriver.obj
	-rm $(OUTPUT_DIR)BeaconSender.a