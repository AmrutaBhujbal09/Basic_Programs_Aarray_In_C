##Strip Whitespaces

############################TO REMOVE LEFT SIDE SPACE USING METHOD lstrip()#################

First_Name=" Neha"
Last_Name="  Pawar"

print(First_Name)
#OUTPUT
# Neha
## COMMENT: In above output we can observe leading white space on left side. 

print(First_Name.lstrip())
#OUTPUT
#Neha
# COMMENT:  In above output leading white space on left side is removed using method lstrip().



############################TO REMOVE RIGHT SIDE SPACE using METHOD rstrip()##################


Last_Name="Pawar "
print(Last_Name)
#OUTPUT:
#Pawar 
print("\n"+Last_Name.rstrip())
#OUTPUT:
#Pawar


######################TO REMOVE LEFT & RIGHT SIDE SPACE  USING METHOD strip()###############


First_Name=" Neha "
Last_Name= " Pawar "

print(First_Name)
print(Last_Name)
#OUTPUT
# Neha 
# Pawar 

print(First_Name.strip())
print(Last_Name.strip())
#OUTPUT:
#Neha
#Pawar

