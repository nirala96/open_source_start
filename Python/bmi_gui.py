##BMI GUI

from bmi import *
import tkinter


def calculate():
    user = Patient(weight=float(weight_entry.get()),
                   height=float(height_entry.get()))
    bmi_label.configure(text="Your BMI is " +
                             str(round(user.calculate_bmi(), 2))
                             + " which is "
                             + user.bmi_analysis() + ".")

interface = tkinter.Tk()
interface.title("BMI Calculator")
interface.minsize(150, 150)

# declare labels
height_label = tkinter.Label(text="Height (m)")
weight_label = tkinter.Label(text="Weight (Kg)")
bmi_label = tkinter.Label()

# declare entry boxes
height_entry = tkinter.Entry(justify="right")
weight_entry = tkinter.Entry(justify="right")

# declare buttons
calculate_button = tkinter.Button(text="Calculate", command=calculate)

# place widgets on grid
height_label.grid(row=0, column=0, padx=10, pady=10)
height_entry.grid(row=0, column=1, padx=10, pady=10)
weight_label.grid(row=1, column=0, padx=10, pady=10)
weight_entry.grid(row=1, column=1, padx=10, pady=10)
bmi_label.grid(row=2, column=0, columnspan=2, padx=10, pady=10)
calculate_button.grid(row=4, column=1, padx=10, pady=10)

# interface loop
tkinter.mainloop()
