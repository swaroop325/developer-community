from tkinter import *
from tkinter import messagebox

# Code to calculate cost


def reseet():
    txt.delete(0,END)
    txt_2.delete(0,END)
    txt_3.delete(0,END)
    total_cost.configure(text="")



def cal():
    try:
        # global distance_value
        # global mileage_value
        # global fuel_value

        distance_value = float(txt.get())
        mileage_value = float(txt_2.get())
        fuel_value = float(txt_3.get())
    except:
        messagebox.showinfo('Invalid value', 'Enter numbers only')
    

    result = (distance_value/mileage_value)*fuel_value
    result_ = "%.2f" % round(result,2)
       # --------------x--------------x--------------
    if result < 0:
        messagebox.showinfo('Invalid value', 'Please enter positive numbers only')
    else:
        total_cost.configure(text = result_)    
    
    

    
# GUI code for calculator


window = Tk()
window.title("Distance and cost Calculator")
window.geometry("700x700")

title = Label(
    window,
    text="Distance and Cost Calculator",
    justify=CENTER,
    pady = 10,
    fg = 	"#0018A8",
    font = "Verdana 25 bold",
    padx = 10).pack()

distance = Label(
    window,
    text = "Distance Covered (in Km) : ",
    justify = LEFT,
    font = "Lucida 15",
).place(x=50,y=120)

txt = Entry(window)

txt.place(x=350,
y = 124,
height = 25,
width = 80)

mileage = Label(
    window,
    text = "Mileage(Per liter) : ",
    justify = LEFT,
    font = "Lucida 15",
).place(x=50,y=220)

txt_2 = Entry(window,width=10)
txt_2.place(x=350,
y = 224,
height = 25,
width = 80)

fuel_price = Label(
    window,
    text = "Fuel_Cost(Per liter) : ",
    justify = LEFT,
    font = "Lucida 15",
).place(x=50,y=320)

txt_3 = Entry(window,width=10)
txt_3.place(x=350,
y = 324,
height = 25,
width = 80)




result = Button(window,
text="Calculate",
bg = "white",
font = "bold",
command = cal
).place(
    x = 200,
    y = 390,
    height = 35,
        width =100 )

reset = Button(window,
text="Reset",
bg = "white",
font = "bold",
command = reseet
).place(
    x = 320,
    y = 390,
    height = 35,
        width =100 )

cost = Label(
    window,
    text = "Total Cost (in Rupees) : ",
    justify = LEFT,
    font = "Lucida 15",
    )
cost.place(x=50,y=450)

    
total_cost = Label(
    window,
    text = "",
    justify = LEFT,
    font = "Lucida 15",
)
total_cost
total_cost.place(x=350,y=450)
window.mainloop()
