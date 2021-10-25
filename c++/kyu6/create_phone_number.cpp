#include <string>
#include <assert.h>

std::string createPhoneNumber(const int arr [10]);

int main()
{
	const int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	assert(createPhoneNumber(array) ==  "(123) 456-7890");
	return 0;
}

std::string createPhoneNumber(const int arr [10]){
  std::string answer = "(";
  for ( int i = 0; i < 10; i++ )
  {
    if ( i == 3 )
    {
      answer += ") ";
    }
    
    if ( i == 6 )
    {
      answer += "-";
    }

    answer += std::to_string(arr[i]);
  }

  return answer;
}

