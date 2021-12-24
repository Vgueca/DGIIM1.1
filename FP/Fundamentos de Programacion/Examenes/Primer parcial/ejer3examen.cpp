#include <iostream>

using namespace std;

int main(){
	for(int i=1; i<=5; i ++){
		for(int j=1; j<=5; j ++){
			for(int z=1; z<=5; z ++)
			if ( i!=j and j!=z and z!=i)
				cout<< i << j << z << endl;
		}
	}
}
