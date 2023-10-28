import time
from random import randint
from termcolor import colored
for i in range(1,2):
	print('13')
s=''
a=colored('Happy Friendship Day' ,'cyan',attrs=['blink'])
y=colored('*      *    ـﮩﮩ   *    *     * ','black')
for i in range(1,1000):
	count = randint(1,100)
	while(count>0):
				s += ' '
				count -= 1
	if(i % 10 ==0):
		print (s + a )
	else:
		print(s +  y)
	s = '★                                                     ★ '
	time.sleep(0.3)