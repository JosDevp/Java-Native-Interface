#include <stdio.h>
#include <jni.h>
#include "HolaMundo.h"//hearder creado en C
#include <string.h>
JNIEnv* create_vm(JavaVM ** jvm){
JNIEnv *env;
JavaVMInitArgs vm_args;
JavaVMOption options;
options.optionString = "-Djava.class.path=/home/joseguru/Desktop/JNI"; //Ruta donde se encuentran las clases
vm_args.version = JNI_VERSION_1_6; //JDK version. Indica la version del JDK
vm_args.nOptions = 1;
vm_args.options = &options;
vm_args.ignoreUnrecognized = 0;
int ret = JNI_CreateJavaVM(jvm, (void**)&env, &vm_args);
  if(ret < 0)
     printf("\nNo lanzara JVM\n");      
  return env;
}
int main(void){
JNIEnv *env;
JavaVM *jvm;
jmethodID mainMethod = NULL;
jmethodID smfnMethod = NULL;
jclass clsJava=NULL;
jstring StringArg=NULL;
env = create_vm(&jvm);
if (env == NULL)
{
   printf("\nNo se puede crear el ambiente");
   return 1;
}
clsJava = (*env)->FindClass(env,"HolaMundo");
if (clsJava != NULL)
{
        printf("\n si encontro clase solicitada\n");  
        }
        else
    {
        printf("\n No se pudo encontrar la clase solicitada\n");       
    }
mainMethod = (*env)->GetStaticMethodID(env, clsJava, "main", "([Ljava/lang/String;)V");
smfnMethod = (*env)->GetStaticMethodID(env, clsJava, "FuncionEstatica", "(Ljava/lang/String;)V");
if (mainMethod != NULL)
{
printf("\n llamar al método Java principal");
(*env)->CallStaticVoidMethod(env, clsJava, mainMethod, NULL);
}
StringArg = (*env)->NewStringUTF(env, "Argumento de C");
if (smfnMethod != NULL)
{
printf("\n  llamar al método Función estática ");
(*env)->CallStaticVoidMethod(env, clsJava, smfnMethod, StringArg);
}
printf("\n C Principal \n");
return 0;
}
