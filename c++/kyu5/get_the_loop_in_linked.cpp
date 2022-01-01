#include<vector>

int getLoopSize(Node* startNode)
{
//   std::cout << "ff: " << &startNode << '\n';
//   Node *current_node43 = startNode->getNext();
//   std::cout << "fffff: " << &*current_node43 << '\n';
//   current_node43 = current_node43->getNext();
//   std::cout << "mmm: " << &*current_node43 << '\n';
  Node *current_node = startNode;
  std::vector<Node*> all;
  while (std::count(all.begin(), all.end(), current_node) <= 0)
  {
//     std::cout << "yea: " << &*current_node << '\n';
//     std::cout << "yea: " << &current_node->getNext() << '\n';
//     Node n = *current_node;
    all.push_back(current_node);
    current_node = current_node->getNext();
//     std::cout << "yea: " << &*current_node << '\n';
    
    
  }
  current_node = current_node->getNext();
  int count = 0;
  for (int i = 0; i < all.size(); i++)
  {
    if (all[i] == current_node)
    {
      count = 1;
      if (i == all.size() - 1)
      {
        return count;
      }
    }
    count++;
  }
  return count;
}

