#include "pch.h"
#include "CppUnitTest.h"
#include "../../src/AHT10.Shared/result.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AHT10 {
	namespace Result {

		TEST_CLASS(Result)
		{
		public:
			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Raw)
			{
				time_t timestamp = 0;
				Aht10::Humidity humidity = Aht10::Humidity::create(0.0, Aht10::Humidity::Unit::Raw);
				Aht10::Temperature temperature = Aht10::Temperature::create(0.0, Aht10::Temperature::Unit::Raw);

				Aht10::Result result = Aht10::Result::create(temperature, humidity, timestamp);

				Assert::AreEqual(humidity.value, result.humidity.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(humidity.unit), static_cast<uint8_t>(result.humidity.unit), L"Unit should be Raw");
				Assert::AreEqual(temperature.value, result.temperature.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(temperature.unit), static_cast<uint8_t>(result.temperature.unit), L"Unit should be Raw");
				Assert::AreEqual(timestamp, result.timestamp, L"Timestamp should be 0");
			}
		};
	}
}