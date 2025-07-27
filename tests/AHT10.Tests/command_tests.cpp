#include "pch.h"
#include "CppUnitTest.h"
#include "../../src/AHT10.Shared/command.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AHT10 {
	namespace Command {

		TEST_CLASS(Command)
		{
		public:
			TEST_METHOD(Empty_Command_Equals_0x00)
			{
				Aht10::Command command = Aht10::Command::Empty;

				Assert::AreEqual(0x00, static_cast<int>(command), L"Empty command should be 0x00");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Command::Empty), static_cast<uint8_t>(command), L"Empty command should be 0x00");
			}

			TEST_METHOD(Initialize_Command_Equals_0xE1)
			{
				Aht10::Command command = Aht10::Command::Initialize;

				Assert::AreEqual(0xE1, static_cast<int>(command), L"Initialize command should be 0xE1");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Command::Initialize), static_cast<uint8_t>(command), L"Initialize command should be 0xE1");
			}

			TEST_METHOD(Calibrate_Command_Equals_0x08)
			{
				Aht10::Command command = Aht10::Command::Calibrate;

				Assert::AreEqual(0x08, static_cast<int>(command), L"Calibrate command should be 0x08");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Command::Calibrate), static_cast<uint8_t>(command), L"Calibrate command should be 0x08");
			}

			TEST_METHOD(Measure_Command_Equals_0xAC)
			{
				Aht10::Command command = Aht10::Command::Measure;

				Assert::AreEqual(0xAC, static_cast<int>(command), L"Measure command should be 0xAC");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Command::Measure), static_cast<uint8_t>(command), L"Measure command should be 0xAC");
			}

			TEST_METHOD(Read_Command_Equals_0x33)
			{
				Aht10::Command command = Aht10::Command::Read;

				Assert::AreEqual(0x33, static_cast<int>(command), L"Read command should be 0x33");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Command::Read), static_cast<uint8_t>(command), L"Read command should be 0x33");
			}

			TEST_METHOD(Reset_Command_Equals_0xBA)
			{
				Aht10::Command command = Aht10::Command::Reset;

				Assert::AreEqual(0xBA, static_cast<int>(command), L"Reset command should be 0xBA");
				Assert::AreEqual(static_cast<uint8_t>(Aht10::Command::Reset), static_cast<uint8_t>(command), L"Reset command should be 0xBA");
			}
		};
	}
}