//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDDeferredRelinquishPlaceholder : NSObject
{
    long long _qualityOfService;	// 8 = 0x8
    NSString *_underlyingCKShortDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000094364
@property(readonly, nonatomic) NSString *underlyingCKShortDescription; // @synthesize underlyingCKShortDescription=_underlyingCKShortDescription;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, copy) NSString *description;
- (id)ckShortDescription;	// IMP=0x0000000000094242
- (id)initWithExistingWaiter:(id)arg1;	// IMP=0x00000000000941ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

