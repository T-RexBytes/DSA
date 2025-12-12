class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        int n = numberOfUsers;
        vector<int> mentions(n);
        vector<int> timestamps(n);
        auto comp = [](auto& event1, auto& event2) {
            int timestamp1 = stoi(event1[1]);
            int timestamp2 = stoi(event2[1]);
            return timestamp1 != timestamp2 ? timestamp1 < timestamp2 : event1[0][0] > event2[0][0];
        };
        sort(events.begin(), events.end(), comp);
        for (auto& event: events)
            if (event[0] == "MESSAGE") {
                int timestamp = stoi(event[1]);
                string mentions_string = event[2];
                if (mentions_string[0] == 'A') for (int i = 0; i < n; ++i) mentions[i] += 1;
                if (mentions_string[0] == 'H') for (int i = 0; i < n; ++i) mentions[i] += timestamps[i] <= timestamp;
                if (mentions_string[0] == 'i') for (int l = 0, r = mentions_string.find(' '); ; ) {
                    int id = stoi(mentions_string.substr(l + 2, r - l - 2));
                    mentions[id] += 1;
                    if (r == -1) break; else l = r + 1, r = mentions_string.find(' ', l);
                }
            } else {
                int timestamp = stoi(event[1]);
                int id = stoi(event[2]);
                timestamps[id] = timestamp + 60;
            }
        return mentions;
    }
};
