class Student {
public:
	void setName(const char* n) {
		int size = strlen(n);
		for (int i = 0; i < size; ++i) {
			name[i] = n[i];
			n++;
		}
	}
	void getName() {
		for (int i = 0; i < strlen(name); ++i)
			std::cout << name[i];
		std::cout << std::endl;
	}
	void setSurname(const char* n) {
		int size = strlen(n);
		for (int i = 0; i < size; ++i) {
			surname[i] = *n;
			++n;
		}
	}
	void getSurname() {
		for (int i = 0; i < strlen(name); ++i)
			std::cout << name[i];
		std::cout << std::endl;
	}
private:
	char name[20];
	char surname[40];
};