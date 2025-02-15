//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLWifiServiceProtocol;

@interface CLBarometerCalibrationSourceWifi
{
    id <CLWifiServiceProtocol> _wifiServiceProxy;	// 32 = 0x20
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 40 = 0x28
    struct CLBarometerCalibrationWiFiActiveScanBuffer activeScanBuffer;	// 48 = 0x30
    double lastSubmissionToSourceAggregator;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0020000000edfc0c
- (void).cxx_destruct;	// IMP=0x0010000000edfbc9
- (void)writeWifiAPToJson:(id)arg1 withData:(const void *)arg2;	// IMP=0x0010000000edf4db
- (void)dealloc;	// IMP=0x0010000000edf46f
- (shared_ptr_760f25b1)convertAPToWifiData:(struct AccessPoint)arg1;	// IMP=0x0010000000edf3bd
- (void)processScanCache:(const void *)arg1;	// IMP=0x0010000000edf13f
- (void);	// IMP=0x0010000000ede76c
- (void)onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000ede2c8
- (void)disableSource;	// IMP=0x0010000000ede24f
- (void)enableSource;	// IMP=0x0010000000ede1ac
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000eddf29

@end

