#include <iostream>
#include <ctime>
using namespace std;

class Pet {
public:
	Pet(int a,int b);
	~Pet();
	void set_id(int x);
	void set_name(string c);
	void get_age();
	void get_mood();
private:
	int* id;
	string* name;
	int* age;
	int* mood;
};

Pet::Pet(int a,int b) {
	age = new int(a);
	mood = new int(b);
}

void Pet::set_id(int x) {
	this->id = new int(x);
}

void Pet::set_name(string c) {
	this->name = new string(c);
}

void Pet::get_age() {
	this->age = age++;
}

void Pet::get_mood(){
	srand(time(0));
	int pet_happy = rand() %10;
	if (pet_happy > 4){
		cout << "pet happy" << endl;
		this->mood = mood++;
	}
	else{
		cout<< "pet sad" << endl;
		this->mood = mood--;
	}
}


Pet::~Pet(){
	delete id;
	delete name;
	delete age;
	delete mood;
	id = 0;
	name = 0;
	mood = 0;
}

int main() {
	Pet pet;
	pet.set_id(1);
	pet.set_name("Rex");

	return 0;
}
