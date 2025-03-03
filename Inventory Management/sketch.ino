#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <DHT.h>
#include <HX711.h>

// Pin Definitions
#define TFT_CS   5
#define TFT_RST  4
#define TFT_DC   15
#define DHTPIN   4
#define LED_PIN  13
#define DHTTYPE  DHT22
#define LOADCELL_DOUT 21
#define LOADCELL_SCK  22

// Initialize TFT LCD
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

// Initialize DHT Sensor
DHT dht(DHTPIN, DHTTYPE);

// Initialize HX711 Load Cell
HX711 scale;
float scaleFactor = 420.0; // Updated with your correct value

void setup() {
    Serial.begin(115200);
    
    // Initialize TFT LCD
    tft.begin();
    tft.fillScreen(ILI9341_BLACK);
    tft.setTextColor(ILI9341_WHITE);
    tft.setTextSize(2);
    tft.setCursor(10, 10);
    tft.print("System Booting...");

    // Initialize DHT Sensor
    dht.begin();

    // Initialize Load Cell (HX711)
    scale.begin(LOADCELL_DOUT, LOADCELL_SCK);
    scale.set_scale(scaleFactor); // Apply the correct scale factor
    scale.tare(); // Reset weight to zero

    pinMode(LED_PIN, OUTPUT);

    delay(2000); 
}

void loop() {
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();
    float weight = scale.get_units(10); // Take average of 10 readings

    // Print values to Serial Monitor
    Serial.print("Temperature: "); Serial.print(temperature); Serial.print(" C, ");
    Serial.print("Humidity: "); Serial.print(humidity); Serial.print(" %, ");
    Serial.print("Weight: "); Serial.print(weight); Serial.println(" kg");

    // Update LCD Display
    tft.fillScreen(ILI9341_BLACK);
    tft.setCursor(10, 30);
    tft.print("Temp: "); tft.print(temperature); tft.print(" C");
    tft.setCursor(10, 60);
    tft.print("Humidity: "); tft.print(humidity); tft.print("%");
    tft.setCursor(10, 90);
    tft.print("Weight: "); tft.print(weight); tft.print(" kg");

    // LED Turns ON if temperature > 30°C
    if (temperature > 30) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }

    delay(2000); 
}
