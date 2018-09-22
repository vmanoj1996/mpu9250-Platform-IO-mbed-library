# mpu9250-library
Library for interfacing mpu9250 with Mbed supported boards.  

Takes in Raw Accelerometer and Gyro Readings and applies complementary filter to get Pitch and Roll. It cannot get yaw angle!!

Tested with ST-Nucleo F446RE board  

Please Note that the library is not drectly compatible with mbed online compiler(Since Mbed online uses ARMCC compiler and doesnot support C++11 yet)
It can be used for MPU6050 by modifying inv_mpu.c

https://github.com/vmanoj1996/mpu9250-Platform-IO-mbed-library/blob/c84a85229931356a8f585f137df75a3473cc59e9/Header%20Files/inv_mpu/inv_mpu.c#L135
