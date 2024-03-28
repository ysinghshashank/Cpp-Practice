from os import path
import sys
import sys
if(path.exists('input.txt')):
	sys.stdin=open("input.txt","r")
	sys.stdout=open("output.txt","w")

p = int(input())
print(p)


print("Python version")
print (sys.version)

print("Version info.")
print (sys.version_info)