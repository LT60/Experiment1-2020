class Shape							//��״�ӿ�
{
public:
	Shape() {}						//���캯�������������κ����ݳ�Ա
	virtual ~Shape() {}				//������������ֻ����������β

	virtual double Area() { return 0; }
	virtual void showShapeName() = 0;//�������е㳤����Ҫ����Ϊ֮ǰһֱ��ѭ�������ò�Ҫ�ٺ�����ʵ�֣����Լ���show�ĵ��ʡ�
};
