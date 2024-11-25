#include <stdio.h>
#include <pthread.h>

void * printHello(void *arg){
    int hid= *(int *)arg; //el asterisco antes de la dirección devuelve el contenido 
    printf("hola desde el hilo\n", hid);
    pthread_exit(NULL);
}

int main(){
    int NUM_THREADS=20;
    pthread_t threadStatus[NUM_THREADS];
    int hids[NUM_THREADS];
    for(int i=0; i<NUM_THREADS; i++){
        hids[i]=i;
        pthread_create(&threadStatus[i],NULL, printHello,(void *)&hids[i]); 
    }
    pthread_exit(NULL);
    printf("hola desde 1 main\n");
}
