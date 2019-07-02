// isAnagramPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>


bool isAnagram(const char* p1, const char* p2) {
	if (p1 == NULL || p2 == NULL)
		return false;

	int letterCount[256] = { 0 };

	//make sure both string have same length
	if (strlen(p1) != strlen(p2)) return false;

	while (*p1) {
		//std::cout << *p1;  //debug
		letterCount[*p1++]++;
		
	}
	std::cout << "\n";
	while (*p2) {
		//std::cout << *p2; // debug
		if (letterCount[*p2++]<0) return false; // not anagrams
		
	}
	return true; // end of function true if no break before 
}	

int main()
{
	const char *s[] = {
		"maine", "ainem",
		"add" , "dad",
		"add", "da" 
	};

	for (int i = 0; i < ARRAYSIZE(s); i += 2) {
		if ( isAnagram( s[i], s[i+1] )) std::cout <<s[i]<<"  "<<s[i+1]<<" is Anagram \n";
		else std::cout << "no \n";
	}
}
