#include <iostream>
int main()
{
	/* 
	std::cout << "hallo_Worlddd" << std::endl;
	std::cout << "hallo_Worldddd1" << std::endl;
	std::cout << "hallo_Worldddd2" << std::endl;
	std::cout << "hallo_Worldddd3" << std::endl;
	std::cout << "hallo_Worldddd4" << std::endl;
	std::cout << "hallo_Worldddd 5" << std::endl;
	std::cout << "hallo_Worldddd 6" << std::endl;
	std::cout << sizeof(int)	<< std::endl;
	std::cout << sizeof(bool)	 << std::endl;
	std::cout << sizeof(char) << std::endl;	
	std::cout << sizeof(double) << std::endl;
	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(long) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << "Long-Long: " << std::endl;
	std::cout << sizeof(long long) << std::endl;
	std::cout << sizeof(long long) << std::endl;
	printf("done \n");    */
	int i = 0 , a = 8;
		a++ ; 
	  
	 bool result = a == 9;
	 if (result == true)
		 std::cout << a << std::endl;
	 else
	 {
		 for (i = 0; i <= 10; i++)
		 {
			 std::cout << a + i << std::endl;
		 }
		 printf("\n Done");
	  }
	 std::cin.get();
}