#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    std::chrono::time_point<std::chrono::system_clock> start = chrono::system_clock::now();

    // do something

    chrono::system_clock::time_point end = chrono::system_clock::now();
    auto elapsed_time = (end - start);

    chrono::hours hour = chrono::duration_cast<chrono::hours>(elapsed_time); //시간
    chrono::minutes min = chrono::duration_cast<chrono::minutes>(elapsed_time); //분
    // chrono::duration<double> sec = elapsed_time; //초
    chrono::seconds sec = chrono::duration_cast<chrono::seconds>(elapsed_time); //밀리초

    chrono::milliseconds milli_sec = chrono::duration_cast<chrono::milliseconds>(elapsed_time); //밀리초
    chrono::microseconds micro_sec = chrono::duration_cast<chrono::microseconds>(elapsed_time); //마이크로초
    chrono::nanoseconds nano_sec = elapsed_time; //나노초

    cout << "elapsed time: " << elapsed_time.count() << endl;
    cout << "hour: " << hour.count() << endl;
    cout << "min: " << min.count() << endl;
    cout << "sec: " << sec.count() << endl;
    cout << "milli_sec: " << milli_sec.count() << endl;
    cout << "micro_sec: " << micro_sec.count() << endl;
    cout << "nano_sec: " << nano_sec.count() << endl;
}