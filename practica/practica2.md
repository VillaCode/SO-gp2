Objetivo
Modificar al programa sh.c para ejecutar al comando anterior

Herramientas
git make gcc

Conceptos
Como se crean nuevos procesos
Un programa padre (sh.c) ejecuta la llamada a sistema fork
La llamada a sistema fork clona al proceso padre
El proceso hijo manda a llamar a exec para ejecutar otro codigo


Url del commit:
https://github.com/VillaCode/SO-gp2/commit/b029edba57e7d215ee8304d09d9f769bdf2dfc1b
