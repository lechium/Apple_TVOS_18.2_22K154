//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicWriteRequest, NSArray;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeWriteRequestModificationRequestPair : HMFObject
{
    HMDCharacteristicWriteRequest *_writeRequest;	// 8 = 0x8
    NSArray *_modificationRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e0a1d
@property(readonly, copy) NSArray *modificationRequests; // @synthesize modificationRequests=_modificationRequests;
@property(readonly) HMDCharacteristicWriteRequest *writeRequest; // @synthesize writeRequest=_writeRequest;
- (id)initWithWriteRequest:(id)arg1 modificationRequests:(id)arg2;	// IMP=0x00000000001e093c

@end

