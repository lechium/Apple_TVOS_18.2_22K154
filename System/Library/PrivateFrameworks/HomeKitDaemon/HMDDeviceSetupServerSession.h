//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupServerSession
{
    NSObject<OS_os_log> *_logger;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000411efc
+ (id)allowedClasses;	// IMP=0x0010000000411e1c
+ (_Bool)isSupported;	// IMP=0x0010000000411dd1
+ (long long)role;	// IMP=0x0010000000411dc6
- (void).cxx_destruct;	// IMP=0x0000000000411db3
- (_Bool)processSessionData:(id)arg1 outAccessoryUUID:(id *)arg2 outAccessoryCategory:(id *)arg3 outAccessoryIDSIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000410335
- (id)initWithHomeManager:(id)arg1 userDefaults:(id)arg2;	// IMP=0x00000000004102d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

