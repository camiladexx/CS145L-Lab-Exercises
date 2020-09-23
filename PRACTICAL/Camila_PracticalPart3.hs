{-------------------POWER OF N--------------------}
powr xs [] = xs
powr [] ab = ab
powr (x:xs) (a:ab) = [x^a] ++ (powr(xs) (ab))

{- 
Run as powr [Base] [Exponent]

powr [2] [3] 
Answer = [8]
-}