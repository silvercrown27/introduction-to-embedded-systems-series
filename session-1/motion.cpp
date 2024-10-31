#include <iostream>

bool readMotionSensor() {
    int motionInput;
    std::cout << "Enter 1 for motion detected, 0 for no motion: ";
    std::cin >> motionInput;
    return motionInput == 1;
}

void controlLight(bool motion) {
    if (motion) {
        std::cout << "Motion detected! Turning on the light." << std::endl;
    } else {
        std::cout << "No motion. Turning off the light." << std::endl;
    }
}

int main() {
    bool motion = readMotionSensor();
    controlLight(motion);

    return 0;
}
