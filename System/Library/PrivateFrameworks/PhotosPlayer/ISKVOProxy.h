//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol ISKVOProxyDelegate;

__attribute__((visibility("hidden")))
@interface ISKVOProxy : NSObject
{
    id _target;	// 8 = 0x8
    NSArray *_keyPaths;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    id <ISKVOProxyDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000cbc2
@property(nonatomic) __weak id <ISKVOProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000000ca44
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000c9b5
- (void)stopObservingTarget;	// IMP=0x000000000000c862
- (void)startObservingTarget;	// IMP=0x000000000000c723
- (id)initWithTarget:(id)arg1 keyPaths:(id)arg2 identifier:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000000c626

@end

