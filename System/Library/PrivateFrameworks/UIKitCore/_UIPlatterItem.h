//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIBezierPath, UIView;

__attribute__((visibility("hidden")))
@interface _UIPlatterItem : NSObject
{
    UIView *_heldView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000fca0d1
@property(readonly) __weak UIView *heldView; // @synthesize heldView=_heldView;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGPoint center;
- (id)initWithView:(id)arg1;	// IMP=0x0000000000fc9f28

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIBezierPath",?,R,N

@property(readonly, nonatomic) unsigned long long collisionBoundsType;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

