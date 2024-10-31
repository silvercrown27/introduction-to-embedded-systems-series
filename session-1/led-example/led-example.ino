const int ledPin = LED_BUILTIN;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    Serial.println("Starting LED Toggle Program...");
}

void loop() {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;
        toggleLED();
        Serial.print("LED is now ");
        Serial.print((ledState == HIGH) ? "ON" : "OFF");
        Serial.print(" at time: ");
        Serial.println(currentMillis);
    }
}

void toggleLED() {
    ledState = (ledState == LOW) ? HIGH : LOW;
    digitalWrite(ledPin, ledState);
}
