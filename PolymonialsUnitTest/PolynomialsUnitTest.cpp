#include "pch.h"
#include "CppUnitTest.h"
#include <utility>
#include <iostream>
#include <string>
#include <list>
#include <map>
#include <cmath>
#include <sstream>
#include <locale.h>
#include "../Polynomials/EquationNode.h"
#include "../Polynomials/Equation.h"
#include "../Polynomials/EquationBuilder.h"
#include "../Polynomials/CommandLineInput.h"
#include "../Polynomials/EquationDatabase.h"
#include "../Polynomials/App.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PolymonialsUnitTest
{
	TEST_CLASS(PolymonialsUnitTest)
	{
	public:
		
		TEST_METHOD(EquationNodeCreationTest)
		{
			EquationNode* en = new EquationNode(2, 3);
			Assert::IsNotNull(en);
		}

		TEST_METHOD(dbCreationTest)
		{
			EquationDatabase* db = new EquationDatabase();
			Assert::IsNotNull(db);
		}

		TEST_METHOD(equationNodeGetBaseTest)
		{
			EquationNode* en = new EquationNode(2, 3);
			Assert::AreEqual(en->getBase(), 2);
		}

		TEST_METHOD(ListCreationTest)
		{
			std::list<EquationNode>* factors = new std::list<EquationNode>;
			Assert::IsNotNull(factors);
		}

		TEST_METHOD(EquationNodeGetPowerTest)
		{
			EquationNode* en = new EquationNode(2, 3);
			Assert::AreEqual(en->getPower(), 3);
		}

		TEST_METHOD(sortTest)
		{
			Assert::IsFalse(EquationNode::sortByPowerAsc(*new EquationNode(2, 2), *new EquationNode(3, 3)));
		}
		
	};
}
