# Java-Native-Interface
JNI (Java Native Interface) Invocar una función en C desde Java Linux
Primeramente Verificamos la version de Java que tenemos instalado
@kali:~$ java -version
java version "1.6.0_34"

Posteriormente  creamos nuestra clase Java  HolaMundo.java que se encuentra en el repositorio.

Compilamos la clase Java HolaMundo
javac HolaMundo.java
Creamos el Header de C
javah HolaMundo
Para mostrar el header construido con los metodos que se generaron agregamos estos comandos en consola
javap -s -p HolaMundo
y nos mostrara lo siguiente.

Compiled from "HolaMundo.java"
public class HolaMundo {
  public HolaMundo();
    Signature: ()V
  private void FuncionSimple(java.lang.String);
    Signature: (Ljava/lang/String;)V
  public static void FuncionStatica(java.lang.String);
    Signature: (Ljava/lang/String;)V
  public static void main(java.lang.String[]);
    Signature: ([Ljava/lang/String;)V
}
Compilamos gcc
Donde:
Nos vamos a la carpeta donde tenemos instalado el java en este caso como se muestra la ruta
-I /usr/lib/jvm/java-6-openjdk-i386/include 
Se realiza lo mismo para el siguiente paso practicamente cuando accedemos a la primera ruta veremos la carpeta linux
-I /usr/lib/jvm/java-6-openjdk-i386/include/linux
Posteriormente agregamos la siguiente ruta
-L /usr/bin/java
y agregamos la siguiente ruta junto con la clase HolaMundo.c para compilarlo
-L /usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server
HolaMundo.c -ljvm
Finalmente el codigo final de compilacion seria el siguiente
gcc -I /usr/lib/jvm/java-6-openjdk-i386/include
-I /usr/lib/jvm/java-6-openjdk-i386/include/linux
-L /usr/bin/java
-L /usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server
example1.c -ljvm
Exportamos el path para compilar nuestra clase en C
export LD_LIBRARY_PATH=/usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server
SI observamos en la carpeta donde tenemos nuestros archivo en C se genero un archivo a.out ese archivo generado lo compilamos para mostrar el resultado final de Invocar una función en C desde Java Linux
/home/joseguru/Desktop/JNI/a.out



