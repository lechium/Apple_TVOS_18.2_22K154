//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNObservable.h>

@class ABPredicate, CNCancelationToken, CNContactsEnvironment, NSString;
@protocol CNObserver;

__attribute__((visibility("hidden")))
@interface _CNABPredicateObservable : CNObservable
{
    void *_addressBook;	// 16 = 0x10
    unsigned int _sortOrdering;	// 24 = 0x18
    ABPredicate *_predicate;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
    CNContactsEnvironment *_environment;	// 48 = 0x30
    CNCancelationToken *_cancelationToken;	// 56 = 0x38
    id <CNObserver> _observer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000107f64
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000000107eff
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 metadata:(id)arg3;	// IMP=0x0000000000107d9b
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;	// IMP=0x0000000000107d86
- (_Bool)predicateShouldContinue:(id)arg1;	// IMP=0x0000000000107d5d
- (id)subscribe:(id)arg1;	// IMP=0x00000000001077c4
- (void)dealloc;	// IMP=0x000000000010777e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

