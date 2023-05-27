#include <iostream>
#include <string>

int IsKPeriodic(const std::string& txt, const std::string& pat)
{
	int k = 0;
	for (int i = 0; i < txt.size(); i++)
	{
		for (int j = 0; j < pat.size(); j++)
		{
			
			if (pat[j] != txt[i])
			{
				return -1;
				break;
			}
			if (pat[j] == txt[i] && j != pat.size() - 1)
			{
				i++;
			}
			if (pat[j] == txt[i] && j == pat.size() - 1)
			{
				k = j+1;
			}
		}
	}
	return k;
}

int main()
{
	std::string txt;
	std::string pat;
	std::cout << "Enter text: " << std::endl;
	std::cin >> txt;
	std::cout << "Enter pattern: " << std::endl;
	std::cin >> pat;
	int k = IsKPeriodic(txt, pat);
	std::cout << "string multiplicity is: " << k << std::endl;

}