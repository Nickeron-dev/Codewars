#include <vector>

PeakData pick_peaks(const std::vector<int> &v) {
  PeakData result;
  for (int i = 1; i < v.size(); i++)
  {
    if ((v[i - 1] < v[i] && v[i] > v[i + 1] && i + 1 != v.size()))
    {
      result.pos.push_back(i);
      result.peaks.push_back(v[i]);
    }
    else if (v[i - 1] < v[i] && v[i] == v[i + 1] && i + 1 != v.size())
    {
      for (int j = i + 2; j < v.size(); j++)
      {
        if (v[j] > v[i + 1])
        {
          break;
        }
        else if (v[j] < v[i + 1])
        {
          result.pos.push_back(i);
          result.peaks.push_back(v[i]);
          break;
        }
      }
    }
  }
  return result;
}

