//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HMDNEHelperClientCacheEntry : NSObject
{
    NSString *_signingId;	// 8 = 0x8
    NSArray *_identifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001df4fc
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) NSString *signingId; // @synthesize signingId=_signingId;
- (id)initWithSigningId:(id)arg1 identifiers:(id)arg2;	// IMP=0x00000000001df44f

@end

