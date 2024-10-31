#include <iostream>

int readTemperatureSensor() {
    int temperatureCelsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temperatureCelsius;
    return temperatureCelsius;
}

float convertToFahrenheit(int celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

void checkTemperatureAndAlert(int tempCelsius) {
    float tempFahrenheit = convertToFahrenheit(tempCelsius);
    std::cout << "Current Temperature: " << tempCelsius << "°C / " << tempFahrenheit << "°F" << std::endl;
    
    if (tempCelsius > 30) {
        std::cout << "ALERT: Temperature is too high!" << std::endl;
    } else {
        std::cout << "Temperature is within safe range." << std::endl;
    }
}

int main() {
    int temperatureCelsius = readTemperatureSensor();
    checkTemperatureAndAlert(temperatureCelsius);

    return 0;
}
