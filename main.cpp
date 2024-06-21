#include<stdio.h>

class Ishape
{
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

class Circle :public Ishape
{
public:
	void Size();
	void Draw() { printf("–ÊÏ %f\n", size); };
};

class Rectangle :public Ishape
{
public:
	void Size() override;
	void Draw() { printf("–ÊÏ %f\n", size); };
};

void Ishape::Size() {}

void Circle::Size()
{
	radius = 5.0f;
	printf("‰~‚Ì”¼Œa %f\n", radius);
	size = radius * radius * 3.14f;
}


void Rectangle::Size()
{
	radius = 5.0f;
	printf("‹éŒ`‚Ì”¼Œa %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	Ishape*ishape[2] = { new Circle ,new Rectangle };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}