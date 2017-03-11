import xlwt

test_cases = xlwt.Workbook(encoding = 'ascii')
test_sheet1 = test_cases.add_sheet('Add')

inputs = [0,1,2,3,-8,4,4.5,1.3]
outputs = [0,1,2,3,-8,4,4.5,1.3]

num = input("enter the number of test cases\n")

for i in range(0,num):
    test_sheet1.write(i,0,inputs[i])
    test_sheet1.write(i,1,outputs[i])
    res = inputs[i] + outputs[i]
    test_sheet1.write(i,2,res)


    
test_cases.save('test.xls')
