#include <cppcutter.h>
#include "../src/calc.h"

namespace test_Calc
{
	void test_add(void)
	{
		Calc *calc = new Calc();
		cppcut_assert_equal(3, calc->add(1, 2), cppcut_message("add 1+2"));
		cppcut_assert_equal(5, calc->add(2, 3), cppcut_message("add 2+3"));
	}

	void test_sub(void)
	{
		Calc *calc = new Calc();
		cppcut_assert_equal(1, calc->sub(3, 2));
	}
}
