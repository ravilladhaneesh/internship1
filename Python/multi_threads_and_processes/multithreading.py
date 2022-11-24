import time
import concurrent.futures
import threading


s = time.perf_counter()

def do_something(sec):
    print('sleep',sec)
    time.sleep(sec)
    return f'end {sec}'
    
 
secs = [5,4,3,2,1]


"""
# return unordered as min

with concurrent.futures.ThreadPoolExecutor() as executor:
 	result = [executor.submit(do_something,sec) for sec in secs] 
 	for i in concurrent.futures.as_completed(result):
 		print(i.result())
"""


#returns ordered as specified
with concurrent.futures.ThreadPoolExecutor() as executor:
	results = executor.map(do_something,secs) 
	for res in results:
		print(res)






"""   
t1 = threading.Thread(target=do_something)
t2= threading.Thread(target=do_something)

t1.start()
t2.start()

t1.join()
t2.join()
"""

e = time.perf_counter()

print(e-s)
