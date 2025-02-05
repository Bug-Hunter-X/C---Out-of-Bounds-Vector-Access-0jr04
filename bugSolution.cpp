std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}

//Alternatively, using iterators:
for (int x : vec) {
  std::cout << x << " ";
}

//Or range-based for loop
for (auto it = vec.begin(); it != vec.end(); ++it){
  std::cout << *it << " ";
}
std::cout << std::endl; // add a newline