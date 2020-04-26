INCLUDE_PATH=-I/usr/include/python3.8
LIB_PATH=-L/usr/lib/x86_64-linux-gnu -L/usr/lib/python3.8/config-3.8-x86_64-linux-gnu
LIB=-lboost_python38 -lpython3.8
build: Sources/feigenbaum.cpp
	g++ -g -Wall -shared -fPIC $(INCLUDE_PATH) $(LIB_PATH) \
		Sources/feigenbaum.cpp $(LIB) -o Build/libfeigenbaum.so