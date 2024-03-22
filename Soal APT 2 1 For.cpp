#include <iostream>

using namespace std;

int main() {
	int nilai;
	
	cout << "Input nilai : ";
    cin >> nilai;
    
    cout << "Output : " << endl;
    
    for (int i = 1; i <= nilai; i++) 
    {
		if (i % 2 != 0) 
		{
			for (int j = 0; j < nilai; j++) 
			{
				cout << j << ", ";
			}
			cout << endl;
		} 
		else
		{
			for (int k = nilai; k > 0; k--) 
			{
				cout << k << ", ";
			}
			cout << endl;
		}
	}
	return 0;
}
