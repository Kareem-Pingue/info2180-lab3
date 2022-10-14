from tkinter import *

root = Tk()

e = Entry(root, width = 50, fg="white", bg="black")
e.pack()
e.insert(0, "Do what the box says")

def myClick():
    myLabel1 = Label(root, text = f"Hello, Good {e.get()} Grace.", padx=30, pady=30, fg="red", bg="black")
    myLabel1.pack()

myButton = Button(root, text = "Enter Whether its Day/Night", padx=30, pady=30, fg= "green", bg="black", command =myClick)
myButton.pack()

root.mainloop()