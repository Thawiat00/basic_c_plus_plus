#include <iostream>
#include <limits>


int main()
{
	std::cout << "Here is some text.";


	//Q: When executing a program, the console window blinks
	//   and then closes immediately

	/*
	First, add or ensure the following lines are near the top of your program (Visual Studio users, make sure these lines appear after #include “pch.h” or #include “stdafx.h”, if those exist):

	#include <iostream>
	#include <limits>
	*/

	/*
	Second, add the following code at the end of your main() function (right before the return statement):

	std::cin.clear(); // reset any error flags
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	*/


	//std::cin.clear(); // reset any error flags

	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore any character in the input buffer until we find an enter character

	//std::cin.get(); // get one more char from the user

	//Q: When trying to use cin, cout, or endl,
	// the compiler says cin,cout, or endl is an 'underclared identifier'
	

	/*
	First, make sure you have included the following line near the top of your file

	#include <iostream>

	Second, make sure each use of cin, cout, and endl are prefixed by "std::" For example

	std::cout << "Broccoli" <<std::endl;

	*/
	

	// Visual Studio issure
	/*
	Q: When compiling with microsoft visual c++, you get a C1010 fatel error,
	with an error message like "c:\vcprojects\test.cpp(263):fatal error C1010
	:unexpected end of file while looking for precompiled header directive
	"
	*/
	/*
	This error occur when the microsoft visual c++ compiler is set to
	use precompiled headers but one (or more) of your C++ code file
	does not #include "stdafx.h" or #include "pch.h" as the first line of the code file

	Our suggested fix is to turn off precompiled headers,which we show do in  lesson
	 0.7 -- Compiling your first program.

	if you would like to keep precompiled headers turn on,
	to fix this problem, simply locate the file(s) producing the error
	(in the above error,test.cpp is the culprit), 
	and add the following line at the very top of the file(s):
	
	#include "pch.h"

	Older version of visual Studio use “stdafx.h”
	onstead of “pch.h”,
	so if pch.h doesn't resolve the issue, try stdafx.h.

	Note that for programs with multiple files, every C++ code file needs to start with this line.

	*/








	return 0;
}

//when ex