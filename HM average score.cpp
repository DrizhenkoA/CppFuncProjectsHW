
#include <iostream>
using namespace std;

int main()

{
	float a, b, c, d;
	cout << "Input 4 marks: \n";
	cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
	cout << "Average score = " << round((a + b + c + d) / 4);

}
