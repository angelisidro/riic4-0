// Código ejemplo para módulo Buzzer de RIIC 4.0
// Oscar Rodas / Ángel Isidro

#include <EasyBuzzer.h>

// Configuración del PIN para el módulo con la librería
int BUZZER_PIN = D6;

void setup()
{
    // Inicialización necesaria de monitor serial
    Serial.begin(115200);

    // Configuración del PIN para el módulo con la librería
    EasyBuzzer.setPin(BUZZER_PIN); //Initialize buzzer
}

void loop()
{
    //freq max 10k

    Serial.println("Buzzer encendido");
    EasyBuzzer.beep(3100); // Frequency in hertz(HZ).
    delay(1000);
    EasyBuzzer.stopBeep();
    Serial.println("Buzzer apagado");
    delay(500);
}
