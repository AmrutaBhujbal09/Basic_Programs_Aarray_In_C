
"""def f():
    
    
    print(s)
    s="m  in def f()"
    print(s)
    return "helo world"
    

    
global s
s="NAMASTE INDIA!!!"
t=f()
print(t)


OUTPUT:
UnboundLocalError: local variable 's' referenced before assignment
MEANING OF THIS ERROR IS THAT IF ANY VARIABLE declared inside a function ,it becomes
local variable inside that function so to solve this error we have to declared variable s
exceeded by keyword global

"""

def f():
    
    global s
    print(s)
    s="m  in def f()"
    print(s)
    return "helo world"
    

    
global s
s="NAMASTE INDIA!!!"
t=f()
print(t)

"""
OUTPUT:
NAMASTE INDIA!!!
m  in def f()
helo world
"""
