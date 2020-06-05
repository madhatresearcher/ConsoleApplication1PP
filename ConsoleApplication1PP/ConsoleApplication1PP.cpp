#include<iostream>
int main()
{
	std::cout << "calculating volume in square feet!!!" << std::endl;
	std::cout << "input the length..." << std::endl;
	int length;
	std::cin >> length;
	std::cout << "input the width: " << std::endl;
	int width;
	std::cin >> width;
	std::cout << "input the height: " << std::endl;
	int height;
	std::cin >> height;
	int volume = length * width * height;
	std::cout << "the volume of ccontainer of length, " << length << " and width " << width << " and height " << height << " is " <<volume << std::endl;


	return 0;
}