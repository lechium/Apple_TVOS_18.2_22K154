//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@class NSString;

@protocol CLGyroCalibrationDatabaseProtocol <CLNotifierServiceProtocol>
- (int)syncgetNumTemperatures;
- (_Bool)syncgetWipeDatabase;
- (void)dumpDatabase:(NSString *)arg1 onCompletion:(void (^)(NSString *))arg2;
- (_Bool)syncgetInsertWithBias:(const CDStruct_03942939 *)arg1 variance:(const CDStruct_03942939 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;
- (double)syncgetLastMiniCalibration;
- (_Bool)syncgetSupportsMiniCalibration;
- (int)syncgetNonFactoryRoundCount;
- (void)getBiasFitWithReply:(void (^)(_Bool, struct))arg1;
- (_Bool)syncgetBiasFit:(CDStruct_1ec9dfc5 *)arg1;
- (void)startFactoryGYTT;
- (int)syncgetMaxDynamicTemperature;
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_03942939 *)arg1 slope:(CDStruct_03942939 *)arg2 l2Error:(CDStruct_03942939 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_03942939 *)arg5 deltaSlope:(CDStruct_03942939 *)arg6 deltaError:(CDStruct_03942939 *)arg7 isDeltaDynamic:(_Bool)arg8;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end

