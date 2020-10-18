#include <iostream> // cin, cout

#include <vector> // V
#include <algorithm> // sort
#include <string>
#include <utility> // pair

using namespace std;

bool compare(pair<double, string> pds1, pair<double, string> pds2) {
	return pds1.first < pds2.first;
}

string result(double o, double b, double i) {
	pair<double, string> pair_otavio, pair_bruno, pair_ian; 
	vector<pair<double, string>> V;

	// Otavio
	pair_otavio.first = o;
	pair_otavio.second = "Otavio";
	
	// Bruno
	pair_bruno.first = b;
	pair_bruno.second = "Bruno";
	
	// Ian
	pair_ian.first = i;
	pair_ian.second = "Ian";
	

	V.push_back(pair_otavio); V.push_back(pair_bruno); V.push_back(pair_ian);

	sort(V.begin(), V.end(), compare);

	if (V[0].first == V[1].first) return "Empate";	

	return V[0].second;
}

int main() {
	double O, B, I;

	// Mestre Juan Lopez
	while (cin >> O >> B >> I) {
		cout << result(O, B, I) << endl;
	}
	
	return 0;
}

