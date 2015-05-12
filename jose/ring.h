class Boy
{
public:
    int code;
    //string name;
    Boy* next;
};

class Ring
{
public:
	Ring(int n);
	void Count(int m);
	void PutBoy();
	void ClearBoy();
	void AddBoy();
	void ShowNum();
	~Ring();
protected:
	Boy* pBegin;
	Boy* pivot;
	Boy* pCurrent;
	Boy** leave;
	int num;
	int tot;
};


