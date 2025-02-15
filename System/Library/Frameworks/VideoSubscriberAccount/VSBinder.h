//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VSBinder : NSObject
{
    _Bool _establishmentProhibited;	// 8 = 0x8
    id _boundObject;	// 16 = 0x10
    NSCountedSet *_currentlyChangingBindings;	// 24 = 0x18
    NSMutableDictionary *_establishedBindings;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003f9e9
@property(retain, nonatomic) NSMutableDictionary *establishedBindings; // @synthesize establishedBindings=_establishedBindings;
@property(retain, nonatomic) NSCountedSet *currentlyChangingBindings; // @synthesize currentlyChangingBindings=_currentlyChangingBindings;
@property(nonatomic, getter=isEstablishmentProhibited) _Bool establishmentProhibited; // @synthesize establishmentProhibited=_establishmentProhibited;
@property(readonly, nonatomic) __weak id boundObject; // @synthesize boundObject=_boundObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003f487
- (void)setValue:(id)arg1 forBinding:(id)arg2;	// IMP=0x000000000003f2e1
- (id)valueForBinding:(id)arg1;	// IMP=0x000000000003f105
- (void)tearDownBinding:(id)arg1;	// IMP=0x000000000003eb6f
- (void)establishBinding:(id)arg1 withInfo:(id)arg2;	// IMP=0x000000000003e8d5
- (id)_infoForBinding:(id)arg1;	// IMP=0x000000000003e801
- (void)dealloc;	// IMP=0x000000000003e613
- (id)initWithBoundObject:(id)arg1;	// IMP=0x000000000003e54a
- (id)init;	// IMP=0x000000000003e4db

@end

