## Objetivo
Crear dos llamadas a sistema una para apagar y otra para reiniciar.
Dos programas que las usen.

## Herramientas
Git
Make
gcc

## Conceptos
1) Llamadas a sistema
+ La forma que el kernel (SO) le da acceso al fierro.
+ Se implementa mediante interrupciones de software, ie, la aplicación se interrumpe para que el kernel se ejecute.

2) Modo kernel
+ Es bit/registro que activa el CPU para acceder al fierro.
+ Solo hay un programa que se ejecuta con este bit, es el kernel.

3) Interrupciones
+ Es la forma que el HW interactua con el CPU


## Que aprendí:
Cuando ibernas lo que haces es guardar la RAM en el disco duro para comenzar justo donde dejaste todo. En el archivo syscall
es donde se encuentra el mapeo para poder ejecutar funciones del sistema. En el archivo con h es donde se define la casilla
en donde se pone la función. Aprendí a agregar un shutdown dentro de las casillas para poder crear la llamada al sistema.
Con comillas llamo archivos de mi mismo directorio, con llaves abro de afuera. Todas las funciones del kernel sirven para
que los demás programas las usen como una API, por eso se crean individualmente de afuera.
Aprendí que se debe hacer un header para el código que escribí para poder ser utilizado. Entonces cada hardware tiene 
instrucciones especificas que al momento de ser asignadas tipo memoria ejecuta algo.



## Url del commite:






