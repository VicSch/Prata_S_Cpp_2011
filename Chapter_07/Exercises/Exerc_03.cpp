#include <iostream>
using namespace std;

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(box cub);
float volume_calc(box* cub);

int main() {
	
	box cubic;

	cout << "Enter box maker: ";
	cin.getline(cubic.maker, 40);
	cout << "Enter box height: ";
	cin >> cubic.height;
	cout << "Enter box width: ";
	cin >> cubic.width;
	cout << "Enter box length: ";
	cin >> cubic.length;

	box* box_ptr = &cubic;
	cubic.volume = volume_calc(box_ptr);
	show_box(cubic);

	cin.get();
	cin.get();
}

void show_box(box cub) {

	cout << "Maker: " << cub.maker << endl;
	cout << "Height: " << cub.height << endl;
	cout << "Width: " << cub.width << endl;
	cout << "Length: " << cub.length << endl;
	cout << "Volume: " << cub.volume << endl;
}

float volume_calc(box* cub) {
	return cub->height * cub->width * cub->length;
}
