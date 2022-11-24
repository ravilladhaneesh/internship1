import os
import threading
import concurrent.futures
import time


start_time = time.perf_counter()

def remove_succ_duplicate(file1):

	f = open(file1,'r')
	s = f.read()
	s = s.split()
	
	
	new_file = []
	recent_word=None
	for word in s:
		
		if word != recent_word:
			new_file.append(word)
			recent_word=word
		
	print(" ".join(new_file))
	print()
	
	newf = "new"+file1
	n = open(newf,'w')
	n.write(" ".join(new_file))
	return " ".join(new_file)
	
	

path =  '/home/local/ZOHOCORP/dhaneesh-pt6533/Documents/Python/task1/files'

os.chdir(path)# moves to current directory specified

	
c_of_files=0
for file in os.listdir():
	if file.endswith(".txt"):
		file_p = f'{path}/{file}'
		
		c_of_files+=1

list_of_files = os.listdir()


if c_of_files <10:
	no_of_threads=c_of_files
else:
	no_of_threads=10
	

"""
with concurrent.futures.ThreadPoolExecutor() as executor:
	results = executor.map(remove_succ_duplicate , list_of_files) 
	for result in results:
		print(result)

"""



threads = []
i=0
for _ in range(no_of_threads):

		t = threading.Thread(target=remove_succ_duplicate,args=[list_of_files[i]])
		i+=1
		t.start()
		threads.append(t)


for thread in threads :
	thread.join()

end_time = time.perf_counter()

print("____________________________________")
print(f"Program executed in {end_time - start_time} seconds")


print(list_of_files)
