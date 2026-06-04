# Informe Técnico 
# Proyecto Electrónica y Programación
# Alumnos : Lucas W, Jose B, Maximo P, Leon S, Olivia B.
# Curso : 4A TIC
# 04/06 - 24/06

Consignas :

Introducción
En las próximas 5 clases, cada grupo deberá pasar de una idea teórica a un prototipo funcional. Su trabajo será evaluado paso a paso a través de hitos de entrega obligatorios.

Proyectos disponibles para elegir:

 

Vigilante de Pasillo: Sensor ultrasónico + Alarma.

 

Semáforo Inteligente: Secuencia lógica + Peatón.

 

Medidor de Luz Ambiental: LDR + Control de Iluminación.

 

Ventilador de Potencia: PWM + Transistor (control de motor).

Cronograma de Hitos (Etapas)
Clase 1: Simulación y Lógica
 

Acción: Montar el circuito en Tinkercad y programar el código.

 

Tarea: Crear el Diagrama de Flujo que represente cómo "piensa" el programa (Inicio, condiciones, acciones).

Hito: La simulación debe funcionar perfectamente antes de salir del aula.

Clase 2: Esquema Eléctrico y Documentación
 

Acción: Dibujar el esquema técnico del circuito en un software de diseño (ej. Fritzing o EasyEDA).

Tarea: Incluir símbolos electrónicos, valores de resistencias, polaridades y conexiones reales.

Hito: Archivo de esquema terminado y avance en la redacción del Informe Técnico.

Clase 3: Montaje Físico
Acción: Trasladar el diseño de la computadora a la protoboard real.

Tarea: Verificar conexiones. Si algo no enciende, deben usar el Monitor Serie para diagnosticar errores.

Hito: Circuito montado y listo para recibir el código.

Clase 4: Programación y Compilación
Acción: Migrar el código del simulador al IDE de Arduino.

Tarea: Compilar y cargar el programa en la placa física. Ajustar parámetros en tiempo real.

Hito: Hardware funcional controlado por el Arduino.

Clase 5: Informe Final y Defensa
Acción: Entrega del Informe Técnico completo (prolijo, con fotos, explicaciones y bitácora de fallas).

Tarea: Demostración en vivo frente al profesor y defensa técnica del proyecto.

Requisitos para el "Informe Técnico"
Para aprobar, el informe debe contener:

Carátula: Nombres, curso, fecha y título del proyecto.

Etapa de Diseño: Diagramas de flujo y esquemas eléctricos.

Etapa de Implementación: Explicación técnica de cada componente (qué es y qué hace).

Bitácora de Fallas: Tabla obligatoria que detalle los errores encontrados durante el montaje físico y cómo los resolvieron (esto es vital para la calificación).

Conclusiones: Reflexión sobre los desafíos de pasar de lo virtual a lo real.

Indicaciones para los Grupos
Una vez elegido su proyecto, deben leer detalladamente la guía técnica específica de dicho componente (datasheets o apuntes entregados).

Nota para el alumno: La prolijidad en el cableado y la claridad en la explicación de por qué falló o funcionó su circuito son tan importantes como el hecho de que el LED encienda o el motor gire. ¡Sean metódicos!
Proyecto 4: Ventilador de Potencia (Control PWM)
Qué hace: Un potenciómetro controla la velocidad de un motor. A más giro, más velocidad.
Componentes: Arduino, Potenciómetro, Motor DC, Transistor TIP120, Resistencia 1kΩ (para la base), Diodo (opcional, para protección).
Función: Comprender la diferencia entre señal de control (baja potencia) y potencia de carga (alta corriente) mediante el transistor.
Bitácora de fallas:
¿El motor no gira? Falla: Los cables de la batería externa no comparten el GND con el Arduino.
¿El motor hace ruido pero no gira? Falla: La señal PWM no tiene suficiente amplitud; revisar conexión de la base del transistor.
