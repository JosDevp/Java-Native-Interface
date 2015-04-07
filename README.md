# Java-Native-Interface
JNI (Java Native Interface) Invocar una función en C desde Java Linux
Primeramente Verificamos la version de Java que tenemos instalado
@kali:~$ java -version
java version "1.6.0_34"

public class HolaMundo {
        
        public HolaMundo(){
          System.out.println("\n Iniciando el constructor ...");        
        }
        
        public void FuncionSimple(String str){
                
                System.out.println("Funcion Simple ="+ str);
        }
        
        public static void FuncionEstatica(String str){
                System.out.println("Iniciando una funcion metodo statico="+str);
        }
        
        
        public static void main(String[] args) {
                HolaMundo obj =new HolaMundo();
                obj.sampleFunc("Hola Bienvenido Invocando Funcion de C desde Java");
                System.out.println("\n Llamando una funcion....");
                
        }
}
