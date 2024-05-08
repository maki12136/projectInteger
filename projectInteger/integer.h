#pragma once
class integer
{

public:
	int value;
private:
	Integer() :value(0) {};
	Integer(int value): value(value){}
	Integer add(Integer a);
	Integer sub(Integer a);
	Integer mul(Integer a);
	Integer div(Integer a);
	Integer mod(Integer a);
	Integer pow(Integer a);
	Integer opp();
	int getValue();
	void setValue(int value);
};

