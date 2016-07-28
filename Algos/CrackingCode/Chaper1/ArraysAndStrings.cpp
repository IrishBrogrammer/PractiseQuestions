#include <iostream>
#include <string>

/*
 * Implement an algorithm to determine if a string has all unique characters.
 * What if you can not use additional data structures
 * With no additional structures either brute force search or if possible order string
 */
bool CheckUnique( std::string testString )
{
	bool charSet[256] = { false};
	
	for( int i =0; i <testString.size(); i++ )
	{
		char currentChar = testString[i];
		int checkIndex = currentChar;
		
		if ( charSet[checkIndex] )
		{
			return false;
		}
		else
		{
			charSet[checkIndex] = true;
		}
	}
	return true;
}

void TestUnique()
{
	std::string testString("ABBC");
	std::cout << testString << "\n";
	
	if ( CheckUnique( testString ) )
	{
		std::cout << "Pass";
	}
	else
	{
		std::cout << "Fail";
	}
}

/* Reverse a string in place */
void ReverseString( char* str )
{
	char* end = str;
	
	if ( str )
	{
	
		while( *end )
			end = end++;
		
		end = end--;
	
		while( str < end )
		{
			char tmp = *str;
			*str = *end;
			*end = tmp;
		
			str++;
			end--;
		}
	}
		

}

void TestReverse()
{
	std::string testString( "Brian");
	
	std::cout << "Testing Reverse" << "\n";
	std::cout << "Pre Test String : " << testString << "\n";
	ReverseString( &testString[0] );
	std::cout << "Post Test String : " << testString << "\n";
	
}

/*
 *Design an algorithm and write code to remove the duplicate characters in a string
 *without using any additional buffer. NOTE: One or two additional variables are fine.
 *An extra copy of the array is not.
 */

void RemoveDuplicates( char[] str , int length )
{
	if ( length < 2 )
		return;
	
	int numOfUnique = 1;
	for ( int i = 1;i < length; i++ )
	{
		int j;
		for ( j = 0; j < numOfUnique; ++j )
		{
			if ( str[i] == str[j] )
				break; 
		}
		
		if ( j == numOfUnique )
		{
			str[numOfUnique] = str[i]
			numOfUnique++;
		}	
	}
	str[numOfUnique] = 0;
	
	
	
	
}




int main()
{
    TestUnique();
	TestReverse();
}

