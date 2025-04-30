#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class WeatherData
{
private:
    string date;
    string day;
    string weather;
public:
    WeatherData() {}

    WeatherData(string date, string day, string weather)
    {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }

    string GetDate()
    {
        return date;
    }

    string GetWeather()
    {
        return weather;
    }

    void PrintInfo()
    {
        cout << date << ' ' << day << ' ' << weather;
    }
};

bool IsEarlierDay(WeatherData weatherData1, WeatherData weatherData2)
{
    return weatherData1.GetDate() < weatherData2.GetDate();
}

int main() {
    int n;
    cin >> n;

    WeatherData weatherData[100];

    for (int i = 0; i < n; ++i)
    {
        string date, day, weather;
        cin >> date >> day >> weather;

        weatherData[i] = WeatherData(date, day, weather);
    }

    sort(weatherData, weatherData + n, IsEarlierDay);

    for (int i = 0; i < n; ++i)
    {
        if (weatherData[i].GetWeather() == "Rain")
        {
            weatherData[i].PrintInfo();
            break;
        }
    }

    return 0;
}