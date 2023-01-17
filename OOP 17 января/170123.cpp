#include <iostream>
#include <utility>
#include <map>
#include <string>
#include <tuple>
#include <vector>
#include <unordered_map>


//leetcode.com - решение задач








class DataManager {
public: 
	int mostSearchedkey() {

	std::unordered_map<int, int> keyAmount;
	for (size_t i = 0; i < _keys.size(); i++) {
		keyAmount.insert({ _keys[i], 1 });
		const auto& [it, isInserted] = keyAmount.insert({ _keys[i], 1 });
		if (!isInserted) {
			auto value = it->second;
			value++;
			keyAmount[_keys[i]] = value;


		}
		}
	std::pair<int, int> key_biggestValue = { 0, 0 };
	for (std::unordered_map<int, int>::const_iterator it = keyAmount.begin(); it != keyAmount.end(); it++) {
		if (key_biggestValue.second < it->second) {
			key_biggestValue = std::make_pair(it->first, it->second);
		}
		return key_biggestValue.first;
	}
			

}

private:
	std::vector<int>_keys = { 1, 1, 2, 2, 2, 4, 6, 2, 7, 7, 7, 2 };
};





int divide(int a, int b) {
	if (b == 0) {
		throw "division by zero";
	}
	return a / b;
}


int errorFunc() {

	throw 0;
	return 1;
}


	int main()


	{

		/*int x = 10, y = 0;
		try {
			errorFunc();

			std::cout << divide(x, y) << std::endl;
		}
		catch (const char* msg) {
			std::cerr << msg << std::endl;

		}
		catch (...) { // поймает все
			std::cerr << "Some exception has  occured" << std::endl;
		}
	

	/*std::tuple<int, double, float> t{1, 2.1, 3.2f};
	const auto& [a, b, c] = t;
	std::cout << a << " " << b << " " << c << std::endl;
	std::cout << std::get<0>(t) << std::endl;

	std::tuple<int, int, double> t2;
	std::vector<std::tuple<int, double, std::string>>vec;
	vec.push_back({ 1, 2.5, "Bob" });
	vec.push_back({ 1, 3.5, "Al" });
	for (size_t i = 0; i < vec.size(); i++) {
		const auto& [x, y, z] = vec[i];
		std::cout << x << " " << y << " " << z << std::endl;


	}
	DataManager dm;

	std::cout << dm.mostSearchedkey() << std::endl;



 }*/

		std::vector<int> v{ 1, 2, 3 };
		try {
			int z = v.at(10);
		}
		catch (const std::out_of_range& e) {
			std::cerr << e.what() << std::endl;
		}





