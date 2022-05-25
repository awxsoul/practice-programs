'''Write a Python code to find the longest continuous series of 
small alphabetic letters in a text. e.g. input:"This is just an 
example123 of an ExtrEmely long string". output: "example"
'''

x=input("Enter the string : ")
x=x.split()
text=""
for i in x:
    txt=""
    for j in i:
        if j.islower():
            txt=txt+j
        else:
            break
    if len(txt)>len(text):
        text=txt
print(text)