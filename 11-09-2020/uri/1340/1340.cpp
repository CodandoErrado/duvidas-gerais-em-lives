#include <iostream>

#include <queue>
#include <stack>
#include <set>

using namespace std;

int main() {
	enum DataStructures { QUEUE, STACK, PRIORITY_QUEUE };

	int n;

	int op, value
	int value_aux;

	DataStructures ds_aux;

	// vamos receber n
	// até chegarmos em EOF
	// 
	// EOF := END OF FILE
	while (cin >> n) {
		queue<int> Q;
		stack<int> S;
		priority_queue<int> PQ;	

		// Inicializando nosso set
		set<DataStructures> Set;
		Set.insert(QUEUE); Set.insert(STACK); Set.insert(PRIORITY_QUEUE);

		for (int i = 0; i < n; i++) {
			cin >> op >> value;

			if (op == 1) {
				// colocar
				//

				Q.push(value);
				S.push(value);
				PQ.push(value);
			} else {
				// tirar

				// Queue
				value_aux = Q.front();
				Q.pop();

				if (value_aux != value) {
					if (Set.find(QUEUE) != Set.end()) {

						Set.erase(Set.find(QUEUE));	
					}
				}

				// Stack
				value_aux = S.top();
				S.pop();
				
				if (value_aux != value) {
					if (Set.find(STACK) != Set.end()) {

						Set.erase(Set.find(STACK));	
					}

				}

				// Priority Queue
				value_aux = PQ.top();
				PQ.pop();
				if (value_aux != value) {
					if (Set.find(PRIORITY_QUEUE) != Set.end()) {

						Set.erase(Set.find(PRIORITY_QUEUE));	
					}

				}
			}
		
				
		}
		/*
		// Output

		if (Set.empty()) {
			cout << "impossible" << endl;
		} else if (Set.size() > 1) {
			cout << "not sure" << endl;
		} else {
			ds_aux = *(Set.begin());


			switch(ds_aux) {
				case QUEUE:
					cout << "queue" << endl;
					break;
				case STACK:
					cout << "stack" << endl;
					break;
				case PRIORITY_QUEUE:
					cout << "priority queue" << endl;
					break;
					
				default:
					break;
			}
		}
		*/
	}

	return 0;
}

