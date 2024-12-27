//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSValueTransformer;

__attribute__((visibility("hidden")))
@interface VSBindingInfo : NSObject
{
    id _unsafeObservedObject;	// 8 = 0x8
    id _weakObservedObject;	// 16 = 0x10
    NSString *_keyPath;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    NSValueTransformer *_valueTransformer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000043de5
@property(retain, nonatomic) NSValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id weakObservedObject; // @synthesize weakObservedObject=_weakObservedObject;
@property(readonly, nonatomic) id unsafeObservedObject; // @synthesize unsafeObservedObject=_unsafeObservedObject;
- (void)requireExpectedConcurrency;	// IMP=0x0000000000043af0
@property(retain, nonatomic) id value;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 options:(id)arg3;	// IMP=0x0000000000043547
- (id)init;	// IMP=0x00000000000434d8

@end

