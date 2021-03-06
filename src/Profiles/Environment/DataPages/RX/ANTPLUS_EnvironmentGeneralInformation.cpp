#include <Profiles/Environment/DataPages/RX/ANTPLUS_EnvironmentGeneralInformation.h>
#include <Profiles/Environment/ANTPLUS_EnvironmentPrivateDefines.h>

EnvironmentGeneralInformation::EnvironmentGeneralInformation(AntRxDataResponse& dp) : EnvironmentBaseDataPage(dp) {
}

uint8_t EnvironmentGeneralInformation::getTransmissionInfoLocalTime() {
    return (getData(ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_BYTE) & ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_LOCALTIME_MASK) << ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_LOCALTIME_SHIFT;
}

uint8_t EnvironmentGeneralInformation::getTransmissionInfoUtcTime() {
    return (getData(ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_BYTE) & ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_UTCTIME_MASK) << ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_UTCTIME_SHIFT;
}

uint8_t EnvironmentGeneralInformation::getTransmissionInfoDefaultTransmissionRate() {
    return getData(ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_BYTE) & ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_TRANSMISSIONINFO_DEFAULTTRANSMISSIONRATE_MASK;
}

uint32_t EnvironmentGeneralInformation::getSupportedPages() {
    uint32_t pages = getData(ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_SUPPORTEDPAGES_LSB_BYTE);
    pages |= getData(ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_SUPPORTEDPAGES_LMID_BYTE) << ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_SUPPORTEDPAGES_LMID_SHIFT;
    pages |= getData(ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_SUPPORTEDPAGES_MMID_BYTE) << ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_SUPPORTEDPAGES_MMID_SHIFT;
    pages |= getData(ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_SUPPORTEDPAGES_MSB_BYTE) << ANTPLUS_ENVIRONMENT_DATAPAGE_GENERALINFORMATION_SUPPORTEDPAGES_MSB_SHIFT;
    return pages;
}
