Objetivo:
Investigar y practicar sobre hilos.

Herramientas
gcc git

Conceptos:
Hilos

Proceso ligero.
Solo tiene un stack y el código y el heap lo comparte con el proceso principal.
Si el proceso principal termina, los hilos terminan.
Lock:

Mecanismo de sincronizacion.
Variable global que soporta dos operaciones:
lock, el primer hilo que hace lock se adueña del lock, el resto queda esperando.
unlock, el hilo dueño del lock lo libera.
Ayuda para resolver el problema de la sección crítica.
Semáfores:

Mecanismo de sincronización.
Variable global que tiene un valor inicial mayor o igual a cero. Soporta dos operaciones.
wait/decrease. Si es mayor a 0 decrementa y continua, si es igual a 0 se suspende.
post/increase. Incrementa el valor del semaforo en uno.
Para asignar recursos.
Problemas de sincronización.

Condición de carrera. Ocurre cuando el resultado depende del orden en que se ejecutan los hilos.
Deadlock: Cuando dos o mas hilos estan esperando por un recurso que no se libera.
Productor/Consumidor: Ocurre cuando los datos se puede sobre-escribir.

Url del commit

Que aprendí:
