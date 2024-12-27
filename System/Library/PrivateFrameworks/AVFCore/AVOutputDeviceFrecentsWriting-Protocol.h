//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AVOutputDeviceFrecentsWriting <NSObject>
@property(readonly, nonatomic) long long numberOfKeysToBeSet;
- (_Bool)persistToDiskReturningError:(id *)arg1;
- (void)removeFrecencyInfoForDeviceID:(NSString *)arg1;
- (void)setFrecencyInfo:(NSDictionary *)arg1 forDeviceID:(NSString *)arg2;
@end

