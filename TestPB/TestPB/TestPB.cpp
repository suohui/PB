// TestPB.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "PBFiles/test.pb.h"
#include <fstream>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    {
        Test::User objUser;
        objUser.set_id(123);
        objUser.set_nickname("test");
        
        //����һ����ͥ�绰
        Test::User_PhoneNumber* pPhoneNumObj = objUser.add_phone();
        pPhoneNumObj->set_number("1801800180");
        pPhoneNumObj->set_type(Test::User_PhoneType_HOME);
        //����һ�������绰
        pPhoneNumObj = objUser.add_phone();
        pPhoneNumObj->set_number("1801800181");
        pPhoneNumObj->set_type(Test::User_PhoneType_WORK);

        //������д��test.pb�ļ�
        fstream fileOut("test.pb", ios::out | ios::binary | ios::trunc);
        objUser.SerializeToOstream(&fileOut);//����Ϣд���ļ���
        fileOut.close();
    }

    //��test.pb�ļ���ȡ����
    {
        Test::User objUser;
        fstream fileIn("test.pb", ios::in | ios::binary);
        if (fileIn.is_open() && objUser.ParseFromIstream(&fileIn))//���ļ����н�������Ϣ
        {
            if (objUser.has_id())
            {
                cout << "id = " << objUser.id() << endl;
            }
            if (objUser.has_nickname())
            {
                cout << "nickname = " << objUser.nickname() << endl;
            }

            int iNumCount = objUser.phone_size();
            for (int nIndex = 0; nIndex < iNumCount; ++nIndex)
            {
                auto tmpObj = objUser.phone(nIndex);
                if (tmpObj.has_number())
                {
                    cout << "number " << nIndex << " = " << tmpObj.number() << endl;
                }
                if (tmpObj.has_type())
                {
                    cout << "type " << nIndex << " = " << (int)tmpObj.type() << endl;
                }
            }
        }
    }

    google::protobuf::ShutdownProtobufLibrary();

    system("pause");
	return 0;
}
