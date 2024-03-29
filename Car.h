#pragma once
class Car {
public:

	Car();
	Car(int speed, int direction);
	~Car();

	//methods
	int getSpeed() const;
	int getDirection() const;
	void accelerate(int speed);
	void decelerate(int speed);
	void turnLeft(int degrees);
	void turnRight(int degrees);

private:
	int m_speed, m_direction;

};
