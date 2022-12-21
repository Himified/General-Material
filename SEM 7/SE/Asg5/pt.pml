proctype fib(int n){
	int i = 0;
	int a =0, b=1;
	do
	:: (i<n) -> printf("%d\n", a); int temp = b; b = a + b; a = temp; i++;
	:: (i==n) -> break;
	od
}

init{
run fib(5);
}