#include <stdio.h>
#include <unistd.h>

#include "../ADC1115/Adafruit_ADS1015.h"

Adafruit_ADS1115 ads;

int main(int argc, char *argv[])
{
  int16_t adc0;
  double milliVolts;
  double bits2milliVoltsFactor;
  
  ads.setGain(GAIN_TWOTHIRDS);
  bits2milliVoltsFactor = 0.1875; // remember to change this according to gain

  ads.begin();
  while (true) {
    adc0 = ads.readADC_Differential_0_1();
    milliVolts = adc0 * bits2milliVoltsFactor; 
    printf(" *** %5d *** %f\n", adc0, milliVolts);
    usleep(100000);
  }
}
