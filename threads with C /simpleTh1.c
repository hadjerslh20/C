#include <stdio.h>
#include <pthread.h>

void* print_message() {
    printf("This is message from thread");
}
int main() {
    pthread_t threadOne ;
    pthread_create(&threadOne ,NULL,&print_message,NULL);
    pthread_join(threadOne,NULL);
    return 0;
}
