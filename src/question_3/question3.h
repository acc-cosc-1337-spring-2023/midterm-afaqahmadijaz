#ifndef QUESTION3_H
#define QUESTION3_H
#include <vector>

std::vector<double> get_cookie_ingredients(int cookies);

void calculate_ingredients(int cookies, double sugar_per_cookie, double butter_per_cookie, double flour_per_cookie, double& total_sugar, double& total_butter, double& total_flour);

bool test_config();
#endif