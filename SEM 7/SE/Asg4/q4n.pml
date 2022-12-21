mtype = { P, C }; /* define 2 symbolic values: P and C */
mtype turn = P; /* global variable */
active proctype producer(){
 	 do /* loop */
  		:: (turn == P) -> /* guard of the case */
  			printf("Produce\n");
  			turn = C
  	od
}
active proctype consumer(){
	do
		:: (turn == C) ->
			printf("Consume\n");
			turn = P
	od
}


