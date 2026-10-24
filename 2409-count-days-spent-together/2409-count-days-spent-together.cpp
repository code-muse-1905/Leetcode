class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string s=max(arriveAlice,arriveBob);
        string e=min(leaveAlice,leaveBob);
        if(s>e) return 0;
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int sD = 0, eD = 0;
        int month = stoi(s.substr(0, 2));
        int day = stoi(s.substr(3, 2));
        for (int i = 0; i < month - 1; i++)
            sD += days[i];
            sD += day;
        month = stoi(e.substr(0, 2));
        day = stoi(e.substr(3, 2));
        for (int i = 0; i < month - 1; i++)
            eD += days[i];
            eD += day;
            return eD - sD+ 1;
    }
};