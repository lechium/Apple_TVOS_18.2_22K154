//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBSDisplayTransformer;

@interface PBFBSDisplayTransformer : NSObject
{
    id <FBSDisplayTransformer> _mainDisplayTransformer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000021b560
- (id)transformDisplayConfiguration:(id)arg1;	// IMP=0x001000000021b524
- (id)init;	// IMP=0x001000000021b4ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

