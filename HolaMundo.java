<public class HolaMundo {
        
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
