#include "question3.h"

std::vector<double> get_cookie_ingredients(int cookies) {
    double ratio = cookies / 48.0;
    double sugar = 1.5 * ratio;
    double butter = 1 * ratio;
    double flour = 2.75 * ratio;
    std::vector<double> ingredients = {sugar, butter, flour};
    return ingredients;
}

void calculate_ingredients(int cookies, double sugar_per_cookie, double butter_per_cookie, double flour_per_cookie, double& total_sugar, double& total_butter, double& total_flour)
{
    total_sugar = cookies * sugar_per_cookie;
    total_butter = cookies * butter_per_cookie;
    total_flour = cookies * flour_per_cookie;
}

bool test_config()
{
    return true;
}