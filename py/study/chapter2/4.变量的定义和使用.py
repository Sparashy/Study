lucky_number=8

my_name='pj'

print(my_name,'的幸运数字为',lucky_number,sep='')
print('lucky_number的数据类型为',type(lucky_number))
#变量的值可以更改

lucky_number='北京欢迎你'
print('lucky_number的数据类型为',type(lucky_number))

#python允许多个变量指向同一个值
num=number=1024
print(num,number)
print(id(num))
print(id(number))
