#include "Ch15_PureVirtualParent.h"
#include "io.h"

class PureVirtualChild : public PureVirtualParent
{
public :
	virtual void Print();

	void PrintClass() override
	{
		cout << "Pure Virtual Parent " << endl;
	}
};