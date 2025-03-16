#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // for sleep

void* print_message() {
    printf("This is message from thread\n");
    sleep(3); // to see how they work in parallel
    printf("this is second message from thread\n");
}
int main() {
    pthread_t threadOne ,threadTwo ;
    pthread_create(&threadOne ,NULL,&print_message,NULL);
    pthread_create(&threadTwo,NULL,&print_message,NULL);
    pthread_join(threadOne,NULL);
    pthread_join(threadTwo,NULL);
    return 0;
}
