#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <random>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Security::Cryptography;
using namespace System::Text;
using namespace System::IO;

ref class Cryptopp_
{
public:
	Cryptopp_();
	~Cryptopp_();
	int EncryptoFile_AES_256(array<String^>^ password, array<String^>^ password_2, String^ inputFile);
	int EncryptoFile_AES_256(String^ password, String^ password_2, String^ inputFile, String^ outputFile);
	int EncryptoFile_AES_256_2(array<String^>^ password, array<String^>^ password_2, String^ inputFile);
	int EncryptoFile_AES_128(array<String^>^ password, array<String^>^ password_2, String^ inputFile);
	int EncryptoFile_AES_128(String^ password, String^ password_2, String^ inputFile, String^ outputFile);
	int EncryptoFile_AES_128_2(array<String^>^ password, array<String^>^ password_2, String^ inputFile);
	int EncryptoFile_AES_128_3(array<String^>^ password, array<String^>^ password_2, String^ inputFile);
	int DecryptoFile_AES(String^ password, String^ password_2, String^ inputFile, String^ outputFile);
	int DecryptoFile_AES(array<String^>^ password, array<String^>^ password_2, String^ inputFile, int count);
	String^ Make_RAS_key_pair(int size);
	String^ GetRandomString(int set, int length);
private:
	String^ GetRandomString(int set, int length, String^ charPool);
};