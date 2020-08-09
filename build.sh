#!/bin/bash

DIR_BUID_PATH=./build
if [ -d $DIR_BUID_PATH ]
then
		rm build -rf	
		echo "build dir deleted OK! "	
else
		echo "no build dir  ,create build dir"			
fi

mkdir -p build
cd build	

#source /opt/pancake-core-sdk/environment-setup-armv7ahf-neon-poky-linux-gnueabi  
cmake .. && make  -j 4

