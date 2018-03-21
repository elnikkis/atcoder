def accessory_generator():
	a = ['b']
	yield a
	
	while True:
		# 3n+1
		a.insert(0, 'a')
		a.append('c')
		yield a
		
		# 3n+2
		a.insert(0, 'c')
		a.append('a')
		yield a
		
		# 3n
		a.insert(0, 'b')
		a.append('b')
		yield a

gen = accessory_generator()

N = raw_input()
S = raw_input()

flag = False
for i in range(50):
	s = gen.next()
	ss = ''.join(s)
	if S == ss:
		print(i)
		flag = True
		break
if not flag:
	print(-1)
