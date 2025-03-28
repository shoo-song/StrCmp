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
	double CheckAlpha(string a, string b) {
		int bmpAlpha_a = 0;
		int bmpAlpha_b = 0;
		double same_count = 0;
		double total_count = 0;
		for (int i = 0; i < a.size(); i++) {
			bmpAlpha_a |= 1 << (a[i] - 'A');
		}
		for (int j = 0; j < b.size(); j++) {
			bmpAlpha_b |= 1 << (b[j] - 'A');
		}
		for (int k = 0; k < 26; k++) {
			if (((bmpAlpha_a & 1 << k) != 0) && ((bmpAlpha_b & 1 << k) != 0)) {
				same_count++;
				total_count++;
			}
			else if (((bmpAlpha_a & 1 << k) != 0) || ((bmpAlpha_b & 1 << k) != 0)) {
				total_count++;
			}
		}
		return (same_count / total_count) * 40;
	}
	double compare(string a, string b) {
		double result = 0;
		result += CheckLength(a, b);
		result += CheckAlpha(a, b);
		return result;
	}
};