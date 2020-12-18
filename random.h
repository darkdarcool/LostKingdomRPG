#include <cstdlib>
#include <ctime>
#include <list>
#include <random>
#include <string>
#include <iostream>
template<typename Iter,typename RandomGenerator>
Iter select_randomly(Iter start,Iter end,RandomGenerator& g) {
    std::uniform_int_distribution<> dis(0,distance(start, end) - 1);
    advance(start, dis(g));
    return start;
}
template<typename Iter>
Iter select_randomly(Iter start, Iter end) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    return select_randomly(start, end, gen);
}
int pickrandint(int mini, int maxi){
  int randm;
  std::list<int>nums{};
  for(int i=0;mini+i<=maxi;++i){
    nums.push_front(mini+i);
  }
  randm=*select_randomly(nums.begin(),nums.end());
  return randm;
}
double pickrandoub(double mini, double maxi){
  double randm;
  std::list<double>nums{};
  for(double i=0;mini+i<=maxi;i+=.1){
    nums.push_front(mini+i);
  }
  randm=*select_randomly(nums.begin(),nums.end());
  return randm;
}






