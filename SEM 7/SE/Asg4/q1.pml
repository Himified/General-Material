active proctype Hello(){
    printf("Hello world\n")
}
init{
    int lastpid;
    printf("init process, my pid is: %d\n",_pid);
    lastpid = run Hello();
    printf("last pid was: %d\n", lastpid);
}

