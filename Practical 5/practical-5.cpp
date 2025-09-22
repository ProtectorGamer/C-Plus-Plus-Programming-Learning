#include <iostream>
using namespace std;

class MetricDistance;

class ImperialDistance 
{
    float miles;

public:
    ImperialDistance() : miles(0) {}
    void read() 
    {
        cout << "Enter Distance1 (in miles):\nMiles: ";
        cin >> miles;
    }
    float getMiles() const 
    {
        return miles;
    }

    friend void combineDistances(const ImperialDistance&, const MetricDistance&);
};

class MetricDistance 
{
    int kilometers, meters;

public:
    MetricDistance() : kilometers(0), meters(0) {}
    void read() 
    {
        cout << "Enter Distance2 (in km & meters):\nKilometers: ";
        cin >> kilometers;
        cout << "Meters: ";
        cin >> meters;
    }

    float totalKilometers() const 
    {
        return kilometers + meters / 1000.0f;
    }

    friend void combineDistances(const ImperialDistance&, const MetricDistance&);
};

void combineDistances(const ImperialDistance& imp, const MetricDistance& met) 
{
    const float KM_TO_MILES = 0.621371f;
    const float MILES_TO_KM = 1.609344f;

    float km_in_miles = met.totalKilometers() * KM_TO_MILES;
    float sum_miles = imp.getMiles() + km_in_miles;

    cout << "\n[Result Displayed in Miles]" << endl;
    cout << "Total Distance: " << sum_miles << " miles" << endl;

    float miles_in_km = imp.getMiles() * MILES_TO_KM;
    float total_km = miles_in_km + met.totalKilometers();

    int km_int = static_cast<int>(total_km);
    int remaining_meters = static_cast<int>((total_km - km_int) * 1000);

    cout << "[Result Displayed in Kilometers & Meters]" << endl;
    cout << "Total Distance: " << km_int << " kilometers and " << remaining_meters << " meters" << endl;
}

int main() {
    ImperialDistance d1;
    MetricDistance d2;

    d1.read();
    d2.read();

    combineDistances(d1, d2);

    return 0;
}
