#include <Profiles/HeartRate/Monitor/ANTPLUS_ProfileHeartRateMonitor.h>
#include <Profiles/HeartRate/ANTPLUS_HeartRatePrivateDefines.h>

ProfileHeartRateMonitor::ProfileHeartRateMonitor(uint8_t channelId) : BaseSlaveProfile(channelId) {
    setChannelId(channelId);
}

void ProfileHeartRateMonitor::onBroadcastData(BroadcastData& msg) {
    HeartRateBaseMainDataPage dp; // TODO finish cast from msg here
    uint8_t dataPage = 0;
    bool called = false;
    switch (dataPage) {
    case ANTPLUS_HEARTRATE_DATAPAGE_DEFAULT_NUMBER:
        called = handleDefault(dp);
        break;
    case ANTPLUS_HEARTRATE_DATAPAGE_CUMULATIVEOPERATINGTIME_NUMBER:
        called = handleCumulativeOperatingTime(dp);
        break;
    case ANTPLUS_HEARTRATE_DATAPAGE_MANUFACTURERINFORMATION_NUMBER:
        called = handleManufacturerInformation(dp);
        break;
    case ANTPLUS_HEARTRATE_DATAPAGE_PRODUCTINFORMATION_NUMBER:
        called = handleProductInformation(dp);
        break;
    case ANTPLUS_HEARTRATE_DATAPAGE_PREVIOUSHEARTBEAT_NUMBER:
        called = handlePreviousHeartBeat(dp);
        break;
    case ANTPLUS_HEARTRATE_DATAPAGE_SWIMINTERVALSUMMARY_NUMBER:
        called = handleSwimIntervalSummary(dp);
        break;
    case ANTPLUS_HEARTRATE_DATAPAGE_BATTERYSTATUS_NUMBER:
        called = handleBatteryStatus(dp);
        break;
    // TODO mode settings
    }
}

void ProfileHeartRateMonitor::begin() {
    // TODO
}

void ProfileHeartRateMonitor::stop() {
    // TODO
}

bool ProfileHeartRateMonitor::handleBatteryStatus(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}

bool ProfileHeartRateMonitor::handleCumulativeOperatingTime(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}

bool ProfileHeartRateMonitor::handleDefault(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}

bool ProfileHeartRateMonitor::handleManufacturerInformation(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}

bool ProfileHeartRateMonitor::handlePreviousHeartBeat(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}

bool ProfileHeartRateMonitor::handleProductInformation(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}

bool ProfileHeartRateMonitor::handleSwimIntervalSummary(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}

bool ProfileHeartRateMonitor::handleModeSettings(HeartRateBaseMainDataPage& dataPage) {
    // TODO
}
