# mpu9250-library
Library for interfacing mpu9250 with Mbed supported boards.  

Takes in Raw Accelerometer and Gyro Readings and applies complementary filter to get Pitch and Roll.  

Tested with ST-Nucleo F446RE board  

Please Note that the library is not drectly compatible with mbed online compiler(Since it uses ARMCC compiler and doesnot support C++11 yet)
