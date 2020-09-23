
{------------CAMILA, DEXTER B. ACT 5--------------}
{------------------SIZE OF LIST-------------------}
sayz [] = 0
sayz (x:xs) = 1 + sayz xs 
{------------------SUM OF LIST--------------------}
listsum [] = 0
listsum (x:xs) = x + listsum xs 
{------------------AVE OF LIST--------------------}
listave [] = 0
listave (x:xs) = sayz (x:xs) / listsum (x:xs)
{------------------PROD OF LIST-------------------}
listprd [] = 1
listprd (x:xs) = x * listprd xs 
{--------------SQ OF ELEM IN LIST-----------------}
sqrlist [] = [ ]
sqrlist (x:xs) = [x^2] ++ sqrlist (xs)
{-----------SUM OF SQ OF ELEM IN LIST-------------}
sqrlistsum [] = 0
sqrlistsum (x:xs) = x^2 + sqrlistsum (xs)
{------------------APPEND NEW ELEM----------------}
append [] a  = [a]
append (x:xs) b = [b] ++ (append xs x) 
{-------------------MERGE TWO LIST----------------}
mergetwo xs [] = xs
mergetwo [] ab = ab
mergetwo (x:xs) (a:ab) = [x] ++ (mergetwo(xs) (ab)) ++ [a]
{-------------------MULT TWO LIST-----------------}
multtwo xs [] = xs
multtwo [] ab = ab
multtwo (x:xs) (a:ab) = [x*a] ++ (multtwo(xs) (ab))
{----------------SORT LIST INSERT-----------------}
ins:: Int -> [Int] -> [Int]
ins n [] = [n]
ins n (x:xs) = if n < x
then n : x : xs
else x : ins n xs

insirt:: [Int]->[Int]
insirt[x]=[x]
insirt(x:xs) = ins x (insirt xs)

{-------------------FIBONACCI---------------------}
nfib:: Integer -> Integer
nfib 0=0
nfib 1=1
nfib n = nfib (n-1) + nfib( n -2)

{-------------------POWER OF N--------------------}
powr xs [] = xs
powr [] ab = ab
powr (x:xs) (a:ab) = [x^a] ++ (powr(xs) (ab))











