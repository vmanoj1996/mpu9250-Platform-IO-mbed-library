#include <mbed.h>
#include "imu_mpu9250_comp_filter.h"

Serial PC(USBTX, USBRX);

int main() {

  PC.baud(115200);
  imu.initialize();
  wait(0.5);

    while(1) {
                imu.update();
                PC.printf("%f %f\n",imu.pitch,imu.roll);
                wait(0.010);
    }
}
