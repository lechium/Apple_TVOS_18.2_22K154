//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMTRAccessoryServer, NSDate;

__attribute__((visibility("hidden")))
@interface HMMTRPairingWindowInfoTableEntry : NSObject
{
    HMMTRAccessoryServer *_accessoryServer;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005f667
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) __weak HMMTRAccessoryServer *accessoryServer; // @synthesize accessoryServer=_accessoryServer;
- (id)initWithAccessoryServer:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000000005f5b4

@end

