//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PurchaseHistoryUpdateDAAPRequestEncoder : NSObject
{
    NSNumber *_revision;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000093406
- (unsigned long long)contentType;	// IMP=0x00100000000933fb
- (id)dataForRequestWithError:(id *)arg1;	// IMP=0x001000000009330c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

