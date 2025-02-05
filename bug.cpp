std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i <= vec.size(); ++i) {
  std::cout << vec[i] << " ";
}

//This code causes an out-of-bounds error because the loop condition 'i <= vec.size()' is incorrect. The last valid index of vec is vec.size()-1.