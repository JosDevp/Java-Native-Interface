# Java-Native-Interface
JNI (Java Native Interface) Invocar una función en C desde Java Linux
<br/>
<li>Primeramente Verificamos la version de Java que tenemos instalado</li>
<code>@kali:~$ java -version
java version "1.6.0_34"</code>

Posteriormente  creamos nuestra clase Java  HolaMundo.java que se encuentra en el repositorio.
<br>
<li> Compilamos la clase Java HolaMundo </li>
<code>javac HolaMundo.java </code>
<li> Creamos el Header de C </li>
<code> javah HolaMundo </code>

<li>Para mostrar el header construido con los metodos que se generaron agregamos estos comandos en consola</li>
<code>javap -s -p HolaMundo</code>
<hr/>


<li>Compilamos gcc</li>

<li>Nos vamos a la carpeta donde tenemos instalado el java en este caso como se muestra la ruta</li>
<code>-I /usr/lib/jvm/java-6-openjdk-i386/include </code>
<li>Se realiza lo mismo para el siguiente paso practicamente cuando accedemos a la primera ruta veremos la carpeta linux</li>
<code>-I /usr/lib/jvm/java-6-openjdk-i386/include/linux</code>
<li>Posteriormente agregamos la siguiente ruta</li>
<code>-L /usr/bin/java</code>
<li>y agregamos la siguiente ruta junto con la clase HolaMundo.c para compilarlo</li>
<code>-L /usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server</code>
<code>HolaMundo.c -ljvm</code>
<li>Finalmente el codigo final de compilacion seria el siguiente</li>
<code>gcc -I /usr/lib/jvm/java-6-openjdk-i386/include
-I /usr/lib/jvm/java-6-openjdk-i386/include/linux
-L /usr/bin/java
-L /usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server
example1.c -ljvm</code>
<li>Exportamos el path para compilar nuestra clase en C</li>
<code>export LD_LIBRARY_PATH=/usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server</code>
<hr/>
SI observamos en la carpeta donde tenemos nuestros archivo en C se genero un archivo a.out ese archivo generado lo compilamos para mostrar el resultado final de Invocar una función en C desde Java Linux
<hr/>
<code>/home/joseguru/Desktop/JNI/a.out</code>




