import math # import mathamatis libary.


Add = lambda a, b: a + b
subtract = lambda x, y: x - y
multyply = lambda x, y: x * y
divide = lambda x, y: x / y
sqare_root = lambda x: math.sqrt(x)

print("\n 1. Add \n 2. subtract \n 3. multyply \n 4. divide \n 5. sqare_root \n 6. Done")
print("if your mison is sqare root we will root only your first input")

while True:
    choise = int(input("Type here your mison : "))
    x = int(input("Type here your Digit and press enter: "))
    y = int(input("Type here your 2nd Digit and press enter: "))
    
    if choise == 1:
        print(f"Your result is {Add(x, y)}")

    elif choise == 2:
        print(f"Your result is {subtract(x, y)}")

    elif choise == 3:
        print(f"Your result is {multyply(x, y)}")

    elif choise == 4:
        print(f"Your result is {divide(x, y)}")

    elif choise == 5:
        print(f'Your result is {sqare_root(x)}')

    elif choise == 6:
        print("Thank You for using our calculator")
        break

    elif choise > 6:
        print("Invalid mison")
    else:
        print("Unknown Error ! ")
    
