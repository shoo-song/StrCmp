#include <iostream>
using namespace std;
class StringCompare {
public:
	double CheckLength(string a, string b) {
		double size_a = a.size();
		double size_b = b.size();
		double diff = 0;
		if (size_a >= size_b) {
			diff = size_a - size_b;
			if (diff >= size_b) return 0;
			return (1 - (diff / size_b)) * 60;
		}
		else {
			diff = size_b - size_a;
			if (diff >= size_a) return 0;
			return (1 - (diff / size_a)) * 60;
		}
		return 0;
	}
	double compare(string a, string b) {
		double result = 0;
		result += CheckLength(a, b);
		return result;
	}
};