#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

static void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

static void	test_set_point(void)
{
	t_point	point;
	set_point(&point);
	ASSERT_EXPR(point.x == 42 && point.y == 21);
}

int		test_ft_point(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_set_point),
	};
	return RUN_GROUP(tests);
}
