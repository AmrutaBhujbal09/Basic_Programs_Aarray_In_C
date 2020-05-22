for i in range(1,10):
    for j in range(1,10):
        if(i==1 or i==9 or j==1 or j==9):
            print("* ",end="");

        elif(i%3==0 or j%3==0):
            print("# ",end="");

        else:
            print("  ",end="");
    

    print()
            


