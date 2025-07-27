#include "pch.h"
#include "CppUnitTest.h"
#include "../../src/AHT10.Shared/temperature.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AHT10 {
	namespace Temperature {

		TEST_CLASS(Temperature)
		{
		public:
			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Zero_And_Raw)
			{
				double value = 0.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Raw;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Raw");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Celsius)
			{
				double value = 0.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Celsius;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Celsius");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Farenhiet)
			{
				double value = 0.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Farenhiet;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Farenheit");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Kelvin)
			{
				double value = 0.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Kelvin;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Kelvin");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Rankine)
			{
				double value = 0.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Rankine;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Rankine");
			}

			TEST_METHOD(Humidity_Create_Returns_Instance_With_Values_Zero_And_Reaumur)
			{
				double value = 0.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Reaumur;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 0.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Reaumur");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Positive_Ten_And_Raw)
			{
				double value = 10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Raw;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Raw");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Positive_Ten_And_Celsius)
			{
				double value = 10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Celsius;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Celsius");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Positive_Ten_And_Farenhiet)
			{
				double value = 10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Farenhiet;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Farenheit");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Positive_Ten_And_Kelvin)
			{
				double value = 10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Kelvin;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Kelvin");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Positive_Ten_And_Rankine)
			{
				double value = 10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Rankine;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Rankine");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Positive_Ten_And_Reaumur)
			{
				double value = 10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Reaumur;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be 10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Reaumur");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Negative_Ten_And_Raw)
			{
				double value = -10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Raw;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Raw");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Negative_Ten_And_Celsius)
			{
				double value = -10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Celsius;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Celsius");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Negative_Ten_And_Farenhiet)
			{
				double value = -10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Farenhiet;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Farenheit");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Negative_Ten_And_Kelvin)
			{
				double value = -10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Kelvin;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Kelvin");
			}


			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Negative_Ten_And_Rankine)
			{
				double value = -10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Rankine;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Rankine");
			}

			TEST_METHOD(Temperature_Create_Returns_Instance_With_Values_Negative_Ten_And_Reaumur)
			{
				double value = -10.0;
				Aht10::Temperature::Unit unit = Aht10::Temperature::Unit::Reaumur;

				Aht10::Temperature temperature = Aht10::Temperature::create(value, unit);

				Assert::AreEqual(value, temperature.value, L"Value should be -10.0");
				Assert::AreEqual(static_cast<uint8_t>(unit), static_cast<uint8_t>(temperature.unit), L"Unit should be Reaumur");
			}
		};
	}
}