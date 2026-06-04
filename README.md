# TP-IOT
Proyecto Electrónica y Programación
Proyecto 4: Ventilador de Potencia (Control PWM)
Qué hace: Un potenciómetro controla la velocidad de un motor. A más giro, más velocidad.
Componentes: Arduino, Potenciómetro, Motor DC, Transistor TIP120, Resistencia 1kΩ (para la base), Diodo (opcional, para protección).
Función: Comprender la diferencia entre señal de control (baja potencia) y potencia de carga (alta corriente) mediante el transistor.
Bitácora de fallas:
¿El motor no gira? Falla: Los cables de la batería externa no comparten el GND con el Arduino.
¿El motor hace ruido pero no gira? Falla: La señal PWM no tiene suficiente amplitud; revisar conexión de la base del transistor.
