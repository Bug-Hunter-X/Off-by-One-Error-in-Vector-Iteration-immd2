std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) {
  // Accessing vec[i] is safe because the index is checked against vec.size()
  if (vec[i] % 2 == 0) {
    vec.erase(vec.begin() + i); // Removing an element while iterating
  }
}