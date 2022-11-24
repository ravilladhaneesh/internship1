import pytest 
def test_1():
	assert 1==1, "1 ==1 "
	assert 2 == '2' ," 2 != '2'"
	
	
def test_2():

	assert 'hello'.upper() == 'HELLO'
	
	assert 5+4 == 9 
