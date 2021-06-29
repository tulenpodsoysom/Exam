/*
»меетс€ строка текста и слово. ќпределить,
сколько раз встречаетс€ в тексте кажда€ буква слова.
*/

#include <iostream>
#include <map>
using namespace std;

void main()
{
	char word[] = "Hello";
	char text[] = "Hello World! Watashi wa cool programmer";

	int wordlength = 0;
	while (word[wordlength] != '\0')
		wordlength++;

	int textlength = 0;
	while (text[textlength] != '\0')
		textlength++;

	for (int i = 0; i < wordlength; i++)
	{
		int k = 0;
		for (int j = 0; j < textlength; j++)
			if (word[i] == text[j]) k++;
		cout << k << endl;
	}

}