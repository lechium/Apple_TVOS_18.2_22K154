//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBTVMainDisplayTransformer : NSObject
{
    struct CGRect _bounds;	// 8 = 0x8
}

- (id)transformDisplayConfiguration:(id)arg1;	// IMP=0x00200000001368fe
- (void)_handleDisplayBoundsDidChangeNotification:(id)arg1;	// IMP=0x0010000000136723
- (void)dealloc;	// IMP=0x0010000000136698
- (id)init;	// IMP=0x00100000001365e5
- (_Bool)configurationRequiresTransforming:(id)arg1;	// IMP=0x0010000000137181

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

