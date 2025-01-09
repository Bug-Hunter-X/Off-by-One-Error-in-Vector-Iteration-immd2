std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

// Correct approach using iterators
for (auto it = vec.begin(); it != vec.end(); ) {
  if (*it % 2 == 0) {
    it = vec.erase(it); // Erase and get the next iterator
  } else {
    ++it; // Increment only if not erasing
  }
}

//Alternative solution using a separate vector to store elements to keep
std::vector<int> vec2;
for(int x : vec){
  if(x % 2 != 0){
    vec2.push_back(x);
  }
}
vec = vec2;