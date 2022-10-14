from tkinter import *

root = Tk()
def myClick():
    myLabel1 = Label(root, text = "Hello World!", padx=30, pady=30, fg="red", bg="black")
    myLabel1.pack()

myButton = Button(root, text = "Click Me!", padx=30, pady=30, fg= "green", bg="black", command =myClick)
myButton.pack()

root.mainloop()