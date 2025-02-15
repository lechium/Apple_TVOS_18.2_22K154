//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion, NSString;

__attribute__((visibility("hidden")))
@interface HMDCompositeSetting : HMFObject
{
    HMFVersion *_readVersion;	// 8 = 0x8
    HMFVersion *_writeVersion;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000002e8dd4
- (void).cxx_destruct;	// IMP=0x00000000002e8da3
@property(readonly, copy) HMFVersion *writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, copy) HMFVersion *readVersion; // @synthesize readVersion=_readVersion;
- (_Bool)isEqualValue:(id)arg1;	// IMP=0x00000000002e8cc3
- (id)attributeDescriptions;	// IMP=0x00000000002e8ba5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e8a66
- (id)initWithReadVersion:(id)arg1 writeVersion:(id)arg2;	// IMP=0x00000000002e8983

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

