print('华氏度\t摄氏度')
a = 0 
for a in range(0,301,20) :
    b = (a-32)/1.8
    print("%d\t%.1f"%(a,b))
    a = a + 20