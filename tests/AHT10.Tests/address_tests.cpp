#include "pch.h"
#include "CppUnitTest.h"
#include "../../src/AHT10.Shared/address.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AHT10 {
	namespace Address {

			TEST_CLASS(Address)
			{
			public:
				TEST_METHOD(Default_Adress_Equals_0x38)
				{
					Aht10::Address address = Aht10::Address::DEFAULT;

					Assert::AreEqual(0x38, static_cast<int>(address), L"Default address should be 0x38");
					Assert::AreEqual(static_cast<uint8_t>(Aht10::Address::DEFAULT), static_cast<uint8_t>(address), L"Default address should be 0x38");
				}

				TEST_METHOD(Alternative_Adress_Equals_0x39)
				{
					Aht10::Address address = Aht10::Address::ALTERNATIVE;

					Assert::AreEqual(0x39, static_cast<int>(address), L"Alternative address should be 0x39");
					Assert::AreEqual(static_cast<uint8_t>(Aht10::Address::ALTERNATIVE), static_cast<uint8_t>(address), L"Alternative address should be 0x39");
				}
			};
		}
	}