#include <stdio.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<unistd.h>

int main(void) {
  int pid;
  pid=fork();
  if(pid==0){
    //proceso escritor
    int key = 33;
    int shmid = shmget(key,100,IPC_CREAT|0666);
    char * message= (char *)shmat(shmid,NULL,0);
    sprintf(message,"hola mundo");
    while(message[0] == 'h') {
      sleep(1);
    }
    printf("el mensaje final es : %s \n", message);

  } else {
    int key = 33;
    int shmid = shmget(key,100,IPC_CREAT|0666);
    char * message= (char *)shmat(shmid,NULL,0);
    sleep(1);
    printf("el mensaje es : %s \n", message);
    message[0]= '*';
    sleep(1);
  }
}
