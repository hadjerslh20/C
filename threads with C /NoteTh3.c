if (pthread_create(&t1, NULL, &routine, NULL) != 0) {
    return 1;
}
// If pthread_create() returns non-zero, it means thread creation failed, so we exit with return 1.
