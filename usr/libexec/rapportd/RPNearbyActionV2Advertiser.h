//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBAdvertiser, NSData;
@protocol OS_dispatch_queue;

@interface RPNearbyActionV2Advertiser : NSObject
{
    unsigned char _nearbyActionType;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSData *_targetData;	// 24 = 0x18
    CBAdvertiser *_actionV2Advertiser;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000081a71
@property(retain, nonatomic) CBAdvertiser *actionV2Advertiser; // @synthesize actionV2Advertiser=_actionV2Advertiser;
@property(retain, nonatomic) NSData *targetData; // @synthesize targetData=_targetData;
@property(nonatomic) unsigned char nearbyActionType; // @synthesize nearbyActionType=_nearbyActionType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)description;	// IMP=0x001000000008194a
- (void)invalidate;	// IMP=0x00100000000816b2
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000814b1

@end

