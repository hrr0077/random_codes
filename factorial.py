num = int(input("Enter a Number"))
pro=1
for x in range(num):
    pro = pro*num
    num =  num - 1
print(pro)