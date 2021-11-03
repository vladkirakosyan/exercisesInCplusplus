class Planets {
public:
	void setName(std::string name) {
		_name = name;
	}
	void setRadius(double raduis) {
		_radius = raduis;
	}
	void setWeight(double weight) {
		_weight = weight;
	}
	void setDistance(double distance) {
		_distance = distance;
	}
	double getDistance() {
		return _distance;
	}
	double getRadius() {
		return _radius;
	}
	std::string getName()
	{
		return _name;
	}
	double getWeight() {
		return _weight;
	}
	long double getGravity(){
		long double g =  G * _weight / pow(_radius, 2);
		return g;
	}


private:
	const long double G = 6.674e-11;
	double _radius;
	double _weight;
	double _gravity;
	double _distance;
	std::string _name;
};
