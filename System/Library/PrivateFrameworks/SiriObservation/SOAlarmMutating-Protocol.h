//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriObservation/NSObject-Protocol.h>

@class NSString, NSURL, NSUUID;

@protocol SOAlarmMutating <NSObject>
- (void)setIsFiring:(_Bool)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)setRepeatSchedule:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setAlarmID:(NSUUID *)arg1;
@end

