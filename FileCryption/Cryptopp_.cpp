#include "Cryptopp_.h"
#include "WELL1024a.h"


Cryptopp_::Cryptopp_()
{
	InitWELLRNG1024a();
}

Cryptopp_::~Cryptopp_()
{
}

int Cryptopp_::EncryptoFile_AES_256(String^ password, String^ password_2, String^ inputFile, String^ outputFile)
{
	try
	{		
		int data;
		array<unsigned char>^ key = System::Text::Encoding::ASCII->GetBytes(password);

		array<unsigned char>^ key2 = System::Text::Encoding::ASCII->GetBytes(password_2);

		String^ cryptFile = outputFile;
		FileStream^ fsCrypt = gcnew FileStream(cryptFile, FileMode::Create);
		RijndaelManaged^ RMCrypto = gcnew RijndaelManaged();

		CryptoStream^ cs = gcnew CryptoStream(fsCrypt, RMCrypto->CreateEncryptor(key, key2), CryptoStreamMode::Write);
		FileStream^ fsin = gcnew FileStream(inputFile, FileMode::Open);
		while((data = fsin->ReadByte()) != -1)
		{
			cs->WriteByte((Byte)data);
		}
		cs->Close();
		fsin->Close();
		fsCrypt->Close();
		delete RMCrypto;
		delete fsin;
		delete fsCrypt;
		delete cs;
	}
	catch (UnauthorizedAccessException^)
	{
		MessageBox::Show("파일이 읽기 전용이거나 더 높은 권한이 필요합니다.");
		return 0;
	}
	catch (FileNotFoundException^)
	{
		MessageBox::Show("파일을 찾지 못하였습니다.");
		return 0;
	}
	catch (PathTooLongException^)
	{
		MessageBox::Show("파일의 이름이 너무 깁니다.");
		return 0;
	}
	catch(Exception^ e)
	{
		MessageBox::Show("오류가 발생하였습니다.\r\n관리자에게 문의하십시오.\r\n\r\n Exception : " + e);
		return 0;
	}
	return 1;
}

int Cryptopp_::EncryptoFile_AES_256(array<String^>^ password, array<String^>^ password_2, String^ inputFile)
{
	int count;
	count = EncryptoFile_AES_256(password[0], password_2[0], inputFile, inputFile + ".fc");
	return count;
}

int Cryptopp_::EncryptoFile_AES_256_2(array<String^>^ password, array<String^>^ password_2, String^ inputFile)
{
	int count;
	count = EncryptoFile_AES_256(password[0], password_2[0], inputFile, inputFile + "tmp_1");
	count = EncryptoFile_AES_256(password[1], password_2[1], inputFile + "tmp_1", inputFile + ".fc");
	File::Delete(inputFile + "tmp_1");
	return count;
}

int Cryptopp_::EncryptoFile_AES_128(String^ password, String^ password_2, String^ inputFile, String^ outputFile)
{
	try
	{
		int data;
		array<unsigned char>^ key = System::Text::Encoding::ASCII->GetBytes(password);

		array<unsigned char>^ key2 = System::Text::Encoding::ASCII->GetBytes(password_2);

		String^ cryptFile = outputFile;
		FileStream^ fsCrypt = gcnew FileStream(cryptFile, FileMode::Create);
		RijndaelManaged^ RMCrypto = gcnew RijndaelManaged();

		CryptoStream^ cs = gcnew CryptoStream(fsCrypt, RMCrypto->CreateEncryptor(key, key2), CryptoStreamMode::Write);
		FileStream^ fsin = gcnew FileStream(inputFile, FileMode::Open);
		while ((data = fsin->ReadByte()) != -1)
		{
			cs->WriteByte((Byte)data);
		}
		cs->Close();
		fsin->Close();
		fsCrypt->Close();
		delete RMCrypto;
		delete fsin;
		delete fsCrypt;
		delete cs;
	}
	catch (UnauthorizedAccessException^)
	{
		MessageBox::Show("파일이 읽기 전용이거나 더 높은 권한이 필요합니다.");
		return 0;
	}
	catch (FileNotFoundException^)
	{
		MessageBox::Show("파일을 찾지 못하였습니다.");
		return 0;
	}
	catch (PathTooLongException^)
	{
		MessageBox::Show("파일의 이름이 너무 깁니다.");
		return 0;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("오류가 발생하였습니다.\r\n관리자에게 문의하십시오.\r\n\r\n Exception : " + e);
		return 0;
	}
	return 1;
}

int Cryptopp_::EncryptoFile_AES_128(array<String^>^ password, array<String^>^ password_2, String^ inputFile)
{
	int count;
	count = EncryptoFile_AES_128(password[0], password_2[0], inputFile, inputFile + ".fc");
	return count;
}

int Cryptopp_::EncryptoFile_AES_128_2(array<String^>^ password, array<String^>^ password_2, String^ inputFile)
{
	int count;
	count = EncryptoFile_AES_128(password[0], password_2[0], inputFile, inputFile + "tmp_1");
	count = EncryptoFile_AES_128(password[1], password_2[1], inputFile + "tmp_1", inputFile + ".fc");
	File::Delete(inputFile + "tmp_1");
	return count;
}

