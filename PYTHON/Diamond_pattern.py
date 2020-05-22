for i in range(0,4):
    for sp in range(4-i-1):
        print("-",end="")
    for j in range(i+1):
        print(" * ",end="")
    print("\r")
for k in range(3,0,-1):
    
    for sl in range(4-k):
        print(" ",end="")
    for c in range(k):
        print(" * ",end="")
    
    print("\r")
    #print("hilast")
    
