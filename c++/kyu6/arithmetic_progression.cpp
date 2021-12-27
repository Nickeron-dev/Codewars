static long findMissing(std::vector<long> list){
  int difference;
  if (list[1] - list[0] == list[2] - list[1]) {
    difference = list[1] - list[0];
  }
  else if (list[1] - list[0] == (list[2] - list[1]) / 2) {
    difference = list[1] - list[0];
  }
  else {
    difference = (list[1] - list[0]) / 2;
  }
  
  for (int i = 1; i < list.size(); i++) {
    if (difference != list[i] - list[i - 1]) {
      return list[i - 1] + difference;
    }
  }
  return 0;
}

