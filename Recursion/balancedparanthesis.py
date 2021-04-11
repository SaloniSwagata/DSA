#Generate all balanced parantheses
'''
Sample Input: 3
Sample Output: ((()))
               ()()()
               (())()
               ()(())
               (()())
'''

def brackets(open,close,output):
  if close==0:
    print(output)
    return
  if open==close:
    output+="("
    open-=1
    brackets(open,close,output)
  elif open==0:
    output+=")"
    close-=1
    brackets(open,close,output)
  else:
    output1=output+"("
    open-=1
    brackets(open,close,output1)
    output2=output+")"
    open+=1
    close-=1
    brackets(open,close,output2)
  return

n = int(input("Enter the number of brackets: "))
print("Balanced Parantheses: ")
brackets(n,n,"")