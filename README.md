   # IOT.TC1004B

## Repositorio de la clase "Implementación de internet de las cosas" grupo 514.
- `git status` sirve para ver los archivos modificados.
- `git diff nombreArchivo` sirve para las lineas modificadas.
- `git checkout nombreArchivo` sirve para regresar al ultimo commit.
- `git add .` sirve para verificar los archivos.
- `git commit -m "Sirve para tomar la foto"`.
- `git push origin rama` sirve para ya subirlo a github.
- `code nombreArchivo.tipoArchivo` sirve para crear un nuevo archivo.
- gcc -o hola.exe hola.c llamas al compilador para convertir el archivo.c a algo que entienda el computador.
- para crear archivos escribes "code nombreArchivo.c"
- para compilarlos escribes `gcc -o nombreArchivo nombreArchivo.c`
- para correrlo `./nombreArchivo `
- objdump -d -S hola.exe objdump -desamble el codigo en -enSamblador el hola.exe.
- `ps -fea` sirve para ver los procesos y una descripcion
- `kill` para matar un proceso y `kill -l` para ver todas las señales
- `kill -19 y -18` para matar el proceso que se ejecuta actualmente
## PIPES
- `ps -fea | grep bash` busca todos los procesos que tienen bash
- `ps -fea | grep bash | wc -1` cuenta las lineas de los procesos que tienen bash
podemos conectar programas a otros comandos, como `ls | ./tomay` nos regresa los archivos que hay pero en mayuscula.
-`ls | ./tomay > archivo.txt` la salida de nuestro programa la estamos convirtiendo en archivo.txt
-`cat archivo.txt` nos sirve para visualizar archivos.
## THREADS
- Al correr thread.c tenemos que agregar la libreria manualmente con `gcc -o thread thread.c -lpthread`
