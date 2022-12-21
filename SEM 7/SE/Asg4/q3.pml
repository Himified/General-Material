
int res = 1;
proctype fac(int x){
	if
	::(x>=2) -> res = x* res; run fac(x-1)
	::(x==1) -> printf("Fac is %d\n", res)
	fi
}

init{
	run fac(3);
}