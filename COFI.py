print("\t\tCost of Distance Calculator\n\n\n")
print("Programmed by- L.K.Anantan\n\n")

while(1 == 1):
    print("------------------------------------")
    print("\nE to end the calculator")
    try:
        distance = input("enter travel distance (in km): ")
        if distance == 'E' or distance == 'e':
            break
        distance = int(distance)
        mileage = int(input("enter milage of your vehicle(in litre): "))
        COF = int(input("enter the cost of fuel(per litre) : "))  
        result = (distance/mileage)*COF
        if result < 0:
            print("\nONLY ENTER THE POSITIVE INTEGERS!!!!")
            pass
        else:
            print("The cost of travelled distance is ",result," Rupees")
    except:
        print("Enter numbers only!!")
