#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include "csapp.h"

void *thread(void *vargp);

int main( int argc, char *argv[] )
{
    int n_threads = atoi(argv[1]);
    int i;
    for (i = 0; i < n_threads; i++)
    {
        pthread_t tid;
        pthread_create(&tid, NULL, thread, NULL);
        pthread_join(tid, NULL);
    }
    exit(0);
}

void *thread(void *vargp) /* Thread routine */
{
    printf("Hello, world!\n");
    return NULL;
}
