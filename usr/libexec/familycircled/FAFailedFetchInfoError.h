//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class FAFamilyCircle;

@interface FAFailedFetchInfoError : NSError
{
    FAFamilyCircle *_cachedFamilyCircle;	// 40 = 0x28
    NSError *_underlyingError;	// 48 = 0x30
}

+ (id)errorWithCachedFamilyCircle:(id)arg1 underlyingError:(id)arg2;	// IMP=0x004000000000b5ed
- (void).cxx_destruct;	// IMP=0x002000000000b87c
@property(readonly, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(readonly, nonatomic) FAFamilyCircle *cachedFamilyCircle; // @synthesize cachedFamilyCircle=_cachedFamilyCircle;
- (id)initWithCachedFamilyCircle:(id)arg1 underlyingError:(id)arg2;	// IMP=0x001000000000b755

@end

