
/*----------CAMILA, DEXTER B. LAB 6 PROLOG-----------*/

/*------------------SIZE OF LIST-------------------*/
sayz(0,[]).
sayz(A+1,[X|Xs]):- sayz(A,Xs).

/*------------------SUM OF LIST--------------------*/
listsum(0,[]).
listsum(A+X,[X|Xs]):- listsum(A,Xs).

/*--------------AVE IN LIST-----------------*/
listave([],0).
listave( List, Avg ):-
    sumlist( List, Sum ),
    length( List, Length),
    (  Length > 0
    -> Avg is Sum / Length
    ;  Avg is 0
    ).
/*--------------SQ OF ELEM IN LIST-----------------*/
sqrlist([X|Xs],[Sq|Outl]):- Sq is X*X, sqrlist(Xs,Outl).
sqrlist([], []).
writeln(X).

/*-------------------APPEND NEW ELEM-----------------*/
appind([X|Xs],A,[A,X|Xs]).

/*-------------------INSERTION SORT-----------------*/
inssort(L1,L2) :-
  inssort_intern(L1,[],L2).
inssort_intern([],L,L).
inssort_intern([H|T],L1,L) :-
  insert(L1,H,L2),
  inssort_intern(T,L2,L).
insert([],X,[X]).
insert([H|T],X,[X,H|T]) :-
  X =< H,
  !.
insert([H|T],X,[H|T2]) :-
  insert(T,X,T2).

/*--------------------FIBONACCI OF N-----------------*/
fibo(0, 0) :- !.
fibo(1, 1) :- !.
fibo(N, Res) :- N1 is N - 1, N2 is N - 2, fibo(N1, Res1), fibo(N2, Res2), Res is Res1 + Res2.

/*--------------------POWER OF N-------------------*/
powr(A,B,X):- X is A^B.






