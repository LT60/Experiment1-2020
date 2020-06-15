class Shape							//形状接口
{
public:
	Shape() {}						//构造函数，本基类无任何数据成员
	virtual ~Shape() {}				//虚析构函数，只须派生类收尾

	virtual double Area() { return 0; }
	virtual void showShapeName() = 0;//函数名有点长，主要是因为之前一直遵循“输出最好不要再函数内实现，所以加了show的单词。
};
