#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
	unsigned long long i, j, n;
	bool mark = 0;
	auto s = *new std::string();
	auto m = *new std::map<std::string, std::string>();
	while (std::getline(std::cin, s)) {
		if (s.length() < 1) {
			++mark;
			continue;
		}
		if (mark) {
			try {
				std::cout << m.at(s) << "\n";
			} catch (...) {
				std::cout << "eh\n";
			}
		} else {
			i = s.find(' ');
			m[s.substr(i + 1)] = s.substr(0, i + 1);
		}
	}
	return 0;
}

/*
dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay

atcay
ittenkay
oopslay
*/
