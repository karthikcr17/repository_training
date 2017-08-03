#!/usr/bin/python
import sys
import re
import pexpect
import subprocess
p = subprocess.Popen(["gcc",sys.argv[1]],stderr=subprocess.PIPE)
out,err = p.communicate()
if err:
 print("error in code\n")
 print(err)
 sys.exit()
pr = pexpect.spawn(["./a.out"])
ret = pr.send("48\n56\n")

out = pr.read()
lis = re.split('(\D+)',out)
for i in range(len(lis)-1,-1,-1):
	if lis[i].isdigit():
		break
print("value =%s"%(lis[i]))

