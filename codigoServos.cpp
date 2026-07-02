/*
La consigna base decía de controlar la velocidad de un motor CC normal, pero como solamente tenemos
servomotores, vamos a usar esos. El código cambia, evidentemente. La base de este código salió de
https://programarfacil.com/blog/arduino-blog/servomotor-con-arduino/
*/
#define pot A0
Servo servoMotor ;

void setup() {
    Serial.begin(9600);
    servoMotor.attach(3);
    servoMotor.write(0);
}
void loop() {
 float tiempo = map(analogRead(pot), 0, 1023, 5, 75); //Se mete un delay de entre 5 a 75 milisegundos, más de eso haría ver al servo trabado
 for (int i = 0; i <= 180; i++)
 {
   servoMotor.write(i);
   delay(tiempo);
 }
 for (int i = 179; i > 0; i--)
 {
   servoMotor.write(i);
   delay(tiempo);
 }
 /*
 El servomotor va a estar constantemente moviendose de un lado a otro (por los bucles for)
 y el potenciometro controla cuantos miilisegundos pasan desde que el servo pasa de un grado
 de circunferencia y otro, dando la ilusión de que está yendo mas lento.
 */
}