#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
	bool isPalindrome(string s)
	{
		s = remove(s);
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != s[s.length() - i - 1])
				return false;
		}
		return true;
	}

	string remove(string sen)
	{
		string result;
		for (int i = 0; i < sen.length(); i++)
		{
			if ((sen[i] >= 48 && sen[i] <= 57) || (sen[i] >= 65 && sen[i] <= 90) || (sen[i] >= 97 && sen[i] <= 122))
			{
				if (sen[i] >= 65 && sen[i] <= 90)
					result += (sen[i] + 32);
				else
					result += sen[i];
			}
		}
		return result;
	}
};

int main()
{
	Solution sol;
	string sen;
	cout << "Enter a string to check if it's a palindrome or not: ";
	getline(cin, sen);
	cout << endl;

	if (sol.isPalindrome(sen))
		cout << "String is Palindrome.\n";
	else
		cout << "String is not Palindrome.\n";

	cout << endl << endl;
	system("pause");
	return 0;
}
