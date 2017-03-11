import sys
import xlrd

choice=input("enter choice search by 1.empid or 2.empname\n")

if(choice == 1):
    file_name = sys.argv[1]
    search = int(sys.argv[2])
elif(choice == 2):
    file_name = sys.argv[1]
    search = sys.argv[2]
    
fp=xlrd.open_workbook(file_name,'r')

if(fp._sheethdr_count == 0):
    table = fp.sheet_by_index(0)
rows = table.nrows

for i in range(0,rows):
	L=table.row_values(i)
	for j in range(0,len(L)):
		if(L[j] == search):
			print L
			sys.exit()
