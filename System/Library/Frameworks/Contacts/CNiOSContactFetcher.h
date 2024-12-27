//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration;

__attribute__((visibility("hidden")))
@interface CNiOSContactFetcher : NSObject
{
    void *_addressBook;	// 8 = 0x8
    CNContactFetchRequest *_fetchRequest;	// 16 = 0x10
    CDUnknownBlockType _personToContact;	// 24 = 0x18
    CNContactsEnvironment *_environment;	// 32 = 0x20
    CNManagedConfiguration *_managedConfiguration;	// 40 = 0x28
}

+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id *)arg6;	// IMP=0x006000000005782b
- (void).cxx_destruct;	// IMP=0x0000000000059aba
- (id)fetchContactsReturningMatchInfos:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000059715
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059473
- (void)dealloc;	// IMP=0x0000000000057b16
- (id)initWithFetchRequest:(id)arg1 addressBook:(void *)arg2 environment:(id)arg3 managedConfiguration:(id)arg4;	// IMP=0x00000000000579a0

@end

