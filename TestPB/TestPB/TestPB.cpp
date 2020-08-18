// TestPB.cpp : 定义控制台应用程序的入口点。
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
        
        //添加一个家庭电话
        Test::User_PhoneNumber* pPhoneNumObj = objUser.add_phone();
        pPhoneNumObj->set_number("1801800180");
        pPhoneNumObj->set_type(Test::User_PhoneType_HOME);
        //添加一个工作电话
        pPhoneNumObj = objUser.add_phone();
        pPhoneNumObj->set_number("1801800181");
        pPhoneNumObj->set_type(Test::User_PhoneType_WORK);

        //添加关注的股票信息
        Test::StockInfo *pStockInfo = objUser.mutable_stock_ids();
        pStockInfo->add_stockid(6000);
        pStockInfo->add_stockid(7000);

        //将数据写入test.pb文件
        fstream fileOut("test.pb", ios::out | ios::binary | ios::trunc);
        objUser.SerializeToOstream(&fileOut);//将消息写入文件流
        fileOut.close();
    }

    //从test.pb文件读取数据
    {
        Test::User objUser;
        fstream fileIn("test.pb", ios::in | ios::binary);
        if (fileIn.is_open() && objUser.ParseFromIstream(&fileIn))//从文件流中解析出消息
        {
            if (objUser.has_id())
            {
                cout << "id = " << objUser.id() << endl;
            }
            if (objUser.has_nickname())
            {
                cout << "nickname = " << objUser.nickname() << endl;
            }

            //获取电话信息
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
            //获取股票信息
            if (objUser.has_stock_ids())
            {
                Test::StockInfo stStockInfo = objUser.stock_ids();
                int iSize = stStockInfo.stockid_size();
                for (int nIndex = 0; nIndex < iSize; ++nIndex)
                {
                    cout << "持有股票：" << stStockInfo.stockid(nIndex) << endl;
                }
            }
        }
    }

    google::protobuf::ShutdownProtobufLibrary();

    system("pause");
	return 0;
}

