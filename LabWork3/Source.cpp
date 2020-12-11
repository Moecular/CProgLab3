#include <iostream>
#include <Windows.h>
using namespace std;

class PassengerCarrier {
public:
	PassengerCarrier() {
		numberOfKilometers = 0.0;
		costPerKilometer = 0.0;
	}

	double calculateCostOfTransportationOfPassengers() const {
		return numberOfKilometers * costPerKilometer;
	}

	void setNumberOfKilometers(const double &numberOfKilometers) {
		this->numberOfKilometers = numberOfKilometers;
	}

	void setCostPerKilometer(const double &costPerKilometer) {
		this->costPerKilometer = costPerKilometer;
	}

	const double &getNumberOfKilometers() const {
		return numberOfKilometers;
	}

	const double &getCostPerKilometer() const {
		return costPerKilometer;
	}

private:
	double numberOfKilometers;
	double costPerKilometer;
};

class Plane : public PassengerCarrier {
public:
	Plane() {
		speed = 0.0;
	}

	double calculateTimeOfTransportationOfPassengers() const {
		return getNumberOfKilometers() / speed;
	}

	void setSpeed(const double &speed) {
		this->speed = speed;
	}

	const double &getSpeed() const {
		return speed;
	}

private:
	double speed;
};

class Train : public PassengerCarrier {
public:
	Train() {
		speed = 0.0;
	}

	double calculateTimeOfTransportationOfPassengers() const {
		return getNumberOfKilometers() / speed;
	}

	void setSpeed(const double &speed) {
		this->speed = speed;
	}

	const double &getSpeed() const {
		return speed;
	}

private:
	double speed;
};

class Car : public PassengerCarrier {
public:
	Car() {
		speed = 0.0;
	}

	double calculateTimeOfTransportationOfPassengers() const {
		return getNumberOfKilometers() / speed;
	}

	void setSpeed(const double &speed) {
		this->speed = speed;
	}

	const double &getSpeed() const {
		return speed;
	}

private:
	double speed;
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Plane plane;
	double value;

	cout << "�������� �������: ";
	cin >> value;
	plane.setSpeed(value);

	cout << "���������� ����������: ";
	cin >> value;
	plane.setNumberOfKilometers(value);

	cout << "��������� �� ��������: ";
	cin >> value;
	plane.setCostPerKilometer(value);

	cout << "\n��������� ������������: " << plane.calculateCostOfTransportationOfPassengers() << endl;
	cout << "����� ������������: " << plane.calculateTimeOfTransportationOfPassengers() << endl;

	return 0;
}