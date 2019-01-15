#include <iostream>
using namespace std;

// string convertAsciiToChar(char ascii, int indexAlphaLower, int indexAlphaUpper, string cipherText)
void convertAsciiToChar(char ascii, int indexAlphaLower, int indexAlphaUpper, string& cipherText)
{

  if (isalpha(ascii))
  {
    if (isupper(ascii))
    {
      indexAlphaUpper += static_cast<int>('A');
      cipherText.push_back(indexAlphaUpper);
    }
    else if (islower(ascii))
    {
      indexAlphaLower += static_cast<int>('a');
      cipherText.push_back(indexAlphaLower);
    }
  }
  else
  {
    cipherText.push_back(ascii);
  }
}

string encryptText(string plainText, int offset)
{
  string cipherText;

  for (int i = 0; i < plainText.size(); i++)
  {
    char ascii = plainText[i];
    int indexAlphaLower = (static_cast<int>(ascii) + 7 + offset) % 26;
    int indexAlphaUpper = (static_cast<int>(ascii) - 13 + offset) % 26;

    convertAsciiToChar(ascii, indexAlphaLower, indexAlphaUpper, cipherText);
  }

  return cipherText;
}

string decryptText(string cipherText, int offset)
{
  string decipherText;

  for (int i = 0; i < cipherText.size(); i++)
  {
    char ascii = cipherText[i];
    int indexAlphaLower = (static_cast<int>(ascii) + 7 - offset) % 26;
    int indexAlphaUpper = (static_cast<int>(ascii) - 13 - offset) % 26;

    convertAsciiToChar(ascii, indexAlphaLower, indexAlphaUpper, decipherText);
  }

  return decipherText;
}

int main()
{
  string text = "@bcD3 fghijk !mn0pqr stuVwx Yz";
  int offset = 7;

  string cipherText = encryptText(text, offset);
  cout << "cipher text: " << cipherText << "\n";
  cout << "decipher text: " << decryptText(cipherText, offset) << "\n";
}
