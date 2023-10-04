# hemlo
# a simple calculator app using tkinter

from tkinter import *
from tkinter import ttk

# create a window
root = Tk()
root.title("Calculator")

# create a frame
frame = ttk.Frame(root, padding="10 10 10 10")
frame.grid(column=0, row=0, sticky=(N, W, E, S))

# create a label
ttk.Label(frame, text="First number:").grid(column=0, row=0, sticky=W)
ttk.Label(frame, text="Second number:").grid(column=0, row=1, sticky=W)
ttk.Label(frame, text="Result:").grid(column=0, row=2, sticky=W)

# create an entry box
first_number = StringVar()
second_number = StringVar()
result = StringVar()

first_number_entry = ttk.Entry(frame, width=7, textvariable=first_number)
first_number_entry.grid(column=1, row=0, sticky=W)

second_number_entry = ttk.Entry(frame, width=7, textvariable=second_number)
second_number_entry.grid(column=1, row=1, sticky=W)

result_entry = ttk.Entry(frame, width=7, textvariable=result)
result_entry.grid(column=1, row=2, sticky=W)

# create a button
def calculate(*args):
    try:
        value = float(first_number.get()) + float(second_number.get())
        result.set(value)
    except ValueError:
        pass

ttk.Button(frame, text="Calculate", command=calculate).grid(column=1, row=3, sticky=W)

# create padding around widgets
for child in frame.winfo_children():
    child.grid_configure(padx=5, pady=5)

# focus on first entry box
first_number_entry.focus()

# bind enter key to calculate function
root.bind("<Return>", calculate)

# run the app
root.mainloop()

# end of file