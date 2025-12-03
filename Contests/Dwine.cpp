#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <iomanip>

using namespace std;

void solve(int start_day, int days_to_pick, vector<int>& current_days,
           const vector<string>& agenda, int h, long long& max_free_slots) {

    if (days_to_pick == 0) {
       
        vector<int> hour_scores(24, 0);
        for (int hour = 0; hour < 24; ++hour) {
            for (int day_index : current_days) {
                if (agenda[day_index][hour] == '.') {
                    hour_scores[hour]++;
                }
            }
        }

        
        sort(hour_scores.rbegin(), hour_scores.rend());

        
        long long current_combo_free_slots = 0;
        for (int i = 0; i < h; ++i) {
            current_combo_free_slots += hour_scores[i];
        }

        
        max_free_slots = max(max_free_slots, current_combo_free_slots);
        return;
    }

    
    for (int i = start_day; i <= 7 - days_to_pick; ++i) {
        current_days.push_back(i); 
        
        
        solve(i + 1, days_to_pick - 1, current_days, agenda, h, max_free_slots);
        
        current_days.pop_back(); 
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    vector<string> agenda(7);
    for (int i = 0; i < 7; ++i) {
        cin >> agenda[i];
    }

   
    int d, h;
    cin >> d >> h;

    long long max_free_slots = 0;
    vector<int> current_days_combo;

   
    solve(0, d, current_days_combo, agenda, h, max_free_slots);

    
    double probability = static_cast<double>(max_free_slots) / (static_cast<double>(d) * h);
    cout << fixed << setprecision(12) << probability << endl;

    return 0;
}
