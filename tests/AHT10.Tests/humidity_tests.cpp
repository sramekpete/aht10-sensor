#include "pch.h"
#include "CppUnitTest.h"
#include "../../src/AHT10.Shared/humidity.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AHT10 {
	namespace Humidity {

		TEST_CLASS(Humidity)
		{
		public:
			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Raw)
			{
				double value = 0.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Raw;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Raw");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Percent)
			{
				double value = 0.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Percent;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Percent");
			}


			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Ratio)
			{
				double value = 10.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Ratio;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Ratio");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Positive_Ten_And_Raw)
			{
				double value = 10.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Raw;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Raw");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Positive_Ten_And_Percent)
			{
				double value = 10.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Percent;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Percent");
			}


			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Positive_Ten_And_Ratio)
			{
				double value = 10.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Ratio;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Ratio");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Negative_Ten_And_Raw)
			{
				double value = -10.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Raw;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Raw");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Negative_Ten_And_Percent)
			{
				double value = -10.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Percent;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Percent");
			}


			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Negative_Ten_And_Ratio)
			{
				double value = -10.0;
				Aht10::Humidity::Unit unit = Aht10::Humidity::Unit::Ratio;

				Aht10::Humidity humidity = Aht10::Humidity::create(value, unit);

				Assert::AreEqual(value, humidity.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(humidity.unit), L"Unit should be Ratio");
			}
		};
	}
}