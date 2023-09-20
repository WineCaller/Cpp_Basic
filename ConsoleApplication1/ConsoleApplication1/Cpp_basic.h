#pragma once
void InputOutput();
void Variable();
void VariableTypeNumber();
void VariableTypeCharactor();
void VariableTypeBool();
void OperationArithmetic(int Arith1, int Arith2);
void OperationIncreasementDecreasement();
void OperationComparison();
void OperationLogic();
void OperationBit();
void OperationThree();
void StatmentIf();
void StatmentSwitch();
void StatmentReiteration();
void StatmentInteger();
void StatmentWhile();

int GuGuDan(int Dan);
void VarScope(int Number);
void SizeComparison();
void LeapYear();
void Quadrant();
void AutomationOven();
void Receipt();
void ShootingStars();

void DefineArray();
void CountNumber();
void LessNnumber();
void NotSubmitted();
void BubbleSort();
void String();
void Structure();
void IndexChar();
void AlphaNumber();
void Enum();
void TwoDimension();
void MinMax();
void PinterDefine();
void ArrayClass();
void StringClass();
void VectorClass();
void VirtualChild();
void VirtualParent();
void PrintClass();
int SumN(int a, int b);
float SumN(float a, float b);

template <typename HT>
HT SumTy(HT a, HT b)
{
	return (a + b);
}