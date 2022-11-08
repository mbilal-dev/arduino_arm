
# Arduino Arm

This robotic arm has been created at a model scale level, to demostrate how a real, functioning exoskeleton can be built.


## Components

The robotic arm uses:
1. One Arduino Uno R3 Circuitboard (equipped with an ATmega 328 microchip).
2. One Large Breadboard.
3. Two SG90 Servo Motors.
4. One B10k Potentiometer.


## Working
The Two SG90 Servo Motors, defined as servoArm, and servoJoint, function as the gears of the robotic arm.

The exoskeleton is equipped with a B10k Potentiometer. Its analog reading is stored in a integer variable, defined as potVal.

The potVal variable is then mapped onto another variable defined as potMap. This potMap maps the analog value of Potentiometer from 950 to 750 and onto a angular value, from 60 to 170.


## Schematic Design
- [Design](https://github.com/mbilal-dev/arduino_arm/blob/main/Arduino%20Arm%20-%20Bilal%20Baba.pdf)

## Authors

- [@Bilal Baba](https://www.github.com/mbilal-dev)

