//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriObservation/NSObject-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;

@protocol SOTimerMutating <NSObject>
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setDismissedDate:(NSDate *)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setFireDate:(NSDate *)arg1;
- (void)setFireTimeInterval:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setIsFiring:(_Bool)arg1;
- (void)setTimerURL:(NSURL *)arg1;
- (void)setTimerID:(NSUUID *)arg1;
@end

