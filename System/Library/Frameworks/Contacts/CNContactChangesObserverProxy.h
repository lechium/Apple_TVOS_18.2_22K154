//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSArray;
@protocol CNContactChangesObserver;

__attribute__((visibility("hidden")))
@interface CNContactChangesObserverProxy : NSObject
{
    _Bool _unify;	// 8 = 0x8
    id <CNContactChangesObserver> _observer;	// 16 = 0x10
    NSArray *_keysToFetch;	// 24 = 0x18
    CNContact *_contactSnapshot;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000dcc78

@end

