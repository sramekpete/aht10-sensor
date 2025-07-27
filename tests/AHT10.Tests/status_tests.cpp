#include "pch.h"
#include "CppUnitTest.h"
#include "../../src/AHT10.Shared/status.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AHT10 {
	namespace Status {

		TEST_CLASS(Status)
		{
		public:
			TEST_METHOD(None_Status_Equals_0x00)
			{
				Aht10::Status status = Aht10::Status::None;

				Assert::AreEqual(0x00, static_cast<int>(status), L"None status mode should be 0x00");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Status::None), static_cast<uint8_t>(status), L"None status should be 0x00");
			}

			TEST_METHOD(Calibrated_Status_Equals_0x08)
			{
				Aht10::Status status = Aht10::Status::Calibrated;

				Assert::AreEqual(0x08, static_cast<int>(status), L"Calibrated status mode should be 0x08");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Status::Calibrated), static_cast<uint8_t>(status), L"Calibrated status should be 0x08");
			}

			TEST_METHOD(Ready_Status_Equals_0x30)
			{
				Aht10::Status status = Aht10::Status::Ready;

				Assert::AreEqual(0x30, static_cast<int>(status), L"Ready status mode should be 0x30");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Status::Ready), static_cast<uint8_t>(status), L"Ready status should be 0x30");
			}


			TEST_METHOD(Busy_Status_Equals_0x30)
			{
				Aht10::Status status = Aht10::Status::Busy;

				Assert::AreEqual(0x80, static_cast<int>(status), L"Busy status mode should be 0x80");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Status::Busy), static_cast<uint8_t>(status), L"Busy status should be 0x80");
			}
		};
	}
}