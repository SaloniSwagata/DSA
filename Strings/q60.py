# Check whether one string is rotation of another

def areRotations(s1,s2):
        s3 = s1[1:]+s1[0]
        while True:
            if s3==s2:
                return 1
            if s3==s1:
                return 0
            s3 = s3[1:]+s3[0]

s1 = input("Enter a string: ")
s2 = input("Enter the string to be checked: ")
k = areRotations(s1,s2)
if k==1:
    print("{} is a rotation of {}".format(s2,s1))
else:
    print("{} is not a rotation of {}".format(s2,s1))