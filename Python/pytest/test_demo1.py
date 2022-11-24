import pytest 

"""
def setup_module(module):
	global a
	a=5
	global b 
	b=5
	print("set up called")
	
	
def teardown_module(module):
	 print()
	 print("tear down called")
	 
"""

# also can be used like 

@pytest.fixture(scope='module')
def init_anyname():
	global a
	global b
	a=5
	b=5
	print()
	print("acts as setup")
	
	yield
	print()
	print("acts as teardown")
	

#@pytest.mark.login       -----------------------------run command ------- pytest pytest/ -k login ----------------------------
def test_1(init_anyname):     #calling init_anyname makes the variable available for all methods because a and b is global scope
	assert a ==b, "a ==b  "
	#assert 2 == '2' ," 2 == 2"
	
#can also use @pytest.usefixture('init_anyname') instead as specifiying as the arguments to the methods	 -->like in test_1(init_anyname)
def test_2():
	assert 'hello'.upper() == 'HELLO'
	assert 5+4 == 9 
	assert a== b ,"a is  eq to b"
	
	
#@pytest.mark.login 	 -----------------------------run command ------- pytest pytest/ -k login ----------------------------
def test_3():
	assert True
	#assert False
	
def test_3_and_4():
	assert 1

	
@pytest.mark.parametrize("num1 , num2 , res" , [(7 , 3, 10) ,( "hello " ,"world" ,"hello world" ), (23.3 , 23.3 , 46.6)])
def test_add(num1 , num2 , res):
	assert num1 + num2 == res , "num1 + num2 != res "	
	
	
@pytest.mark.skip
def 	test_sub():
	assert 10 - 5 == 5," not equal to "
	assert 10 - 3 ==3
	
@pytest.mark.xfail()
def test_mul():
	assert 10*5 == 50 
	assert 10*6 ==60,"failed"

	
