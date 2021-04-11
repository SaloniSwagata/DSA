#Print subsets of a string --> PowerSet
'''
Sample Input: ab
Sample Output: ""
                a
                b
                ab                             

'''

def powerset(output,inp):
  if inp=="":
    if output=="":
      print('""')
    else:
      print(output)
    return
  output1 = output+inp[0]
  output2 = output
  if len(inp)==1:
    inp=""
  else:
    inp = inp[1:]
  powerset(output1,inp)
  powerset(output2,inp)
  return

string = input("Enter a string: ")
print("Powersets:")
powerset("",string)