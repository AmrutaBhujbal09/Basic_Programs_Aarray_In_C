letters=['a','b','c']
print(letters[0:3])

#TO DELETE LAST ELEMENT OF LIST USE -1 AS INDEX.
del letters[-1]
del letters[0]
print(letters)         


#WE CAN ALSO USE pop() METHOD RO DELETE ELEMENTS IN LIST...

new_letters=['t','x','y','z']

#To DELETE LAST ELEMENT JUST USE POP()  METHODE DON'T GIVE ANY ARGUMENTS.
new_letters.pop()
print(new_letters)

popped_item=new_letters.pop()
print("popped item is:"+popped_item)
print(new_letters)

#TO DELETE ANY ELEMENTS IN THE LIST.....
new_item=['a','b','c']
new_item.pop(1)
new_item.pop(0)
print("after deleting element list is:")
print(new_item)


##GUYS YOU MAY HAVE DOUBT WHEN TO USE pop() METHODE & del STATEMENT##
#IF YOU WANT TO USE POP ELEMENTS FURTHER IN  A CODE THEN USE POP() METHODE AND IF YOU DON'T WANT TO USE POP ELEMENTS FURTHER IN A CODE THEN USE del STATEMENT.


