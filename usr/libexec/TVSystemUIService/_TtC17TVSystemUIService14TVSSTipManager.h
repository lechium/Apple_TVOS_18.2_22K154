//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIView, UIViewController;

@interface _TtC17TVSystemUIService14TVSSTipManager : NSObject
{
    MISSING_TYPE *tip;	// 8 = 0x8
    MISSING_TYPE *presentingViewController;	// 48 = 0x30
    MISSING_TYPE *sourceView;	// 56 = 0x38
    MISSING_TYPE *permittedArrowDirections;	// 64 = 0x40
    MISSING_TYPE *observer;	// 72 = 0x48
    MISSING_TYPE *tipViewController;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0040000000162b30
- (id)init;	// IMP=0x0010000000162ad0
- (void)stopObserving;	// IMP=0x00100000001616b0
- (void)startObserving;	// IMP=0x0010000000160fa0
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections;
@property(nonatomic, retain) UIView *sourceView; // @synthesize sourceView;
@property(nonatomic, retain) UIViewController *presentingViewController; // @synthesize presentingViewController;

@end

