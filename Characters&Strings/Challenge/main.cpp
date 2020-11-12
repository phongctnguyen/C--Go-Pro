/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your substitution.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespace and so
forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

  string messages;
  cout << "Enter your secret message: ";
  getline(cin, messages);

  cout << "Encrypting message ..." << endl;
  string encrypted_message;
  for (char c : messages)
  {
    if (alphabet.find(c) != string::npos)
    {
      size_t pos = alphabet.find(c);
      encrypted_message += key[pos];
    }
    else
    {
      encrypted_message += c;
    }
  }

  cout << "Encrypted message " << encrypted_message << endl;

  cout << "Decrypting message ..." << endl;
  string decrypted_message;
  for (char c : encrypted_message)
  {
    if (key.find(c) != string::npos)
    {
      size_t pos = key.find(c);
      decrypted_message += alphabet[pos];
    }
    else
    {
      decrypted_message += c;
    }
  }

  cout << "decrypted message " << decrypted_message << endl;

  return 0;
}