/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
for
while
goto
static
###End banned keyword*/
#include <iostream>
using namespace std;

int mx = -1e6;
int largest_input(){
	int x; cin >> x;
	
	if (x == 0) return mx;
	else {
		mx = ((mx >= x) ? mx : x);
		largest_input();
	}
}
int main(){
	cout << largest_input();
}