int Cryptopp_::EncryptoFile_AES_128_3(array<String^>^ password, array<String^>^ password_2, String^ inputFile)
{
	int count;
	count = EncryptoFile_AES_128(password[0], password_2[0], inputFile, inputFile + "tmp_1");
	count = EncryptoFile_AES_128(password[1], password_2[1], inputFile + "tmp_1", inputFile + "tmp_2");
	count = EncryptoFile_AES_128(password[2], password_2[2], inputFile + "tmp_2", inputFile + ".fc");
	File::Delete(inputFile + "tmp_1");
	File::Delete(inputFile + "tmp_2");
	return count;
}

int Cryptopp_::DecryptoFile_AES(array<String^>^ password, array<String^>^ password_2, String^ inputFile, int count)
{

	String^ tmp_ = ".fc";
	String^ tmp_1 = inputFile->Substring(0, (inputFile->Length - tmp_->Length));
	int a = 0;
	switch (count)
	{
	case 1:
		a = DecryptoFile_AES(password[0], password_2[0], inputFile, tmp_1);
		break;
	case 2:
		a = DecryptoFile_AES(password[1], password_2[1], inputFile, inputFile + "tmp_1");
		a = DecryptoFile_AES(password[0], password_2[0], inputFile + "tmp_1", tmp_1);
		File::Delete(inputFile + "tmp_1");
		break;
	case 3:
		a = DecryptoFile_AES(password[2], password_2[2], inputFile, inputFile + "tmp_1");
		a = DecryptoFile_AES(password[1], password_2[1], inputFile + "tmp_1", inputFile + "tmp_2");
		a = DecryptoFile_AES(password[0], password_2[0], inputFile, tmp_1);
		File::Delete(inputFile + "tmp_1");
		File::Delete(inputFile + "tmp_2");
		break;
	}
	return a;
}

int Cryptopp_::DecryptoFile_AES(String^ password, String^ password_2, String^ inputFile, String^ outputFile)
{
	try
	{
			int data;
			array<unsigned char>^ key = System::Text::Encoding::ASCII->GetBytes(password);

			array<unsigned char>^ key2 = System::Text::Encoding::ASCII->GetBytes(password_2);

			String^ cryptFile = outputFile;  
			FileStream^ fsCrypt = gcnew FileStream(inputFile, FileMode::Open);
			RijndaelManaged^ RMCrypto = gcnew RijndaelManaged();

			CryptoStream^ cs = gcnew CryptoStream(fsCrypt, RMCrypto->CreateDecryptor(key, key2), CryptoStreamMode::Read);
			FileStream^ fsOut = gcnew FileStream(cryptFile, FileMode::Create);
			while ((data = cs->ReadByte()) != -1)
			{
				fsOut->WriteByte((Byte)data);
			}

			cs->Close();
			fsOut->Close();
			fsCrypt->Close();
			delete fsOut;
			delete fsCrypt;
			delete cs;
	}
	catch (UnauthorizedAccessException^)
	{
		MessageBox::Show("파일이 읽기 전용이거나 더 높은 권한이 필요합니다.");
		return 0;
	}
	catch (FileNotFoundException^)
	{
		MessageBox::Show("파일을 찾지 못하였습니다.");
		return 0;
	}
	catch (PathTooLongException^)
	{
		MessageBox::Show("파일의 이름이 너무 깁니다.");
		return 0;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("오류가 발생하였습니다.\r\n관리자에게 문의하십시오.\r\n\r\n Exception : " + e);
		return 0;
	}
	return 1;
}

String^ Cryptopp_::Make_RAS_key_pair(int size)
{
	if (DialogResult::Yes == MessageBox::Show(size + " 의 크기의 키를 만드시겠습니까? \n키 생성까지 많은 시간이 걸릴 수 있습니다.", Application::ProductName, MessageBoxButtons::YesNo, MessageBoxIcon::Question))
	{
		RSACryptoServiceProvider^ csp = gcnew RSACryptoServiceProvider(size);
		String^ return_xml_text = csp->ToXmlString(true)->Replace("><", ">\r\n<");
		MessageBox::Show("키 생성이 완료되었습니다.", Application::ProductName, MessageBoxButtons::OK, MessageBoxIcon::Question);
		return return_xml_text;
	}
	else
	{
		return "";
	}
}

String^ Cryptopp_::GetRandomString(int set, int length)
{
	String^ charPool = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	return GetRandomString(set, length, charPool);
}

String^ Cryptopp_::GetRandomString(int set, int length, String^ charPool)
{
	StringBuilder^ rs = gcnew StringBuilder();
	std::random_device rd;
	std::mt19937 gen;
	std::mt19937_64 gen_;
	std::uniform_int_distribution<> ran_(0, charPool->Length - 1);

	switch (set)
	{
	case 0:
		gen.seed(rd());
		while (1 != length + 1)
		{
			rs->Append(charPool[(int)ran_(gen)]);
			length--;
		}
		break;
	case 1:
		gen_.seed(rd());
		while (1 != length + 1)
		{
			rs->Append(charPool[(int)ran_(gen_)]);
			length--;
		}
		break;
	case 2:
		while (1 != length + 1)
		{
			rs->Append(charPool[(int)((double)WELLRNG1024a() * (charPool->Length))]);
			length--;
		}
	default:
		break;
	}

	return rs->ToString();
}