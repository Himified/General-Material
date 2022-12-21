proctype gcd(int a; int b){
	if
		:: (b == 0) -> printf("GCD of 5 & 10 is %d\n", a)
		:: (b != 0) -> run gcd(b, a%b)
	fi
}

init{
	run gcd(5,10);
}



//Method 2
proctype gcd(int a;int b){
	if
	:: (a>b)-> a=a-b -> run gcd(a,b)
	:: (b>a)-> b=b-a -> run gcd(a,b)
	:: (a==b)-> printf("gcd is %d\n", a)
	fi
}
init{
         run gcd(5,10);
}