//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IKDOMBindingControllerUpdateRecord : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    CDUnknownBlockType _preUpdate;	// 16 = 0x10
    CDUnknownBlockType _update;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009053e
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType update; // @synthesize update=_update;
@property(copy, nonatomic) CDUnknownBlockType preUpdate; // @synthesize preUpdate=_preUpdate;

@end

