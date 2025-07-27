#include "pch.h"
#include "CppUnitTest.h"
#include "../../src/AHT10.Shared/mode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AHT10 {
	namespace Mode {

		TEST_CLASS(Mode)
		{
		public:
			TEST_METHOD(Normal_Mode_Equals_0x00)
			{
				Aht10::Mode mode = Aht10::Mode::Normal;

				Assert::AreEqual(0x00, static_cast<int>(mode), L"Normal mode should be 0x00");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Mode::Normal), static_cast<uint8_t>(mode), L"Normal mode should be 0x00");
			}

			TEST_METHOD(Cycle_Mode_Equals_0x20)
			{
				Aht10::Mode mode = Aht10::Mode::Cycle;

				Assert::AreEqual(0x20, static_cast<int>(mode), L"Cycle mode should be 0x20");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Mode::Cycle), static_cast<uint8_t>(mode), L"Cycle mode should be 0x20");
			}


			TEST_METHOD(Calibration_Mode_Equals_0x08)
			{
				Aht10::Mode mode = Aht10::Mode::Calibration;

				Assert::AreEqual(0x08, static_cast<int>(mode), L"Calibration mode should be 0x08");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Mode::Calibration), static_cast<uint8_t>(mode), L"Calibration mode should be 0x08");
			}
		};
	}
}