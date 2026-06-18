class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle = 6*minutes;
        double HourAngle = 30*(hour%12)+0.5*minutes;
        double angle = abs(HourAngle-minuteAngle);
        return min(angle,360-angle);
    }
};