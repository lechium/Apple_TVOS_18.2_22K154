//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MTContentKeyRequest, NSData, NSDate, NSError;

@interface MTContentKeyResponse : NSObject
{
    MISSING_TYPE *request;	// 8 = 0x8
    MISSING_TYPE *renewalDate;	// 15312 = 0x3bd0
    MISSING_TYPE *error;	// 15312 = 0x3bd0
    MISSING_TYPE *keyData;	// 4159505 = 0x3f7811
}

- (void).cxx_destruct;	// IMP=0x000000000022f220
- (id)init;	// IMP=0x000000000022f1a0
- (id)initWithRequest:(id)arg1 keyData:(id)arg2 renewalDate:(id)arg3 error:(id)arg4;	// IMP=0x000000000022f010
- (id)initWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x000000000022ef30
@property(nonatomic, copy) NSData *keyData;
@property(nonatomic, copy) NSError *error;
@property(nonatomic, readonly) NSDate *renewalDate;
@property(nonatomic, readonly) MTContentKeyRequest *request; // @synthesize request;

@end

