##Objetivo
Hacer un planificador de procesos basados en prioridades.
El proceso con mayor prioridad se ejecutará primero.
Si hay dos o mas con prioridades iguales el primero de la lista.

##Herramientas
git
make
gcc

##Conceptos
1) Proceso (Lo preguntará)
2)Planificación de procesos:
+Es el mecanismo que el SO tiene para asignarle el cpu a un proceso
3)Estados de un proceso
4)Cambio de contexto:
+Ocurre cuando el cpu deja de ejecutar un proceso para ejecutar otro.
+Guarda el PC y la dirección del stack del proceso actual.
+Restarar el PC y la dirección del nuevo proceso.


##Lo que aprendí:
El planificador es el que se encarga de estar cambiando la tabla de procesos. Aprendimos a como hacer un registro de
prioridades. Todas las variables se guardan en el stack entonces lo primero que hicimos fue sacarlo de ahí. También aprendí
la llamda sleep recibe los ms que se tomará para estar en el modo sleep. También una técnica para ver que todo este funcio-
nando bien es regresar un 0 como señal de que se corrió la última linea. Si tengo varios cpu compartiré la tabla con los demás.
Se guardan los procesos en la ptable en donde toma como parametro el máximo número de procesos que pueda haber. 

Hay un valor especial para indicar que un estado esta vacío. Se recorre dentro del arary de procesos hasta encontrar uno que 
esté disponible. Aprendí que en un for "continue" hace que siga con la iteración sin detener el for. Las funciones las creamos
dentro del kernel pero siempre se deben poder hacer disponibles para el usuario, estilo publicar la función.


##Url del commit:
https://github.com/VillaCode/SO-gp2/commit/0b87be0bbdcfaac7c87e96a8a2181a484da29a5f  (creo)

##Como se relaciona con los conceptos anteriores
Llamadas a sistema, procesos
