letters=['a','m','r','u','t','a']

print("list after sorthing alphabetically!!:")
print(sorted(letters))

print("list after reversing alphabetically!!:")
print(sorted(letters,reverse=True))

print("Original order of list!!!:")
print(letters)


new_letters=['a','A','B','d','c','e','g']
print(sorted(new_letters))

#OUTPUT:
#['A', 'B', 'a', 'c', 'd', 'e', 'g']
#BY OBSERVING THIS OUTPUT WE SEE THAT  UPPER CASE CHARCTETR A AND B ARE VISIBLE FIRST
#AND THEN ALL SMALL SO IF YOU WANT OUTPUT IN SORTED ORDER FIRST WE HAVE TO CONVERT  A,B IN
#TO SMALL LETTRES AND APPLY sorted() METHODE ON LIST


lst=[x.lower() for x in new_letters]
print(lst)
print("list has been sorted alphabetically!!!:")
print(sorted(lst))


#OUTPUT
#['a', 'a', 'b', 'c', 'd', 'e', 'g']

print("ORDER OF LIST letters IS AS IT IS:")
print(letters)
##NOTE:
#BY USING sorted()  METHODE WE CAN MAINTAIN ACTUAL THAT IS ORIGINAL ORDER OF LIST.
