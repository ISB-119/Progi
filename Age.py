age = int(input("Enter your age: "))
end= ["год","года","лет"]
if age%10 == 1:
    print("Ваш возраст: ",age, end[0])
elif age%10 == 2 or age%10 == 3 or age%10 == 4:
    print("Ваш возраст:", age, end[1])
elif age%10 > 4 :
    print("Ваш возраст:", age, end[2])
