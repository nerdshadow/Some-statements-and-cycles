

#include <iostream>

using namespace std;

int main()
{
    cout << "Choose the favorite number (0 - 9)" << endl;
    int Number;
	do
	{
		cin >> Number;
		if (Number < 0 || Number>9)
		{
			cout << "Try something else" << endl;
		}
	} while (Number<0 || Number>9);
    
	switch (Number)
	{
	case 0:
		cout << "You maybe like Coca-Cola Zero?";
		break;
	case 1:
		cout << "Really like to be first?";
		break;
	case 2:
		cout << "Maybe you know Dichotomy is?";
		break;
	case 3:
		cout << "Surrender, HL 3 will never be real";
		break;
	case 4:
		cout << "Optimal number of people for coop";
		break;
	case 5:
		cout << "Really pretty number, huh?";
		break;
	case 6:
		cout << "A cube has 6 faces, y`know";
		break;
	case 7:
		cout << "Not bad choice";
		break;
	case 8:
		cout << "If you try a little bit it may become the infinity";
		break;
	case 9:
		cout << "Did i hear something in german?";
		break;

	default:
		
		break;
	}
}
