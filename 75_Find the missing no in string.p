import math
MAX_DIGITS = 6

def getValue(Str, i, n):
   
    if(i +n> len(Str)):
        return -1
 
    return int(Str[i:i+n])

def missingNumber(Str):
 
    for m  in range(1, MAX_DIGITS + 1):
        n = getValue(Str, 0, m)
        if(n == -1):
            break
        mn = -1
        fail = False
        i = m
        while(i != len(Str)):
            if((mn == -1) and
               (getValue(Str, i, 1 +
                int(math.log10(n + 2))) ==
                               n + 2)):
                mn = n + 1
                n += 2
            elif((getValue(Str, i, 1 +
                  int(math.log10(n + 1))) ==
                                 n + 1)):
                n += 1
            else:
                fail = True
                break
            i += 1 + int(math.log10(n))
        if(not fail):
            return mn
    return -1
