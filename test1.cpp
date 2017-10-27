#include<cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <functional>
#include <list>
#include <utility>
#include <map>
#include <vector>
#include <array>
#include <queue>

using namespace std;

int main() {

  int A[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} }; 

  cout << A[0][0] << " " << A[0][1] << " " << A[0][2] << endl;
  cout << A[1][0] << " " << A[1][1] << " " << A[1][2] << endl;
  cout << A[2][0] << " " << A[2][1] << " " << A[2][2] << endl;

  cout << endl;

  for (int i=0; i < 3; i++) {
    for (int j = 2; j >= 0; j--) {
	
	if( j >= 0) {
	  cout << A[j][i] << " ";
	}
	
	else {
	  cout << " ";
	}

    }
    cout << endl;
  }
  return 0;
}
