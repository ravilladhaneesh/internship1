import threading
import time


lock = threading.Lock()


def p1(lock):
	lock.acquire()
	
	print(f"per 1 in room")
	time.sleep(2)
	print(f'per 1 out of room')
	
	lock.release()

def p2(lock):
	
	'''
	while True:
		if lock.acquire(timeout=1) is True:
			print('can go now')
			break
			
		else:
			print('wait')
	'''
	
	while True:
		if lock.acquire() :
			break
		else:
			print('wait')
			
	
	
	print(f"per 2 in room")
	time.sleep(2)
	print(f'per 2 out of room')
	
	lock.release()


p1 = threading.Thread(target=p1,args=(lock,))
p2 = threading.Thread(target=p2,args=(lock,))

p1.start()
p2.start()

p1.join()
p2.join()

