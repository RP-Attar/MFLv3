#include <stdio.h>
#include <unistd.h>

#include ".../AccelStepper/AccelStepper.h"

/// ADC Set-Up
Adafruit_ADS1115 ads;

/// Stepper Motor Set-Up
#define stepPin   38
#define dirPin    40
#define motorInterfaceType 1

const int stepsPerRev = 200;
const int stepsPerMove = 1;
int motorSpeed = 380;
AccelStepper stepperA = AccelStepper(motorInterfaceType, stepPin, dirPin);
stepperA.setMaxSpeed(800);

/// The main function that will run 
int main(int argc, char *argv[])
{
  ///int16_t adc0;
  ///double milliVolts;
  ///double bits2milliVoltsFactor;
  ///ads.setGain(GAIN_TWOTHIRDS);
  ///bits2milliVoltsFactor = 0.1875; // remember to change this according to gain
  ///ads.begin();
  ///while (true) {
  ///  adc0 = ads.readADC_Differential_0_1();
  /// milliVolts = adc0 * bits2milliVoltsFactor; 
  ///  printf(" *** %5d *** %f\n", adc0, milliVolts);
  ///  usleep(100000);
  ///}
  
  stepperA.move(100);
  usleep(500000);
  
}
