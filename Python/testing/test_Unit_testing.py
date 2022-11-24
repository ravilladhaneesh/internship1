import Unit_testing 
import unittest

class Testcal(unittest.TestCase):
	
	def test_add(self):
		self.assertEqual(Unit_testing.add(5,6),11)
		self.assertEqual(Unit_testingadd(0,0),-8)
		
	
	def test_sub(self):
		self.assertEqual(Unit_testing.sub(-1,1),-2)
	
	
	def test_mul(self):
		self.assertEqual(Unit_testing.mul(-1,-1),1)
		
	def test_div(self):
		with self.assertRaises(ValueError):
			Unit_testing.div(1,0)
		
	
if __name__ == '__main__':
	unittest.main()
